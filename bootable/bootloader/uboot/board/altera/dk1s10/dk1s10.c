

#include <common.h>
#include <netdev.h>
#if	defined(CONFIG_SEVENSEG)
#include "../common/sevenseg.h"
#endif

void _default_hdlr (void)
{
	printf ("default_hdlr\n");
}

int board_early_init_f (void)
{
#if	defined(CONFIG_SEVENSEG)
	/* init seven segment led display and switch off */
	sevenseg_set(SEVENSEG_OFF);
#endif
	return 0;
}

int checkboard (void)
{
	puts ("Board: Altera Nios 1S10 Development Kit\n");
#if     defined(CONFIG_NIOS_SAFE_32)
	puts ("Conf.: Altera Safe 32 (safe_32)\n");
#elif   defined(CONFIG_NIOS_STANDARD_32)
	puts ("Conf.: Altera Standard 32 (standard_32)\n");
#elif   defined(CONFIG_NIOS_MTX_LDK_20)
	puts ("Conf.: Microtronix LDK 2.0 (LDK2)\n");
#endif

	return 0;
}

phys_size_t initdram (int board_type)
{
	return (0);
}

#ifdef CONFIG_CMD_NET
int board_eth_init(bd_t *bis)
{
	int rc = 0;
#ifdef CONFIG_CS8900
	rc = cs8900_initialize(0, CONFIG_CS8900_BASE);
#endif
	return rc;
}
#endif