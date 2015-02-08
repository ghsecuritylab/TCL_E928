
#ifndef _POST_H
#define _POST_H

#ifndef	__ASSEMBLY__
#include <common.h>
#endif

#ifdef CONFIG_POST

#define POST_POWERON		0x01	/* test runs on power-on booting */
#define POST_NORMAL		0x02	/* test runs on normal booting */
#define POST_SLOWTEST		0x04	/* test is slow, enabled by key press */
#define POST_POWERTEST		0x08	/* test runs after watchdog reset */

#define POST_COLDBOOT		0x80	/* first boot after power-on */

#define POST_ROM		0x0100	/* test runs in ROM */
#define POST_RAM		0x0200	/* test runs in RAM */
#define POST_MANUAL		0x0400	/* test runs on diag command */
#define POST_REBOOT		0x0800	/* test may cause rebooting */
#define POST_PREREL             0x1000  /* test runs before relocation */

#define POST_CRITICAL		0x2000	/* Use failbootcmd if test failed */
#define POST_STOP		0x4000	/* Interrupt POST sequence on fail */

#define POST_MEM		(POST_RAM | POST_ROM)
#define POST_ALWAYS		(POST_NORMAL	| \
				 POST_SLOWTEST	| \
				 POST_MANUAL	| \
				 POST_POWERON	)

#define POST_FAIL_SAVE		0x80

#define POST_BEFORE		1
#define POST_AFTER		0
#define POST_PASSED		1
#define POST_FAILED		0

#ifndef	__ASSEMBLY__

struct post_test {
	char *name;
	char *cmd;
	char *desc;
	int flags;
	int (*test) (int flags);
	int (*init_f) (void);
	void (*reloc) (void);
	unsigned long testid;
};
int post_init_f (void);
void post_bootmode_init (void);
int post_bootmode_get (unsigned int * last_test);
void post_bootmode_clear (void);
void post_output_backlog ( void );
int post_run (char *name, int flags);
int post_info (char *name);
int post_log (char *format, ...);
#ifndef CONFIG_RELOC_FIXUP_WORKS
void post_reloc (void);
#endif
unsigned long post_time_ms (unsigned long base);

extern struct post_test post_list[];
extern unsigned int post_list_size;
extern int post_hotkeys_pressed(void);

#if (__GNUC__ >= 4 && __GNUC_MINOR__ >= 3)
/* Tag_GNU_Power_ABI_FP/soft-float */
#define GNU_FPOST_ATTR	asm(".gnu_attribute	4, 2");
#else
#define GNU_FPOST_ATTR
#endif /* __GNUC__ */
#endif /* __ASSEMBLY__ */

#define CONFIG_SYS_POST_RTC		0x00000001
#define CONFIG_SYS_POST_WATCHDOG	0x00000002
#define CONFIG_SYS_POST_MEMORY		0x00000004
#define CONFIG_SYS_POST_CPU		0x00000008
#define CONFIG_SYS_POST_I2C		0x00000010
#define CONFIG_SYS_POST_CACHE		0x00000020
#define CONFIG_SYS_POST_UART		0x00000040
#define CONFIG_SYS_POST_ETHER		0x00000080
#define CONFIG_SYS_POST_SPI		0x00000100
#define CONFIG_SYS_POST_USB		0x00000200
#define CONFIG_SYS_POST_SPR		0x00000400
#define CONFIG_SYS_POST_SYSMON		0x00000800
#define CONFIG_SYS_POST_DSP		0x00001000
#define CONFIG_SYS_POST_OCM		0x00002000
#define CONFIG_SYS_POST_FPU		0x00004000
#define CONFIG_SYS_POST_ECC		0x00008000
#define CONFIG_SYS_POST_BSPEC1		0x00010000
#define CONFIG_SYS_POST_BSPEC2		0x00020000
#define CONFIG_SYS_POST_BSPEC3		0x00040000
#define CONFIG_SYS_POST_BSPEC4		0x00080000
#define CONFIG_SYS_POST_BSPEC5		0x00100000
#define CONFIG_SYS_POST_CODEC		0x00200000
#define CONFIG_SYS_POST_COPROC		0x00400000

#endif /* CONFIG_POST */

#endif /* _POST_H */