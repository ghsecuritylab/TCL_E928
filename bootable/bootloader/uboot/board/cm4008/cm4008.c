

#include <common.h>
#include <asm/arch/platform.h>

DECLARE_GLOBAL_DATA_PTR;

/* ------------------------------------------------------------------------- */

#define	ks8695_read(a)	  *((volatile unsigned int *) (KS8695_IO_BASE+(a)))
#define	ks8695_write(a,b) *((volatile unsigned int *) (KS8695_IO_BASE+(a))) = (b)

/* ------------------------------------------------------------------------- */


int env_flash_cmdline (void)
{
	unsigned char *sp = (unsigned char *) 0x0201c020;
	unsigned char *ep;
	int len;

	/* Check if "erase" push button is depressed */
	if ((ks8695_read(KS8695_GPIO_DATA) & 0x8) == 0) {
		printf("### Entering network recovery mode...\n");
		setenv("bootargs", "console=ttyAM0,115200 mem=16M initrd=0x400000,6M root=/dev/ram0");
		setenv("bootcmd", "bootp 0x400000; gofsk 0x400000");
		setenv("bootdelay", "2");
		return 0;
	}

	/* Check for flash based kernel boot args to use as default */
	for (ep = sp, len = 0; ((len < 1024) && (*ep != 0)); ep++, len++)
		;

	if ((len > 0) && (len <1024))
		setenv("bootargs", sp);

	return 0;
}

int board_late_init (void)
{
	return 0;
}


int board_init (void)
{
	/* arch number of CM4008 */
	gd->bd->bi_arch_number = 624;

	/* adress of boot parameters */
	gd->bd->bi_boot_params = 0x00000100;

	/* power down all but port 0 on the switch */
	ks8695_write(KS8695_SWITCH_LPPM12, 0x00000005);
	ks8695_write(KS8695_SWITCH_LPPM34, 0x00050005);

	return 0;
}

int dram_init (void)
{
	gd->bd->bi_dram[0].start = PHYS_SDRAM_1;
	gd->bd->bi_dram[0].size  = PHYS_SDRAM_1_SIZE;

	return (0);
}
