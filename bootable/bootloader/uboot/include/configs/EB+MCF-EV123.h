

#ifndef _CONFIG_EB_MCF_EV123_H_
#define _CONFIG_EB_MCF_EV123_H_

#undef CONFIG_SYS_HALT_BEFOR_RAM_JUMP


#define	CONFIG_MCF52x2			/* define processor family */
#define CONFIG_M5282			/* define processor type */
#define CONFIG_EB_MCF_EV123

#define CONFIG_MISC_INIT_R

#define CONFIG_MCFUART
#define CONFIG_SYS_UART_PORT		(0)
#define CONFIG_BAUDRATE 9600
#define CONFIG_SYS_BAUDRATE_TABLE { 9600 , 19200 , 38400 , 57600, 115200 }

#undef	CONFIG_MONITOR_IS_IN_RAM		/* starts uboot direct */

#define CONFIG_BOOTCOMMAND "printenv"


#define CONFIG_BOOT_RETRY_TIME	-1
#define CONFIG_RESET_TO_RETRY
#define CONFIG_SPLASH_SCREEN


#ifndef CONFIG_MONITOR_IS_IN_RAM
#define CONFIG_ENV_ADDR		0xF003C000	/* End of 256K */
#define CONFIG_ENV_SECT_SIZE	0x4000
#define CONFIG_ENV_IS_IN_FLASH	1
#else
#define CONFIG_ENV_ADDR		0xFFE04000
#define CONFIG_ENV_SECT_SIZE	0x2000
#define CONFIG_ENV_IS_IN_FLASH	1
#endif

#define CONFIG_BOOTP_BOOTFILESIZE
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME

#include <config_cmd_default.h>

#undef CONFIG_CMD_LOADB
#define CONFIG_CMD_MII
#define CONFIG_CMD_NET

#define CONFIG_MCFTMR


#define CONFIG_BOOTDELAY	5
#define CONFIG_HUSH_PARSER
#define CONFIG_SYS_PROMPT	"\nEV123 U-Boot> "
#define	CONFIG_SYS_LONGHELP	1

#if defined(CONFIG_CMD_KGDB)
#define	CONFIG_SYS_CBSIZE	1024	/* Console I/O Buffer Size	*/
#else
#define	CONFIG_SYS_CBSIZE	256	/* Console I/O Buffer Size	*/
#endif
#define	CONFIG_SYS_PBSIZE 	(CONFIG_SYS_CBSIZE+sizeof(CONFIG_SYS_PROMPT)+16)
#define	CONFIG_SYS_MAXARGS	16	/* max number of command args	*/
#define CONFIG_SYS_BARGSIZE	CONFIG_SYS_CBSIZE

#define CONFIG_SYS_LOAD_ADDR		0x20000

#define CONFIG_SYS_MEMTEST_START	0x100000
#define CONFIG_SYS_MEMTEST_END		0x400000
/*#define CONFIG_SYS_DRAM_TEST		1 */
#undef CONFIG_SYS_DRAM_TEST

#define CONFIG_SYS_HZ			10000000
#define	CONFIG_SYS_CLK			58982400       /* 9,8304MHz * 6 */

/* PLL Configuration: Ext Clock * 6 (see table 9-4 of MCF user manual) */

#define CONFIG_SYS_MFD		0x01	/* PLL Multiplication Factor Devider */
#define CONFIG_SYS_RFD		0x00	/* PLL Reduce Frecuency Devider */


#define CONFIG_MCFFEC
#define CONFIG_NET_MULTI		1
#define CONFIG_MII			1
#define CONFIG_MII_INIT			1
#define CONFIG_SYS_DISCOVER_PHY
#define CONFIG_SYS_RX_ETH_BUFFER	8
#define CONFIG_SYS_FAULT_ECHO_LINK_DOWN

#define CONFIG_SYS_FEC0_PINMUX		0
#define CONFIG_SYS_FEC0_MIIBASE		CONFIG_SYS_FEC0_IOBASE
#define MCFFEC_TOUT_LOOP		50000

#define CONFIG_ETHADDR			00:CF:52:82:EB:01
#define CONFIG_OVERWRITE_ETHADDR_ONCE


#define	CONFIG_SYS_MBAR			0x40000000


#define CONFIG_SYS_INIT_RAM_ADDR	0x20000000
#define CONFIG_SYS_INIT_RAM_END		0x10000
#define CONFIG_SYS_GBL_DATA_SIZE	64
#define CONFIG_SYS_GBL_DATA_OFFSET	\
	(CONFIG_SYS_INIT_RAM_END - CONFIG_SYS_GBL_DATA_SIZE)
#define CONFIG_SYS_INIT_SP_OFFSET	CONFIG_SYS_GBL_DATA_OFFSET

#define CONFIG_SYS_SDRAM_BASE1		0x00000000
#define	CONFIG_SYS_SDRAM_SIZE1		16	/* SDRAM size in MB */

#define CONFIG_SYS_SDRAM_BASE		CONFIG_SYS_SDRAM_BASE1
#define	CONFIG_SYS_SDRAM_SIZE		CONFIG_SYS_SDRAM_SIZE1


#if (TEXT_BASE !=  CONFIG_SYS_INT_FLASH_BASE)
#define CONFIG_SYS_MONITOR_BASE	(TEXT_BASE + 0x400)
#else
#define CONFIG_SYS_MONITOR_BASE	(TEXT_BASE + 0x418) /* 24 Byte for CFM-Config */
#endif

#define CONFIG_SYS_MONITOR_LEN		0x20000
#define CONFIG_SYS_MALLOC_LEN		(256 << 10)
#define CONFIG_SYS_BOOTPARAMS_LEN	64*1024

#define	CONFIG_SYS_BOOTMAPSZ	(8 << 20) /* Initial Memory map for Linux */


#define CONFIG_SYS_FLASH_BASE		CONFIG_SYS_CS0_BASE
#define	CONFIG_SYS_INT_FLASH_BASE	0xF0000000
#define CONFIG_SYS_INT_FLASH_ENABLE	0x21

#define	CONFIG_SYS_MAX_FLASH_SECT	35
#define	CONFIG_SYS_MAX_FLASH_BANKS	2
#define	CONFIG_SYS_FLASH_ERASE_TOUT	10000000
#define	CONFIG_SYS_FLASH_PROTECTION

#define CONFIG_SYS_CACHELINE_SIZE	16

#define ICACHE_STATUS			(CONFIG_SYS_INIT_RAM_ADDR + \
					 CONFIG_SYS_INIT_RAM_END - 8)
#define DCACHE_STATUS			(CONFIG_SYS_INIT_RAM_ADDR + \
					 CONFIG_SYS_INIT_RAM_END - 4)
#define CONFIG_SYS_ICACHE_INV		(CF_CACR_CINV + CF_CACR_DCM)
#define CONFIG_SYS_CACHE_ACR0		(CONFIG_SYS_SDRAM_BASE | \
					 CF_ADDRMASK(CONFIG_SYS_SDRAM_SIZE) | \
					 CF_ACR_EN | CF_ACR_SM_ALL)
#define CONFIG_SYS_CACHE_ICACR		(CF_CACR_CENB | CF_CACR_DISD | \
					 CF_CACR_CEIB | CF_CACR_DBWE | \
					 CF_CACR_EUSP)


#define CONFIG_SYS_CS0_BASE		0xFFE00000
#define CONFIG_SYS_CS0_CTRL		0x00001980
#define CONFIG_SYS_CS0_MASK		0x001F0001

#define CONFIG_SYS_CS3_BASE		0xE0000000
#define CONFIG_SYS_CS0_CTRL		0x00001980
#define CONFIG_SYS_CS3_MASK		0x000F0001

#define CONFIG_SYS_PACNT		0x0000000	/* Port A D[31:24] */
#define CONFIG_SYS_PADDR		0x0000000
#define CONFIG_SYS_PADAT		0x0000000

#define CONFIG_SYS_PBCNT		0x0000000	/* Port B D[23:16] */
#define CONFIG_SYS_PBDDR		0x0000000
#define CONFIG_SYS_PBDAT		0x0000000

#define CONFIG_SYS_PCCNT		0x0000000	/* Port C D[15:08] */
#define CONFIG_SYS_PCDDR		0x0000000
#define CONFIG_SYS_PCDAT		0x0000000

#define CONFIG_SYS_PDCNT		0x0000000	/* Port D D[07:00] */
#define CONFIG_SYS_PCDDR		0x0000000
#define CONFIG_SYS_PCDAT		0x0000000

#define CONFIG_SYS_PEHLPAR		0xC0
#define CONFIG_SYS_PUAPAR		0x0F
#define CONFIG_SYS_DDRUA		0x05
#define CONFIG_SYS_PJPAR		0xFF


#define CONFIG_VIDEO

#ifdef CONFIG_VIDEO
#define	CONFIG_VIDEO_VCXK			1

#define CONFIG_SYS_VCXK_DEFAULT_LINEALIGN	2
#define	CONFIG_SYS_VCXK_DOUBLEBUFFERED		1
#define CONFIG_SYS_VCXK_BASE			CONFIG_SYS_CS3_BASE
#define CONFIG_SYS_VCXK_AUTODETECT		1

#define CONFIG_SYS_VCXK_ACKNOWLEDGE_PORT	MCFGPTB_GPTPORT
#define CONFIG_SYS_VCXK_ACKNOWLEDGE_DDR		MCFGPTB_GPTDDR
#define CONFIG_SYS_VCXK_ACKNOWLEDGE_PIN		0x0001

#define CONFIG_SYS_VCXK_ENABLE_PORT		MCFGPTB_GPTPORT
#define CONFIG_SYS_VCXK_ENABLE_DDR		MCFGPTB_GPTDDR
#define CONFIG_SYS_VCXK_ENABLE_PIN		0x0002

#define CONFIG_SYS_VCXK_REQUEST_PORT		MCFGPTB_GPTPORT
#define CONFIG_SYS_VCXK_REQUEST_DDR		MCFGPTB_GPTDDR
#define CONFIG_SYS_VCXK_REQUEST_PIN		0x0004

#define CONFIG_SYS_VCXK_INVERT_PORT		MCFGPIO_PORTE
#define CONFIG_SYS_VCXK_INVERT_DDR		MCFGPIO_DDRE
#define CONFIG_SYS_VCXK_INVERT_PIN		MCFGPIO_PORT2

#endif /* CONFIG_VIDEO */
#endif	/* _CONFIG_M5282EVB_H */
/*---------------------------------------------------------------------*/