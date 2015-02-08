


#include "IxOsal.h"
#include "IxQMgr.h"
#include "IxQMgrAqmIf_p.h"
#include "IxQMgrQCfg_p.h"
#include "IxQMgrDefines_p.h"


#define IX_QMGR_MIN_ENTRY_SIZE_IN_WORDS 16

/* Total size of SRAM */
#define IX_QMGR_AQM_SRAM_SIZE_IN_BYTES 0x4000

#define IX_QMGR_QID_IS_VALID(qId) \
(((qId) >= (IX_QMGR_MIN_QID)) && ((qId) <= (IX_QMGR_MAX_QID)))


typedef struct
{
    char qName[IX_QMGR_MAX_QNAME_LEN+1];       /* Textual description of a queue*/
    IxQMgrQSizeInWords qSizeInWords;           /* The number of words in the queue */
    IxQMgrQEntrySizeInWords qEntrySizeInWords; /* Number of words per queue entry*/
    BOOL isConfigured;                         /* This flag is TRUE if the queue has
                                                *   been configured
                                                */
} IxQMgrCfgQ;


extern UINT32 * ixQMgrAqmIfQueAccRegAddr[]; 

IxQMgrQInlinedReadWriteInfo ixQMgrQInlinedReadWriteInfo[IX_QMGR_MAX_NUM_QUEUES];

static IxQMgrCfgQ cfgQueueInfo[IX_QMGR_MAX_NUM_QUEUES];

static UINT32 freeSramAddress=0;

/* 4 words of zeroed memory for inline access */
static UINT32 zeroedPlaceHolder[4] = { 0, 0, 0, 0 };

static BOOL cfgInitialized = FALSE;

static IxOsalMutex ixQMgrQCfgMutex;

static IxQMgrQCfgStats stats;

PRIVATE BOOL
watermarkLevelIsOk (IxQMgrQId qId, IxQMgrWMLevel level);

PRIVATE BOOL
qSizeInWordsIsOk (IxQMgrQSizeInWords qSize);

PRIVATE BOOL
qEntrySizeInWordsIsOk (IxQMgrQEntrySizeInWords entrySize);

void
ixQMgrQCfgInit (void)
{
    int loopIndex;
    
    for (loopIndex=0; loopIndex < IX_QMGR_MAX_NUM_QUEUES;loopIndex++)
    {
	/* info for code inlining */
	ixQMgrAqmIfQueAccRegAddr[loopIndex] = zeroedPlaceHolder;

	/* info for code inlining */
	ixQMgrQInlinedReadWriteInfo[loopIndex].qReadCount = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qWriteCount = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qAccRegAddr = zeroedPlaceHolder;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qUOStatRegAddr = zeroedPlaceHolder;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qUflowStatBitMask = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qOflowStatBitMask = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qEntrySizeInWords = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qSizeInEntries = 0;
	ixQMgrQInlinedReadWriteInfo[loopIndex].qConfigRegAddr = zeroedPlaceHolder;
   }

    /* Initialise the AqmIf component */
    ixQMgrAqmIfInit ();
   
    /* Reset all queues to have queue name = NULL, entry size = 0 and
     * isConfigured = false
     */
    for (loopIndex=0; loopIndex < IX_QMGR_MAX_NUM_QUEUES;loopIndex++)
    {
	strcpy (cfgQueueInfo[loopIndex].qName, "");
	cfgQueueInfo[loopIndex].qSizeInWords = 0;
	cfgQueueInfo[loopIndex].qEntrySizeInWords = 0;
	cfgQueueInfo[loopIndex].isConfigured = FALSE;

	/* Statistics */
	stats.qStats[loopIndex].isConfigured = FALSE;
	stats.qStats[loopIndex].qName = cfgQueueInfo[loopIndex].qName;
    }

    /* Statistics */
    stats.wmSetCnt = 0;

    ixQMgrAqmIfSramBaseAddressGet (&freeSramAddress);
    
    ixOsalMutexInit(&ixQMgrQCfgMutex);

    cfgInitialized = TRUE;
}

void
ixQMgrQCfgUninit (void)
{
    cfgInitialized = FALSE;

    /* Uninitialise the AqmIf component */
    ixQMgrAqmIfUninit ();
}

IX_STATUS
ixQMgrQConfig (char *qName,
	      IxQMgrQId qId,
	      IxQMgrQSizeInWords qSizeInWords,
	      IxQMgrQEntrySizeInWords qEntrySizeInWords)
{
    UINT32 aqmLocalBaseAddress;

    if (!cfgInitialized)
    {
        return IX_FAIL;
    }
    
    if (!IX_QMGR_QID_IS_VALID(qId))
    {
	return IX_QMGR_INVALID_Q_ID;
    }
    
    else if (NULL == qName)
    {
	return IX_QMGR_PARAMETER_ERROR;
    }
    
    else if (strlen (qName) > IX_QMGR_MAX_QNAME_LEN)
    {
	return IX_QMGR_PARAMETER_ERROR;
    }

    else if (!qSizeInWordsIsOk (qSizeInWords))
    {
	return IX_QMGR_INVALID_QSIZE;
    }

    else if (!qEntrySizeInWordsIsOk (qEntrySizeInWords))
    {
	return IX_QMGR_INVALID_Q_ENTRY_SIZE;
    }
    
    else if (cfgQueueInfo[qId].isConfigured)
    {
	return IX_QMGR_Q_ALREADY_CONFIGURED;
    }
   
    ixOsalMutexLock(&ixQMgrQCfgMutex, IX_OSAL_WAIT_FOREVER);

    /* Write the config register */
    ixQMgrAqmIfQueCfgWrite (qId,
			   qSizeInWords,
			   qEntrySizeInWords,
			   freeSramAddress);


    strcpy (cfgQueueInfo[qId].qName, qName);
    cfgQueueInfo[qId].qSizeInWords = qSizeInWords;
    cfgQueueInfo[qId].qEntrySizeInWords = qEntrySizeInWords;

    /* store pre-computed information in the same cache line
     * to facilitate inlining of QRead and QWrite functions 
     * in IxQMgr.h
     */
    ixQMgrQInlinedReadWriteInfo[qId].qReadCount = 0;
    ixQMgrQInlinedReadWriteInfo[qId].qWriteCount = 0;
    ixQMgrQInlinedReadWriteInfo[qId].qEntrySizeInWords = qEntrySizeInWords;
    ixQMgrQInlinedReadWriteInfo[qId].qSizeInEntries = 
		(UINT32)qSizeInWords / (UINT32)qEntrySizeInWords;

    /* Calculate the new freeSramAddress from the size of the queue
     * currently being configured.
     */
    freeSramAddress += (qSizeInWords * IX_QMGR_NUM_BYTES_PER_WORD);

    /* Get the virtual SRAM address */
    ixQMgrAqmIfBaseAddressGet (&aqmLocalBaseAddress);

    IX_OSAL_ASSERT((freeSramAddress - (aqmLocalBaseAddress + (IX_QMGR_QUEBUFFER_SPACE_OFFSET))) <=
	      IX_QMGR_QUE_BUFFER_SPACE_SIZE);

    /* The queue is now configured */
    cfgQueueInfo[qId].isConfigured = TRUE;

    ixOsalMutexUnlock(&ixQMgrQCfgMutex);

#ifndef NDEBUG
    /* Update statistics */
    stats.qStats[qId].isConfigured = TRUE;
    stats.qStats[qId].qName = cfgQueueInfo[qId].qName;
#endif
    return IX_SUCCESS;
}

IxQMgrQSizeInWords
ixQMgrQSizeInWordsGet (IxQMgrQId qId)
{
    /* No parameter checking as this is used on the data path */
    return (cfgQueueInfo[qId].qSizeInWords);
}

IX_STATUS
ixQMgrQSizeInEntriesGet (IxQMgrQId qId,
			 unsigned *qSizeInEntries)
{
    if (!ixQMgrQIsConfigured(qId))
    {
        return IX_QMGR_Q_NOT_CONFIGURED;
    }

    if(NULL == qSizeInEntries)
    {
        return IX_QMGR_PARAMETER_ERROR;
    }

    *qSizeInEntries = (UINT32)(cfgQueueInfo[qId].qSizeInWords) /
        (UINT32)cfgQueueInfo[qId].qEntrySizeInWords;

    return IX_SUCCESS;
}

IxQMgrQEntrySizeInWords
ixQMgrQEntrySizeInWordsGet (IxQMgrQId qId)
{
    /* No parameter checking as this is used on the data path */
    return (cfgQueueInfo[qId].qEntrySizeInWords);
}

IX_STATUS
ixQMgrWatermarkSet (IxQMgrQId qId,
		    IxQMgrWMLevel ne,
		    IxQMgrWMLevel nf)
{    
    IxQMgrQStatus qStatusOnEntry;/* The queue status on entry/exit */
    IxQMgrQStatus qStatusOnExit; /* to this function               */

    if (!ixQMgrQIsConfigured(qId))
    {
        return IX_QMGR_Q_NOT_CONFIGURED;
    }

    if (!watermarkLevelIsOk (qId, ne))
    {
	return IX_QMGR_INVALID_Q_WM;
    }

    if (!watermarkLevelIsOk (qId, nf))
    {
	return IX_QMGR_INVALID_Q_WM;
    }

    /* Get the current queue status */
    ixQMgrAqmIfQueStatRead (qId, &qStatusOnEntry);

#ifndef NDEBUG
    /* Update statistics */
    stats.wmSetCnt++;
#endif

    ixQMgrAqmIfWatermarkSet (qId,
			    ne,
			    nf);

    /* Get the current queue status */
    ixQMgrAqmIfQueStatRead (qId, &qStatusOnExit);
  
    /* If the status has changed return a warning */
    if (qStatusOnEntry != qStatusOnExit)
    {
	return IX_QMGR_WARNING;
    }

    return IX_SUCCESS;
}

IX_STATUS
ixQMgrAvailableSramAddressGet (UINT32 *address,
			      unsigned *sizeOfFreeRam)
{
    UINT32 aqmLocalBaseAddress;

    if ((NULL == address)||(NULL == sizeOfFreeRam)) 
    {
	return IX_QMGR_PARAMETER_ERROR;
    }
    if (!cfgInitialized)
    {
	return IX_FAIL;
    }

    *address = freeSramAddress;

    /* Get the virtual SRAM address */
    ixQMgrAqmIfBaseAddressGet (&aqmLocalBaseAddress);

    /* 
     * Calculate the size in bytes of free sram 
     * i.e. current free SRAM virtual pointer from
     *      (base + total size)
     */
    *sizeOfFreeRam = 
	(aqmLocalBaseAddress +
	IX_QMGR_AQM_SRAM_SIZE_IN_BYTES) -
	freeSramAddress;

    if (0 == *sizeOfFreeRam)
    {
	return IX_QMGR_NO_AVAILABLE_SRAM;
    }

    return IX_SUCCESS;
}

BOOL
ixQMgrQIsConfigured (IxQMgrQId qId)
{
    if (!IX_QMGR_QID_IS_VALID(qId))
    {
	return FALSE;
    }

    return cfgQueueInfo[qId].isConfigured;
}

IxQMgrQCfgStats*
ixQMgrQCfgStatsGet (void)
{
    return &stats;
}

IxQMgrQCfgStats*
ixQMgrQCfgQStatsGet (IxQMgrQId qId)
{
    unsigned int ne;
    unsigned int nf;
    UINT32 baseAddress;
    UINT32 readPtr;
    UINT32 writePtr;

    stats.qStats[qId].qSizeInWords = cfgQueueInfo[qId].qSizeInWords;
    stats.qStats[qId].qEntrySizeInWords = cfgQueueInfo[qId].qEntrySizeInWords;
    
    if (IX_SUCCESS != ixQMgrQNumEntriesGet (qId, &stats.qStats[qId].numEntries))
    {
        if (IX_QMGR_WARNING != ixQMgrQNumEntriesGet (qId, &stats.qStats[qId].numEntries))
        {
	   IX_QMGR_LOG_WARNING1("Failed to get the number of entries in queue.... %d\n", qId);
        }
    }

    ixQMgrAqmIfQueCfgRead (qId,
			   stats.qStats[qId].numEntries,
			   &baseAddress,
			   &ne,
			   &nf,
			   &readPtr,
			   &writePtr);
        
    stats.qStats[qId].baseAddress = baseAddress;
    stats.qStats[qId].ne = ne;
    stats.qStats[qId].nf = nf;
    stats.qStats[qId].readPtr = readPtr;
    stats.qStats[qId].writePtr = writePtr;

    return &stats;
}


PRIVATE BOOL
watermarkLevelIsOk (IxQMgrQId qId, IxQMgrWMLevel level)
{
    unsigned qSizeInEntries;

    switch (level)
    {
	case IX_QMGR_Q_WM_LEVEL0: 
	case IX_QMGR_Q_WM_LEVEL1: 
	case IX_QMGR_Q_WM_LEVEL2: 
	case IX_QMGR_Q_WM_LEVEL4: 
	case IX_QMGR_Q_WM_LEVEL8: 
	case IX_QMGR_Q_WM_LEVEL16:
	case IX_QMGR_Q_WM_LEVEL32:
	case IX_QMGR_Q_WM_LEVEL64:
	    break;
	default:
	    return FALSE;
    }

    /* Check watermark is not bigger than the qSizeInEntries */
    ixQMgrQSizeInEntriesGet(qId, &qSizeInEntries);

    if ((unsigned)level > qSizeInEntries)
    {
	return FALSE;
    }

    return TRUE;
}

PRIVATE BOOL
qSizeInWordsIsOk (IxQMgrQSizeInWords qSize)
{
    BOOL status;

    switch (qSize)
    {	
	case IX_QMGR_Q_SIZE16:
	case IX_QMGR_Q_SIZE32:
	case IX_QMGR_Q_SIZE64:
	case IX_QMGR_Q_SIZE128:
	    status = TRUE;
	    break;
	default:
	    status = FALSE;
	    break;
    }

    return status;
}

PRIVATE BOOL
qEntrySizeInWordsIsOk (IxQMgrQEntrySizeInWords entrySize)
{
    BOOL status;

    switch (entrySize)
    {
	case IX_QMGR_Q_ENTRY_SIZE1:
	case IX_QMGR_Q_ENTRY_SIZE2:
	case IX_QMGR_Q_ENTRY_SIZE4:
	    status = TRUE;
	    break;
	default:
	    status = FALSE;
	    break;
    }

    return status;
}