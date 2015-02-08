
#ifndef _CUSTOM_FPGA_H_
#define _CUSTOM_FPGA_H_

/* generated from std_1c20.sopc */

/* cpu.data_master is a altera_nios2 */
#define CONFIG_SYS_CLK_FREQ 50000000
#define CONFIG_SYS_RESET_ADDR 0x00000000
#define CONFIG_SYS_EXCEPTION_ADDR 0x01000020
#define CONFIG_SYS_ICACHE_SIZE 4096
#define CONFIG_SYS_ICACHELINE_SIZE 32
#define CONFIG_SYS_DCACHE_SIZE 2048
#define CONFIG_SYS_DCACHELINE_SIZE 4

/* sdram.s1 is a altera_avalon_new_sdram_controller */
#define CONFIG_SYS_SDRAM_BASE 0x01000000
#define CONFIG_SYS_SDRAM_SIZE 0x01000000

/* uart1.s1 is a altera_avalon_uart */
#define CONFIG_SYS_UART_BASE 0x82120840
#define CONFIG_SYS_UART_FREQ 50000000
#define CONFIG_SYS_UART_BAUD 115200

/* lan91c111.s1 is a altera_avalon_lan91c111 */
#define CONFIG_SMC91111_BASE 0x82110300
#define CONFIG_SMC91111
#define CONFIG_SMC_USE_32_BIT

/* jtag_uart.avalon_jtag_slave is a altera_avalon_jtag_uart */
#define CONFIG_SYS_JTAG_UART_BASE 0x821208b0

/* led_pio.s1 is a altera_avalon_pio */
#define LED_PIO_BASE 0x82120870

/* high_res_timer.s1 is a altera_avalon_timer */
#define CONFIG_SYS_TIMER_BASE 0x82120820
#define CONFIG_SYS_TIMER_IRQ 3
#define CONFIG_SYS_TIMER_FREQ 50000000

/* ext_flash.s1 is a altera_avalon_cfi_flash */
#define CONFIG_SYS_FLASH_BASE 0x80000000
#define CONFIG_FLASH_CFI_DRIVER
#define CONFIG_SYS_CFI_FLASH_STATUS_POLL /* fix amd flash issue */
#define CONFIG_SYS_FLASH_CFI
#define CONFIG_SYS_FLASH_USE_BUFFER_WRITE
#define CONFIG_SYS_FLASH_PROTECTION
#define CONFIG_SYS_MAX_FLASH_BANKS 1
#define CONFIG_SYS_MAX_FLASH_SECT 1024

/* ext_ram.s1 is a altera_nios_dev_kit_stratix_edition_sram2 */
#define CONFIG_SYS_SRAM_BASE 0x02000000
#define CONFIG_SYS_SRAM_SIZE 0x00100000

/* sysid.control_slave is a altera_avalon_sysid */
#define CONFIG_SYS_SYSID_BASE 0x821208b8

#endif /* _CUSTOM_FPGA_H_ */