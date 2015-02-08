

#include <common.h>
#include <ppc4xx.h>
#include <asm/processor.h>

# define SDRAM_LEN 0x08000000

phys_size_t initdram (int board_type)
{
	/* Configure the SDRAMS */

	/* disable memory controller */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_CFG);
	mtdcr (SDRAM0_CFGDATA, 0x00000000);

	udelay (500);

	/* Clear SDRAM0_BESR0 (Bus Error Syndrome Register) */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_BESR0);
	mtdcr (SDRAM0_CFGDATA, 0xffffffff);

	/* Clear SDRAM0_BESR1 (Bus Error Syndrome Register) */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_BESR1);
	mtdcr (SDRAM0_CFGDATA, 0xffffffff);

	/* Clear SDRAM0_ECCCFG (disable ECC) */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_ECCCFG);
	mtdcr (SDRAM0_CFGDATA, 0x00000000);

	/* Clear SDRAM0_ECCESR (ECC Error Syndrome Register) */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_ECCESR);
	mtdcr (SDRAM0_CFGDATA, 0xffffffff);

	/* Timing register: CASL=2, PTA=2, CTP=2, LDF=1, RFTA=5, RCD=2 */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_TR);
	mtdcr (SDRAM0_CFGDATA, 0x010a4016);

	/* Memory Bank 0 Config == BA=0x00000000, SZ=64M, AM=3, BE=1 */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_B0CR);
	mtdcr (SDRAM0_CFGDATA, 0x00084001);

	/* Memory Bank 1 Config == BA=0x04000000, SZ=64M, AM=3, BE=1 */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_B1CR);
	mtdcr (SDRAM0_CFGDATA, 0x04084001);

	/* Memory Bank 2 Config ==  BE=0 */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_B2CR);
	mtdcr (SDRAM0_CFGDATA, 0x00000000);

	/* Memory Bank 3 Config ==  BE=0 */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_B3CR);
	mtdcr (SDRAM0_CFGDATA, 0x00000000);

	/* refresh timer = 0x400  */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_RTR);
	mtdcr (SDRAM0_CFGDATA, 0x04000000);

	/* Power management idle timer set to the default. */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_PMIT);
	mtdcr (SDRAM0_CFGDATA, 0x07c00000);

	udelay (500);

	/* Enable banks (DCE=1, BPRF=1, ECCDD=1, EMDUL=1) */
	mtdcr (SDRAM0_CFGADDR, SDRAM0_CFG);
	mtdcr (SDRAM0_CFGDATA, 0x80e00000);

	return SDRAM_LEN;
}

int testdram (void)
{
	unsigned long idx;
	unsigned val;
	unsigned errors;
	volatile unsigned long *sdram;

#ifdef DEBUG
	printf ("SDRAM Controller Registers --\n");

	mtdcr (SDRAM0_CFGADDR, SDRAM0_CFG);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_CFG   : 0x%08x\n", val);

	mtdcr (SDRAM0_CFGADDR, 0x24);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_STATUS: 0x%08x\n", val);

	mtdcr (SDRAM0_CFGADDR, SDRAM0_B0CR);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_B0CR  : 0x%08x\n", val);

	mtdcr (SDRAM0_CFGADDR, SDRAM0_B1CR);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_B1CR  : 0x%08x\n", val);

	mtdcr (SDRAM0_CFGADDR, SDRAM0_TR);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_TR    : 0x%08x\n", val);

	mtdcr (SDRAM0_CFGADDR, SDRAM0_RTR);
	val = mfdcr (SDRAM0_CFGDATA);
	printf ("    SDRAM0_RTR   : 0x%08x\n", val);
#endif

	/* Wait for memory to be ready by testing MRSCMPbit
	   bit. Really, there should already have been plenty of time,
	   given it was started long ago. But, best to check. */
	for (idx = 0; idx < 1000000; idx += 1) {
		mtdcr (SDRAM0_CFGADDR, 0x24);
		val = mfdcr (SDRAM0_CFGDATA);
		if (val & 0x80000000)
			break;
	}

	if (!(val & 0x80000000)) {
		printf ("SDRAM ERROR: SDRAM0_STATUS never set!\n");
		return 1;
	}

	/* Start memory test. */
	printf ("test: %u MB - ", SDRAM_LEN / 1048576);

	sdram = (unsigned long *) CONFIG_SYS_SDRAM_BASE;

	printf ("write - ");
	for (idx = 2; idx < SDRAM_LEN / 4; idx += 2) {
		sdram[idx + 0] = idx;
		sdram[idx + 1] = ~idx;
	}

	printf ("read - ");
	errors = 0;
	for (idx = 2; idx < SDRAM_LEN / 4; idx += 2) {
		if (sdram[idx + 0] != idx)
			errors += 1;
		if (sdram[idx + 1] != ~idx)
			errors += 1;
		if (errors > 0)
			break;
	}

	if (errors > 0) {
		printf ("NOT OK\n");
		printf ("FIRST ERROR at %p: 0x%08lx:0x%08lx != 0x%08lx:0x%08lx\n",
			sdram + idx, sdram[idx + 0], sdram[idx + 1], idx, ~idx);
		return 1;
	}

	printf ("ok\n");
	return 0;
}