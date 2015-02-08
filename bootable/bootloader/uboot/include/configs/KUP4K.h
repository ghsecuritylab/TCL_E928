


#ifndef __CONFIG_H
#define __CONFIG_H


#define CONFIG_MPC855		1	/* This is a MPC855 CPU		*/
#define CONFIG_KUP4K		1	/* ...on a KUP4K module */

#define CONFIG_8xx_CONS_SMC1	1	/* Console is on SMC1		*/
#undef	CONFIG_8xx_CONS_SMC2
#undef	CONFIG_8xx_CONS_NONE
#define CONFIG_BAUDRATE		115200	/* console baudrate		*/
#if 0
#define CONFIG_BOOTDELAY	-1	/* autoboot disabled		*/
#else
#define CONFIG_BOOTDELAY	1	/* autoboot after 1 second	*/
#endif

#define CONFIG_BOARD_TYPES	1	/* support board types		*/


#undef	CONFIG_BOOTARGS


#define CONFIG_EXTRA_ENV_SETTINGS						\
"slot_a_boot=setenv bootargs root=/dev/hda2 ip=off;"				\
 "run addhw; diskboot 200000 0:1; bootm 200000\0"				\
"slot_b_boot=setenv bootargs root=/dev/hda2 ip=off;"				\
 "run addhw; diskboot 200000 2:1; bootm 200000\0"				\
"nfs_boot=dhcp; run nfsargs addip addhw; bootm 200000\0"			\
"panic_boot=echo No Bootdevice !!! reset\0"					\
"nfsargs=setenv bootargs root=/dev/nfs rw nfsroot=${serverip}:${rootpath}\0"	\
"ramargs=setenv bootargs root=/dev/ram rw\0"					\
"addip=setenv bootargs ${bootargs} ip=${ipaddr}:${serverip}:${gatewayip}"	\
 ":${netmask}:${hostname}:${netdev}:off\0"					\
"addhw=setenv bootargs ${bootargs} hw=${hw} key1=${key1} panic=1\0"		\
"netdev=eth0\0"									\
"contrast=55\0"									\
"silent=1\0"									\
"load=tftp 200000 bootloader-4k.bitmap;tftp 100000 bootloader-4k.bin\0"		\
"update=protect off 1:0-7;era 1:0-7;cp.b 100000 40000000 ${filesize};"		\
 "cp.b 200000 40050000 14000\0"

#define CONFIG_BOOTCOMMAND  \
    "run slot_a_boot;run slot_b_boot;run nfs_boot;run panic_boot"


#define CONFIG_MISC_INIT_R	1
#define CONFIG_MISC_INIT_F	1

#define CONFIG_LOADS_ECHO	1	/* echo on for serial download	*/
#undef	CONFIG_SYS_LOADS_BAUD_CHANGE		/* don't allow baudrate change	*/

#define	CONFIG_WATCHDOG	1		/* watchdog enabled		*/

#define CONFIG_STATUS_LED	1	/* Status LED enabled		*/

#undef	CONFIG_CAN_DRIVER		/* CAN Driver support disabled	*/

#define CONFIG_BOOTP_SUBNETMASK
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_BOOTFILESIZE


#define CONFIG_MAC_PARTITION
#define CONFIG_DOS_PARTITION


#undef	CONFIG_HARD_I2C			/* I2C with hardware support	*/
#define	CONFIG_SOFT_I2C         1	/* I2C bit-banged		*/

#define CONFIG_SYS_I2C_SPEED		93000	/* 93 kHz is supposed to work	*/
#define CONFIG_SYS_I2C_SLAVE		0xFE

#ifdef CONFIG_SOFT_I2C
#define PB_SCL		0x00000020	/* PB 26 */
#define PB_SDA		0x00000010	/* PB 27 */

#define I2C_INIT	(immr->im_cpm.cp_pbdir |=  PB_SCL)
#define I2C_ACTIVE	(immr->im_cpm.cp_pbdir |=  PB_SDA)
#define I2C_TRISTATE	(immr->im_cpm.cp_pbdir &= ~PB_SDA)
#define I2C_READ	((immr->im_cpm.cp_pbdat & PB_SDA) != 0)
#define I2C_SDA(bit)	if(bit) immr->im_cpm.cp_pbdat |=  PB_SDA; \
			else    immr->im_cpm.cp_pbdat &= ~PB_SDA
#define I2C_SCL(bit)	if(bit) immr->im_cpm.cp_pbdat |=  PB_SCL; \
			else    immr->im_cpm.cp_pbdat &= ~PB_SCL
#define I2C_DELAY	udelay(2)	/* 1/4 I2C clock duration */
#endif	/* CONFIG_SOFT_I2C */



#define CONFIG_SYS_I2C_PICIO_ADDR	0x21	/* PCF8574 IO Expander			*/
#define CONFIG_SYS_I2C_RTC_ADDR	0x51	/* PCF8563 RTC				*/


/* List of I2C addresses to be verified by POST */

#define I2C_ADDR_LIST	{CONFIG_SYS_I2C_PICIO_ADDR,	\
			CONFIG_SYS_I2C_RTC_ADDR,	\
			}


#define CONFIG_RTC_PCF8563		/* use Philips PCF8563 RTC	*/

#define CONFIG_SYS_DISCOVER_PHY
#define CONFIG_MII

#if 0
#define CONFIG_ETHADDR                  00:0B:64:00:00:00 /* our OUI from IEEE */
#endif
#define CONFIG_KUP4K_LOGO               0x40050000  /* Address of logo bitmap */

/* Define to allow the user to overwrite serial and ethaddr */
#define CONFIG_ENV_OVERWRITE
#if 1
/* POST support */

#define CONFIG_POST		(CONFIG_SYS_POST_CPU	   | \
				 CONFIG_SYS_POST_RTC	   | \
				 CONFIG_SYS_POST_I2C)
#endif


#include <config_cmd_default.h>

#define CONFIG_CMD_DATE
#define CONFIG_CMD_DHCP
#define CONFIG_CMD_I2C
#define CONFIG_CMD_IDE
#define CONFIG_CMD_NFS
#define CONFIG_CMD_SNTP

#ifdef CONFIG_POST
    #define CONFIG_CMD_DIAG
#endif

#define CONFIG_SYS_LONGHELP			/* undef to save memory		*/
#define CONFIG_SYS_PROMPT	"=> "		/* Monitor Command Prompt	*/
#if defined(CONFIG_CMD_KGDB)
#define CONFIG_SYS_CBSIZE	1024		/* Console I/O Buffer Size	*/
#else
#define CONFIG_SYS_CBSIZE	256		/* Console I/O Buffer Size	*/
#endif
#define CONFIG_SYS_PBSIZE (CONFIG_SYS_CBSIZE+sizeof(CONFIG_SYS_PROMPT)+16) /* Print Buffer Size */
#define CONFIG_SYS_MAXARGS	16		/* max number of command args	*/
#define CONFIG_SYS_BARGSIZE	CONFIG_SYS_CBSIZE	/* Boot Argument Buffer Size	*/

#define CONFIG_SYS_MEMTEST_START	0x000400000	/* memtest works on	*/
#define CONFIG_SYS_MEMTEST_END		0x002C00000	/* 4 ... 44 MB in DRAM	*/

#define CONFIG_SYS_LOAD_ADDR		0x200000	/* default load address */

#define CONFIG_SYS_HZ		1000		/* decrementer freq: 1 ms ticks */

#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600, 19200, 38400, 115200 }

#define CONFIG_SYS_CONSOLE_INFO_QUIET 1

#define CONFIG_SYS_IMMR		0xFFF00000

#define CONFIG_SYS_INIT_RAM_ADDR	CONFIG_SYS_IMMR
#define CONFIG_SYS_INIT_RAM_END	0x2F00	/* End of used area in DPRAM	*/
#define CONFIG_SYS_GBL_DATA_SIZE	64  /* size in bytes reserved for initial data */
#define CONFIG_SYS_GBL_DATA_OFFSET	(CONFIG_SYS_INIT_RAM_END - CONFIG_SYS_GBL_DATA_SIZE)
#define CONFIG_SYS_INIT_SP_OFFSET	CONFIG_SYS_GBL_DATA_OFFSET

#define CONFIG_SYS_SDRAM_BASE		0x00000000
#define CONFIG_SYS_FLASH_BASE		0x40000000
#define CONFIG_SYS_MONITOR_LEN		(192 << 10)	/* Reserve 192 kB for Monitor	*/
#define CONFIG_SYS_MONITOR_BASE	CONFIG_SYS_FLASH_BASE
#define CONFIG_SYS_MALLOC_LEN		(128 << 10)	/* Reserve 128 kB for malloc()	*/

#define CONFIG_SYS_BOOTMAPSZ		(8 << 20)	/* Initial Memory map for Linux */

#define CONFIG_SYS_MAX_FLASH_BANKS	1	/* max number of memory banks		*/
#define CONFIG_SYS_MAX_FLASH_SECT	19	/* max number of sectors on one chip	*/

#define CONFIG_SYS_FLASH_ERASE_TOUT	120000	/* Timeout for Flash Erase (in ms)	*/
#define CONFIG_SYS_FLASH_WRITE_TOUT	500	/* Timeout for Flash Write (in ms)	*/

#define CONFIG_ENV_IS_IN_FLASH	1
#define CONFIG_ENV_OFFSET		0x40000 /*   Offset   of Environment Sector	*/
#define CONFIG_ENV_SIZE		0x1000	/* Total Size of Environment Sector	*/
#define CONFIG_ENV_SECT_SIZE	0x10000

/* Address and size of Redundant Environment Sector	*/
#if 0
#define CONFIG_ENV_OFFSET_REDUND	(CONFIG_ENV_OFFSET+CONFIG_ENV_SIZE)
#define CONFIG_ENV_SIZE_REDUND	(CONFIG_ENV_SIZE)
#endif
#if 1
#define CONFIG_SYS_HWINFO_OFFSET	0x000F0000	/* offset of HW Info block */
#define CONFIG_SYS_HWINFO_SIZE		0x00000100	/* size   of HW Info block */
#define CONFIG_SYS_HWINFO_MAGIC	0x4B26500D	/* 'K&P<CR>' */
#endif
#define CONFIG_SYS_CACHELINE_SIZE	16	/* For all MPC8xx CPUs			*/
#if defined(CONFIG_CMD_KGDB)
#define CONFIG_SYS_CACHELINE_SHIFT	4	/* log base 2 of the above value	*/
#endif

#if 0 && defined(CONFIG_WATCHDOG)       /* KUP uses external TPS3705 WD */
#define CONFIG_SYS_SYPCR	(SYPCR_SWTC | SYPCR_BMT | SYPCR_BME | SYPCR_SWF | \
			 SYPCR_SWE  | SYPCR_SWRI| SYPCR_SWP)
#else
#define CONFIG_SYS_SYPCR	(SYPCR_SWTC | SYPCR_BMT | SYPCR_BME | SYPCR_SWF | SYPCR_SWP)
#endif

#define CONFIG_SYS_SIUMCR	(SIUMCR_DBGC00 | SIUMCR_DBPC00 | SIUMCR_MLRC00)

#define CONFIG_SYS_TBSCR	(TBSCR_REFA | TBSCR_REFB | TBSCR_TBF)

#define CONFIG_SYS_RTCSC	(RTCSC_SEC | RTCSC_ALR | RTCSC_RTF| RTCSC_RTE)

#define CONFIG_SYS_PISCR	(PISCR_PS | PISCR_PITF)

#define CONFIG_SYS_PLPRCR ( (5-1)<<PLPRCR_MF_SHIFT | PLPRCR_TEXPS | PLPRCR_TMIST )

#define SCCR_MASK	SCCR_EBDF00
#define CONFIG_SYS_SCCR	(SCCR_TBS | SCCR_EBDF01 |  \
			 SCCR_COM00   | SCCR_DFSYNC00 | SCCR_DFBRG00  | \
			 SCCR_DFNL000 | SCCR_DFNH000  | SCCR_DFLCD000 | \
			 SCCR_DFALCD00)


/* KUP4K use both slots, SLOT_A as "primary". */
#define CONFIG_PCMCIA_SLOT_A 1

#define CONFIG_SYS_PCMCIA_MEM_ADDR	(0xE0000000)
#define CONFIG_SYS_PCMCIA_MEM_SIZE	( 64 << 20 )
#define CONFIG_SYS_PCMCIA_DMA_ADDR	(0xE4000000)
#define CONFIG_SYS_PCMCIA_DMA_SIZE	( 64 << 20 )
#define CONFIG_SYS_PCMCIA_ATTRB_ADDR	(0xE8000000)
#define CONFIG_SYS_PCMCIA_ATTRB_SIZE	( 64 << 20 )
#define CONFIG_SYS_PCMCIA_IO_ADDR	(0xEC000000)
#define CONFIG_SYS_PCMCIA_IO_SIZE	( 64 << 20 )

#define PCMCIA_SOCKETS_NO 2
#define PCMCIA_MEM_WIN_NO 8

#define CONFIG_IDE_8xx_PCCARD	1	/* Use IDE with PC Card Adapter */

#undef	CONFIG_IDE_8xx_DIRECT		/* Direct IDE	 not supported	*/
#define CONFIG_IDE_LED		1	/* LED	 for ide supported	*/
#undef	CONFIG_IDE_RESET		/* reset for ide not supported	*/

#define CONFIG_SYS_IDE_MAXBUS		2
#define CONFIG_SYS_IDE_MAXDEVICE	4

#define CONFIG_SYS_ATA_IDE0_OFFSET	0x0000

#define CONFIG_SYS_ATA_IDE1_OFFSET	(4 * CONFIG_SYS_PCMCIA_MEM_SIZE)

#define CONFIG_SYS_ATA_BASE_ADDR	CONFIG_SYS_PCMCIA_MEM_ADDR

/* Offset for data I/O			*/
#define CONFIG_SYS_ATA_DATA_OFFSET	(CONFIG_SYS_PCMCIA_MEM_SIZE + 0x320)

/* Offset for normal register accesses	*/
#define CONFIG_SYS_ATA_REG_OFFSET	(2 * CONFIG_SYS_PCMCIA_MEM_SIZE + 0x320)

/* Offset for alternate registers	*/
#define CONFIG_SYS_ATA_ALT_OFFSET	0x0100


#define CONFIG_SYS_DER 0

#define FLASH_BASE0_PRELIM	0x40000000	/* FLASH bank #0	*/

#define CONFIG_SYS_REMAP_OR_AM		0x80000000	/* OR addr mask */
#define CONFIG_SYS_PRELIM_OR_AM	0xE0000000	/* OR addr mask */

#define CONFIG_SYS_OR_TIMING_FLASH	(OR_ACS_DIV1  | OR_TRLX | OR_CSNT_SAM | \
				 OR_SCY_2_CLK | OR_EHTR | OR_BI)

#define CONFIG_SYS_OR0_REMAP	(CONFIG_SYS_REMAP_OR_AM  | CONFIG_SYS_OR_TIMING_FLASH)
#define CONFIG_SYS_OR0_PRELIM	(CONFIG_SYS_PRELIM_OR_AM | CONFIG_SYS_OR_TIMING_FLASH)
#define CONFIG_SYS_BR0_PRELIM	((FLASH_BASE0_PRELIM & BR_BA_MSK) | BR_PS_16 | BR_V )


/* SDRAM timing: Multiplexed addresses, GPL5 output to GPL5_A (don't care)	*/
#define CONFIG_SYS_OR_TIMING_SDRAM	0x00000A00


#if   defined(CONFIG_80MHz)
#define CONFIG_SYS_MAMR_PTA		156
#elif defined(CONFIG_66MHz)
#define CONFIG_SYS_MAMR_PTA		129
#else		/*   50 MHz */
#define CONFIG_SYS_MAMR_PTA		 98
#endif	/*CONFIG_??MHz */

#define CONFIG_SYS_MPTPR 0x400

#define CONFIG_SYS_MAMR 0x80802114

#define BOOTFLAG_COLD	0x01		/* Normal Power-On: Boot from FLASH	*/
#define BOOTFLAG_WARM	0x02		/* Software reboot			*/


#define CONFIG_AUTOBOOT_KEYED		/* use key strings to stop autoboot */
#if 0
#define CONFIG_AUTOBOOT_PROMPT		\
	"Boote in %d Sekunden - stop mit \"2\"\n", bootdelay
#endif
#define CONFIG_AUTOBOOT_STOP_STR	"." /* easy to stop for now */
#define CONFIG_SILENT_CONSOLE	1

#endif	/* __CONFIG_H */