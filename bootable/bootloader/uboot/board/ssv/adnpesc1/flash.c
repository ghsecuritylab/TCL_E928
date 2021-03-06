


#include <common.h>
#include <nios.h>

#include "../common/flash.c"

/*---------------------------------------------------------------------*/
#define	BANKSZ	(8 * 1024 * 1024)
#define	SECTSZ	(64 * 1024)
#define	UBOOTSECS ((CONFIG_SYS_MONITOR_LEN + CONFIG_ENV_SIZE) / SECTSZ)
#define	UBOOTAREA (UBOOTSECS * 64 * 1024)	/* monitor / env area */

/*---------------------------------------------------------------------*/
unsigned long flash_init (void)
{
	int i;
	unsigned long addr;
	flash_info_t *fli = &flash_info[0];

	fli->size = BANKSZ;
	fli->sector_count = CONFIG_SYS_MAX_FLASH_SECT;
	fli->flash_id = FLASH_MAN_AMD + FLASH_AMLV640U;

	addr = CONFIG_SYS_FLASH_BASE;
	for (i = 0; i < fli->sector_count; ++i) {
		fli->start[i] = addr;
		addr += SECTSZ;

		/* Protect monitor / environment area */
		if (addr <= (CONFIG_SYS_FLASH_BASE + UBOOTAREA))
			fli->protect[i] = 1;
		else
			fli->protect[i] = 0;
	}

	return (BANKSZ);
}
