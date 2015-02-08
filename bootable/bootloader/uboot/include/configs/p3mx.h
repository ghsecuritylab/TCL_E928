

#ifndef __CONFIG_H
#define __CONFIG_H

#define CONFIG_P3Mx			/* used for both board versions	*/

#if defined (CONFIG_P3M750)
#define CONFIG_750FX			/* 750GL/GX/FX			*/
#define CONFIG_HIGH_BATS		/* High BATs supported		*/
#define CONFIG_SYS_BOARD_NAME		"P3M750"
#define CONFIG_SYS_BUS_HZ		100000000
#define CONFIG_SYS_BUS_CLK		CONFIG_SYS_BUS_HZ
#define CONFIG_SYS_TCLK		100000000
#elif defined (CONFIG_P3M7448)
#define CONFIG_74xx
#define CONFIG_SYS_BOARD_NAME		"P3M7448"
#define CONFIG_SYS_BUS_HZ		133333333
#define CONFIG_SYS_BUS_CLK		CONFIG_SYS_BUS_HZ
#define CONFIG_SYS_TCLK		133333333
#endif
#define CONFIG_SYS_GT_DUAL_CPU			/* also for JTAG even with one cpu */

/* which initialization functions to call for this board */
#define CONFIG_SYS_BOARD_ASM_INIT	1
#define CONFIG_BOARD_EARLY_INIT_F 1     /* Call board_early_init_f	*/
#define CONFIG_MISC_INIT_R      1	/* Call misc_init_r()		*/

#define CONFIG_SYS_SDRAM_BASE		0x00000000
#ifdef CONFIG_P3M750
#define CONFIG_SYS_SDRAM1_BASE		0x10000000	/* each 256 MByte	*/
#endif

#define CONFIG_SYS_MONITOR_LEN		(256 << 10)	/* Reserve 256 kB for Monitor */
#if defined (CONFIG_P3M750)
#define CONFIG_SYS_FLASH_BASE		0xff800000	/* start of flash banks	*/
#define CONFIG_SYS_BOOT_SIZE		_8M		/* boot flash		*/
#elif defined (CONFIG_P3M7448)
#define CONFIG_SYS_FLASH_BASE		0xff000000	/* start of flash banks	*/
#define CONFIG_SYS_BOOT_SIZE		_16M		/* boot flash		*/
#endif
#define CONFIG_SYS_BOOT_SPACE		CONFIG_SYS_FLASH_BASE	/* BOOT_CS0 flash 0    */
#define CONFIG_SYS_MONITOR_BASE	0xfff00000
#define CONFIG_SYS_RESET_ADDRESS	0xfff00100
#define CONFIG_SYS_MALLOC_LEN		(256 << 10)	/* Reserve 256 kB for malloc */
#define CONFIG_SYS_MISC_REGION_BASE	0xf0000000

#define CONFIG_SYS_DFL_GT_REGS		0xf1000000	/* boot time GT_REGS */
#define CONFIG_SYS_GT_REGS		0xf1000000	/* GT Registers are mapped here */
#define CONFIG_SYS_INT_SRAM_BASE	0x42000000	/* GT offers 256k internal SRAM */

 /*
 * When locking data in cache you should point the CONFIG_SYS_INIT_RAM_ADDRESS
 * To an unused memory region. The stack will remain in cache until RAM
 * is initialized
*/
#undef	CONFIG_SYS_INIT_RAM_LOCK
#define CONFIG_SYS_INIT_RAM_ADDR	0x42000000
#define CONFIG_SYS_INIT_RAM_END	0x1000
#define CONFIG_SYS_GBL_DATA_SIZE	128  /* size in bytes reserved for init data */
#define CONFIG_SYS_GBL_DATA_OFFSET	(CONFIG_SYS_INIT_RAM_END - CONFIG_SYS_GBL_DATA_SIZE)


#define CONFIG_MPSC			/* MV64460 Serial		*/
#define CONFIG_MPSC_PORT	0
#define CONFIG_BAUDRATE		115200	/* console baudrate		*/
#define CONFIG_SYS_BAUDRATE_TABLE	{ 9600, 19200, 38400, 57600, 115200, 230400 }
#define CONFIG_LOADS_ECHO	1	/* echo on for serial download	*/
#define CONFIG_SYS_LOADS_BAUD_CHANGE	1	/* allow baudrate change	*/

/* Change the default ethernet port, use this define (options: 0, 1, 2) */
#define CONFIG_SYS_ETH_PORT		ETH_0
#define CONFIG_NET_MULTI
#define MV_ETH_DEVS		2
#define CONFIG_PHY_RESET        1	/* reset phy upon startup         */
#define CONFIG_PHY_GIGE		1	/* Include GbE speed/duplex detection */

#define CONFIG_SYS_FLASH_CFI			/* The flash is CFI compatible		*/
#define CONFIG_FLASH_CFI_DRIVER		/* Use common CFI driver		*/
#define CONFIG_SYS_MAX_FLASH_BANKS	1	/* max number of memory banks		*/
#define CONFIG_SYS_MAX_FLASH_SECT	512	/* max number of sectors on one chip	*/
#define CONFIG_SYS_FLASH_ERASE_TOUT	120000	/* Timeout for Flash Erase (in ms)	*/
#define CONFIG_SYS_FLASH_WRITE_TOUT	500	/* Timeout for Flash Write (in ms)	*/
#define CONFIG_SYS_FLASH_USE_BUFFER_WRITE 1	/* use buffered writes (20x faster)	*/
#define CONFIG_SYS_FLASH_PROTECTION	1	/* use hardware flash protection	*/
#define CONFIG_SYS_FLASH_EMPTY_INFO		/* print 'E' for empty sector on flinfo */

#define CONFIG_ENV_IS_IN_FLASH     1	/* use FLASH for environment vars	*/
#if defined (CONFIG_P3M750)
#define CONFIG_ENV_SECT_SIZE	0x20000	/* one sector (1 device)		*/
#elif defined (CONFIG_P3M7448)
#define CONFIG_ENV_SECT_SIZE	0x40000	/* two sectors (2 devices parallel	*/
#endif
#define	CONFIG_ENV_SIZE		0x2000	/* Total Size of Environment Sector	*/
#define CONFIG_ENV_ADDR		(CONFIG_SYS_MONITOR_BASE + CONFIG_SYS_MONITOR_LEN)

#define CONFIG_MV64460_ECC

#define CONFIG_SYS_I2C_SPEED		100000		/* I2C speed default	*/

/* I2C RTC */
#define CONFIG_RTC_M41T11	1
#define CONFIG_SYS_I2C_RTC_ADDR	0x68
#define CONFIG_SYS_M41T11_BASE_YEAR	1900	/* play along with linux	*/

#define PCI_HOST_ADAPTER 0		/* configure ar pci adapter	*/
#define PCI_HOST_FORCE	1		/* configure as pci host	*/
#define PCI_HOST_AUTO	2		/* detected via arbiter enable	*/

#undef CONFIG_PCI			/* include pci support		*/
#ifdef CONFIG_PCI
#define CONFIG_PCI_HOST PCI_HOST_FORCE	/* select pci host function	*/
#define CONFIG_PCI_PNP			/* do pci plug-and-play		*/
#define CONFIG_PCI_SCAN_SHOW		/* show devices on bus		*/
#endif /* CONFIG_PCI */

/* PCI MEMORY MAP section */
#define CONFIG_SYS_PCI0_MEM_BASE	0x80000000
#define CONFIG_SYS_PCI0_MEM_SIZE	_128M
#define CONFIG_SYS_PCI1_MEM_BASE	0x88000000
#define CONFIG_SYS_PCI1_MEM_SIZE	_128M

#define CONFIG_SYS_PCI0_0_MEM_SPACE	(CONFIG_SYS_PCI0_MEM_BASE)
#define CONFIG_SYS_PCI1_0_MEM_SPACE	(CONFIG_SYS_PCI1_MEM_BASE)

/* PCI I/O MAP section */
#define CONFIG_SYS_PCI0_IO_BASE	0xfa000000
#define CONFIG_SYS_PCI0_IO_SIZE	_16M
#define CONFIG_SYS_PCI1_IO_BASE	0xfb000000
#define CONFIG_SYS_PCI1_IO_SIZE	_16M

#define CONFIG_SYS_PCI0_IO_SPACE	(CONFIG_SYS_PCI0_IO_BASE)
#define CONFIG_SYS_PCI0_IO_SPACE_PCI	0x00000000
#define CONFIG_SYS_PCI1_IO_SPACE	(CONFIG_SYS_PCI1_IO_BASE)
#define CONFIG_SYS_PCI1_IO_SPACE_PCI	0x00000000

#define CONFIG_SYS_ISA_IO_BASE_ADDRESS (CONFIG_SYS_PCI0_IO_BASE)
#define CONFIG_SYS_PCI_IDSEL 0x30

#undef	CONFIG_BOOTARGS
#define	CONFIG_EXTRA_ENV_SETTINGS_COMMON				\
	"netdev=eth0\0"							\
	"nfsargs=setenv bootargs root=/dev/nfs rw "			\
		"nfsroot=${serverip}:${rootpath}\0"			\
	"ramargs=setenv bootargs root=/dev/ram rw\0"			\
	"addip=setenv bootargs ${bootargs} "				\
		"ip=${ipaddr}:${serverip}:${gatewayip}:${netmask}"	\
		":${hostname}:${netdev}:off panic=1\0"			\
	"addtty=setenv bootargs ${bootargs} console=ttyS0,${baudrate}\0"\
	"flash_nfs=run nfsargs addip addtty;"				\
		"bootm ${kernel_addr}\0"				\
	"flash_self=run ramargs addip addtty;"				\
		"bootm ${kernel_addr} ${ramdisk_addr}\0"		\
	"net_nfs=tftp 200000 ${bootfile};run nfsargs addip addtty;"     \
	        "bootm\0"						\
	"rootpath=/opt/eldk/ppc_6xx\0"					\
	"u-boot=p3mx/u-boot/u-boot.bin\0"				\
	"load=tftp 100000 ${u-boot}\0"					\
	"update=protect off fff00000 fff3ffff;era fff00000 fff3ffff;"	\
		"cp.b 100000 fff00000 40000;"			        \
		"setenv filesize;saveenv\0"				\
	"upd=run load update\0"						\
	"serverip=11.0.0.152\0"

#if defined (CONFIG_P3M750)
#define CONFIG_EXTRA_ENV_SETTINGS					\
	CONFIG_EXTRA_ENV_SETTINGS_COMMON				\
	"hostname=p3m750\0"						\
	"bootfile=/tftpboot/p3mx/vxWorks.st\0"				\
	"kernel_addr=fc000000\0"					\
	"ramdisk_addr=fc180000\0"					\
	"vxfile=p3m750/vxWorks\0"					\
	"vxuser=ddg\0"							\
	"vxpass=ddg\0"							\
	"vxtarget=target\0"						\
	"vxflags=0x8\0"							\
	"vxargs=setenv bootargs mgi(0,0)host:${vxfile} h=${serverip} "	\
		"e=${ipaddr} u=${vxuser} pw=${vxpass} tn=${vxtarget} "	\
		"f=${vxflags}\0"
#elif defined (CONFIG_P3M7448)
#define CONFIG_EXTRA_ENV_SETTINGS					\
	CONFIG_EXTRA_ENV_SETTINGS_COMMON				\
	"hostname=p3m7448\0"
#endif

#if defined (CONFIG_P3M750)
#define CONFIG_BOOTCOMMAND	"tftp;run vxargs;bootvx"
#elif defined (CONFIG_P3M7448)
#define CONFIG_BOOTCOMMAND	" "
#endif

#define CONFIG_BOOTDELAY	3	/* autoboot after 5 seconds */

#define CONFIG_BOOTP_SUBNETMASK
#define CONFIG_BOOTP_GATEWAY
#define CONFIG_BOOTP_HOSTNAME
#define CONFIG_BOOTP_BOOTPATH
#define CONFIG_BOOTP_BOOTFILESIZE

#include <config_cmd_default.h>

#define CONFIG_CMD_ASKENV
#define CONFIG_CMD_DATE
#define CONFIG_CMD_DIAG
#define CONFIG_CMD_ELF
#define CONFIG_CMD_I2C
#define CONFIG_CMD_IRQ
#define CONFIG_CMD_MII
#define CONFIG_CMD_NET
#define CONFIG_CMD_NFS
#define CONFIG_CMD_PING
#define CONFIG_CMD_REGINFO
#define CONFIG_CMD_PCI
#define CONFIG_CMD_CACHE
#define CONFIG_CMD_SDRAM


#define CONFIG_SYS_HUSH_PARSER
#define CONFIG_SYS_PROMPT_HUSH_PS2	"> "

#define CONFIG_SYS_LONGHELP			/* undef to save memory		*/
#define CONFIG_SYS_PROMPT	        "=> "	/* Monitor Command Prompt	*/
#if defined(CONFIG_CMD_KGDB)
#define CONFIG_SYS_CBSIZE	        1024	/* Console I/O Buffer Size	*/
#else
#define CONFIG_SYS_CBSIZE	        256	/* Console I/O Buffer Size	*/
#endif
#define CONFIG_SYS_PBSIZE              (CONFIG_SYS_CBSIZE+sizeof(CONFIG_SYS_PROMPT)+16) /* Print Buffer Size */
#define CONFIG_SYS_MAXARGS	        16	/* max number of command args	*/
#define CONFIG_SYS_BARGSIZE	        CONFIG_SYS_CBSIZE /* Boot Argument Buffer Size	*/

#define CONFIG_SYS_MEMTEST_START	0x0400000 /* memtest works on	        */
#define CONFIG_SYS_MEMTEST_END		0x0C00000 /* 4 ... 12 MB in DRAM	*/

#define CONFIG_SYS_LOAD_ADDR		0x08000000	/* default load address */

#define CONFIG_SYS_HZ		        1000	/* decrementer freq: 1 ms ticks */

#define CONFIG_CMDLINE_EDITING	1	/* add command line history	*/
#define CONFIG_LOOPW            1       /* enable loopw command         */
#define CONFIG_MX_CYCLIC        1       /* enable mdc/mwc commands      */
#define CONFIG_ZERO_BOOTDELAY_CHECK	/* check for keypress on bootdelay==0 */
#define CONFIG_VERSION_VARIABLE 1	/* include version env variable */

/* Reset values for Port behavior (8bit/ 32bit, etc.) only corrected device width */
#if defined (CONFIG_P3M750)
#define CONFIG_SYS_BOOT_PAR		0x8FDFF87F	/* 16 bit flash, disable burst*/
#elif defined (CONFIG_P3M7448)
#define CONFIG_SYS_BOOT_PAR		0x8FEFFFFF	/* 32 bit flash, burst enabled */
#endif

#define CONFIG_SYS_MPP_CONTROL_0	0x00303022
#define CONFIG_SYS_MPP_CONTROL_1	0x00000000
#define CONFIG_SYS_MPP_CONTROL_2	0x00004000
#define CONFIG_SYS_MPP_CONTROL_3	0x00000004
#define CONFIG_SYS_GPP_LEVEL_CONTROL	0x280730D0


/* SDRAM */
#define CONFIG_SYS_IBAT0L (CONFIG_SYS_SDRAM_BASE | BATL_PP_RW | BATL_CACHEINHIBIT)
#define CONFIG_SYS_IBAT0U (CONFIG_SYS_SDRAM_BASE | BATU_BL_256M | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT0L (CONFIG_SYS_SDRAM_BASE | BATL_PP_RW | BATL_GUARDEDSTORAGE | BATL_CACHEINHIBIT)
#define CONFIG_SYS_DBAT0U CONFIG_SYS_IBAT0U

/* init ram */
#define CONFIG_SYS_IBAT1L  (CONFIG_SYS_INIT_RAM_ADDR | BATL_PP_RW | BATL_MEMCOHERENCE)
#define CONFIG_SYS_IBAT1U  (CONFIG_SYS_INIT_RAM_ADDR | BATU_BL_256K | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT1L  CONFIG_SYS_IBAT1L
#define CONFIG_SYS_DBAT1U  CONFIG_SYS_IBAT1U

/* PCI0, PCI1 in one BAT */
#define CONFIG_SYS_IBAT2L BATL_NO_ACCESS
#define CONFIG_SYS_IBAT2U CONFIG_SYS_DBAT2U
#define CONFIG_SYS_DBAT2L (CONFIG_SYS_PCI0_MEM_BASE | BATL_CACHEINHIBIT | BATL_PP_RW | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT2U (CONFIG_SYS_PCI0_MEM_BASE | BATU_BL_256M | BATU_VS | BATU_VP)

/* GT regs, bootrom, all the devices, PCI I/O */
#define CONFIG_SYS_IBAT3L (CONFIG_SYS_MISC_REGION_BASE | BATL_CACHEINHIBIT | BATL_PP_RW)
#define CONFIG_SYS_IBAT3U (CONFIG_SYS_MISC_REGION_BASE | BATU_VS | BATU_VP | BATU_BL_256M)
#define CONFIG_SYS_DBAT3L (CONFIG_SYS_MISC_REGION_BASE | BATL_CACHEINHIBIT | BATL_PP_RW | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT3U CONFIG_SYS_IBAT3U

#define CONFIG_SYS_IBAT4L (CONFIG_SYS_SDRAM1_BASE | BATL_PP_RW | BATL_CACHEINHIBIT)
#define CONFIG_SYS_IBAT4U (CONFIG_SYS_SDRAM1_BASE | BATU_BL_256M | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT4L (CONFIG_SYS_SDRAM1_BASE | BATL_PP_RW | BATL_CACHEINHIBIT | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT4U CONFIG_SYS_IBAT4U

/* set rest out of range for Linux !!!!!!!!!!! */

/* IBAT5 and DBAT5 */
#define CONFIG_SYS_IBAT5L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT)
#define CONFIG_SYS_IBAT5U (0x20000000 | BATU_BL_256M | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT5L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT5U CONFIG_SYS_IBAT5U

/* IBAT6 and DBAT6 */
#define CONFIG_SYS_IBAT6L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT)
#define CONFIG_SYS_IBAT6U (0x20000000 | BATU_BL_256M | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT6L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT6U CONFIG_SYS_IBAT6U

/* IBAT7 and DBAT7 */
#define CONFIG_SYS_IBAT7L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT)
#define CONFIG_SYS_IBAT7U (0x20000000 | BATU_BL_256M | BATU_VS | BATU_VP)
#define CONFIG_SYS_DBAT7L (0x20000000 | BATL_PP_RW | BATL_CACHEINHIBIT | BATL_GUARDEDSTORAGE)
#define CONFIG_SYS_DBAT7U CONFIG_SYS_IBAT7U

#define CONFIG_SYS_BOOTMAPSZ		(8<<20) /* Initial Memory map for Linux */
#define CONFIG_SYS_VXWORKS_MAC_PTR	0x42010000 /* use some memory in SRAM that's not used!!! */

#define CONFIG_SYS_CACHELINE_SIZE	32	/* For all MPC74xx CPUs		 */
#if defined(CONFIG_CMD_KGDB)
#define CONFIG_SYS_CACHELINE_SHIFT	5	/* log base 2 of the above value */
#endif

#define CONFIG_SYS_L2

#if defined (CONFIG_750CX) || defined (CONFIG_750FX)
#define L2_INIT 0
#else
#define L2_INIT		(L2CR_L2SIZ_2M | L2CR_L2CLK_3 | L2CR_L2RAM_BURST | \
			L2CR_L2OH_5 | L2CR_L2CTL | L2CR_L2WT)
#endif

#define L2_ENABLE	(L2_INIT | L2CR_L2E)

#define BOOTFLAG_COLD	0x01		/* Normal Power-On: Boot from FLASH */
#define BOOTFLAG_WARM	0x02		/* Software reboot		    */

#endif	/* __CONFIG_H */