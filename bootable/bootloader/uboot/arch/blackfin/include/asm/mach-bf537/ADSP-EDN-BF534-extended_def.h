

#ifndef __BFIN_DEF_ADSP_EDN_BF534_extended__
#define __BFIN_DEF_ADSP_EDN_BF534_extended__

#define PLL_CTL                        0xFFC00000 /* PLL Control Register */
#define PLL_DIV                        0xFFC00004 /* PLL Divide Register */
#define VR_CTL                         0xFFC00008 /* Voltage Regulator Control Register */
#define PLL_STAT                       0xFFC0000C /* PLL Status Register */
#define PLL_LOCKCNT                    0xFFC00010 /* PLL Lock Count Register */
#define SWRST                          0xFFC00100 /* Software Reset Register */
#define SYSCR                          0xFFC00104 /* System Configuration Register */
#define SIC_RVECT                      0xFFC00108 /* Interrupt Reset Vector Address Register */
#define SIC_IMASK                      0xFFC0010C /* Interrupt Mask Register */
#define SIC_IAR0                       0xFFC00110 /* Interrupt Assignment Register 0 */
#define SIC_IAR1                       0xFFC00114 /* Interrupt Assignment Register 1 */
#define SIC_IAR2                       0xFFC00118 /* Interrupt Assignment Register 2 */
#define SIC_IAR3                       0xFFC0011C /* Interrupt Assignment Register 3 */
#define SIC_ISR                        0xFFC00120 /* Interrupt Status Register */
#define SIC_IWR                        0xFFC00124 /* Interrupt Wakeup Register */
#define WDOG_CTL                       0xFFC00200 /* Watchdog Control Register */
#define WDOG_CNT                       0xFFC00204 /* Watchdog Count Register */
#define WDOG_STAT                      0xFFC00208 /* Watchdog Status Register */
#define RTC_STAT                       0xFFC00300 /* RTC Status Register */
#define RTC_ICTL                       0xFFC00304 /* RTC Interrupt Control Register */
#define RTC_ISTAT                      0xFFC00308 /* RTC Interrupt Status Register */
#define RTC_SWCNT                      0xFFC0030C /* RTC Stopwatch Count Register */
#define RTC_ALARM                      0xFFC00310 /* RTC Alarm Time Register */
#define RTC_PREN                       0xFFC00314 /* RTC Prescaler Enable Register */
#define UART0_THR                      0xFFC00400 /* Transmit Holding register */
#define UART0_RBR                      0xFFC00400 /* Receive Buffer register */
#define UART0_DLL                      0xFFC00400 /* Divisor Latch (Low-Byte) */
#define UART0_IER                      0xFFC00404 /* Interrupt Enable Register */
#define UART0_DLH                      0xFFC00404 /* Divisor Latch (High-Byte) */
#define UART0_IIR                      0xFFC00408 /* Interrupt Identification Register */
#define UART0_LCR                      0xFFC0040C /* Line Control Register */
#define UART0_MCR                      0xFFC00410 /* Modem Control Register */
#define UART0_LSR                      0xFFC00414 /* Line Status Register */
#define UART0_MSR                      0xFFC00418 /* Modem Status Register */
#define UART0_SCR                      0xFFC0041C /* SCR Scratch Register */
#define UART0_GCTL                     0xFFC00424 /* Global Control Register */
#define SPI_CTL                        0xFFC00500 /* SPI Control Register */
#define SPI_FLG                        0xFFC00504 /* SPI Flag register */
#define SPI_STAT                       0xFFC00508 /* SPI Status register */
#define SPI_TDBR                       0xFFC0050C /* SPI Transmit Data Buffer Register */
#define SPI_RDBR                       0xFFC00510 /* SPI Receive Data Buffer Register */
#define SPI_BAUD                       0xFFC00514 /* SPI Baud rate Register */
#define SPI_SHADOW                     0xFFC00518 /* SPI_RDBR Shadow Register */
#define TIMER0_CONFIG                  0xFFC00600 /* Timer 0 Configuration Register */
#define TIMER0_COUNTER                 0xFFC00604 /* Timer 0 Counter Register */
#define TIMER0_PERIOD                  0xFFC00608 /* Timer 0 Period Register */
#define TIMER0_WIDTH                   0xFFC0060C /* Timer 0 Width Register */
#define TIMER1_CONFIG                  0xFFC00610 /* Timer 1 Configuration Register */
#define TIMER1_COUNTER                 0xFFC00614 /* Timer 1 Counter Register */
#define TIMER1_PERIOD                  0xFFC00618 /* Timer 1 Period Register */
#define TIMER1_WIDTH                   0xFFC0061C /* Timer 1 Width Register */
#define TIMER2_CONFIG                  0xFFC00620 /* Timer 2 Configuration Register */
#define TIMER2_COUNTER                 0xFFC00624 /* Timer 2 Counter Register */
#define TIMER2_PERIOD                  0xFFC00628 /* Timer 2 Period Register */
#define TIMER2_WIDTH                   0xFFC0062C /* Timer 2 Width Register */
#define TIMER3_CONFIG                  0xFFC00630 /* Timer 3 Configuration Register */
#define TIMER3_COUNTER                 0xFFC00634 /* Timer 3 Counter Register */
#define TIMER3_PERIOD                  0xFFC00638 /* Timer 3 Period Register */
#define TIMER3_WIDTH                   0xFFC0063C /* Timer 3 Width Register */
#define TIMER4_CONFIG                  0xFFC00640 /* Timer 4 Configuration Register */
#define TIMER4_COUNTER                 0xFFC00644 /* Timer 4 Counter Register */
#define TIMER4_PERIOD                  0xFFC00648 /* Timer 4 Period Register */
#define TIMER4_WIDTH                   0xFFC0064C /* Timer 4 Width Register */
#define TIMER5_CONFIG                  0xFFC00650 /* Timer 5 Configuration Register */
#define TIMER5_COUNTER                 0xFFC00654 /* Timer 5 Counter Register */
#define TIMER5_PERIOD                  0xFFC00658 /* Timer 5 Period Register */
#define TIMER5_WIDTH                   0xFFC0065C /* Timer 5 Width Register */
#define TIMER6_CONFIG                  0xFFC00660 /* Timer 6 Configuration Register */
#define TIMER6_COUNTER                 0xFFC00664 /* Timer 6 Counter Register */
#define TIMER6_PERIOD                  0xFFC00668 /* Timer 6 Period Register */
#define TIMER6_WIDTH                   0xFFC0066C /* Timer 6 Width Register\n */
#define TIMER7_CONFIG                  0xFFC00670 /* Timer 7 Configuration Register */
#define TIMER7_COUNTER                 0xFFC00674 /* Timer 7 Counter Register */
#define TIMER7_PERIOD                  0xFFC00678 /* Timer 7 Period Register */
#define TIMER7_WIDTH                   0xFFC0067C /* Timer 7 Width Register */
#define TIMER_ENABLE                   0xFFC00680 /* Timer Enable Register */
#define TIMER_DISABLE                  0xFFC00684 /* Timer Disable Register */
#define TIMER_STATUS                   0xFFC00688 /* Timer Status Register */
#define PORTFIO                        0xFFC00700 /* Port F I/O Pin State Specify Register */
#define PORTFIO_CLEAR                  0xFFC00704 /* Port F I/O Peripheral Interrupt Clear Register */
#define PORTFIO_SET                    0xFFC00708 /* Port F I/O Peripheral Interrupt Set Register */
#define PORTFIO_TOGGLE                 0xFFC0070C /* Port F I/O Pin State Toggle Register */
#define PORTFIO_MASKA                  0xFFC00710 /* Port F I/O Mask State Specify Interrupt A Register */
#define PORTFIO_MASKA_CLEAR            0xFFC00714 /* Port F I/O Mask Disable Interrupt A Register */
#define PORTFIO_MASKA_SET              0xFFC00718 /* Port F I/O Mask Enable Interrupt A Register */
#define PORTFIO_MASKA_TOGGLE           0xFFC0071C /* Port F I/O Mask Toggle Enable Interrupt A Register */
#define PORTFIO_MASKB                  0xFFC00720 /* Port F I/O Mask State Specify Interrupt B Register */
#define PORTFIO_MASKB_CLEAR            0xFFC00724 /* Port F I/O Mask Disable Interrupt B Register */
#define PORTFIO_MASKB_SET              0xFFC00728 /* Port F I/O Mask Enable Interrupt B Register */
#define PORTFIO_MASKB_TOGGLE           0xFFC0072C /* Port F I/O Mask Toggle Enable Interrupt B Register */
#define PORTFIO_DIR                    0xFFC00730 /* Port F I/O Direction Register */
#define PORTFIO_POLAR                  0xFFC00734 /* Port F I/O Source Polarity Register */
#define PORTFIO_EDGE                   0xFFC00738 /* Port F I/O Source Sensitivity Register */
#define PORTFIO_BOTH                   0xFFC0073C /* Port F I/O Set on BOTH Edges Register */
#define PORTFIO_INEN                   0xFFC00740 /* Port F I/O Input Enable Register  */
#define SPORT0_TCR1                    0xFFC00800 /* SPORT0 Transmit Configuration 1 Register */
#define SPORT0_TCR2                    0xFFC00804 /* SPORT0 Transmit Configuration 2 Register */
#define SPORT0_TCLKDIV                 0xFFC00808 /* SPORT0 Transmit Clock Divider */
#define SPORT0_TFSDIV                  0xFFC0080C /* SPORT0 Transmit Frame Sync Divider */
#define SPORT0_TX                      0xFFC00810 /* SPORT0 TX Data Register */
#define SPORT0_RX                      0xFFC00818 /* SPORT0 RX Data Register */
#define SPORT0_RCR1                    0xFFC00820 /* SPORT0 Transmit Configuration 1 Register */
#define SPORT0_RCR2                    0xFFC00824 /* SPORT0 Transmit Configuration 2 Register */
#define SPORT0_RCLKDIV                 0xFFC00828 /* SPORT0 Receive Clock Divider */
#define SPORT0_RFSDIV                  0xFFC0082C /* SPORT0 Receive Frame Sync Divider */
#define SPORT0_STAT                    0xFFC00830 /* SPORT0 Status Register */
#define SPORT0_CHNL                    0xFFC00834 /* SPORT0 Current Channel Register */
#define SPORT0_MCMC1                   0xFFC00838 /* SPORT0 Multi-Channel Configuration Register 1 */
#define SPORT0_MCMC2                   0xFFC0083C /* SPORT0 Multi-Channel Configuration Register 2 */
#define SPORT0_MTCS0                   0xFFC00840 /* SPORT0 Multi-Channel Transmit Select Register 0 */
#define SPORT0_MTCS1                   0xFFC00844 /* SPORT0 Multi-Channel Transmit Select Register 1 */
#define SPORT0_MTCS2                   0xFFC00848 /* SPORT0 Multi-Channel Transmit Select Register 2 */
#define SPORT0_MTCS3                   0xFFC0084C /* SPORT0 Multi-Channel Transmit Select Register 3 */
#define SPORT0_MRCS0                   0xFFC00850 /* SPORT0 Multi-Channel Receive Select Register 0 */
#define SPORT0_MRCS1                   0xFFC00854 /* SPORT0 Multi-Channel Receive Select Register 1 */
#define SPORT0_MRCS2                   0xFFC00858 /* SPORT0 Multi-Channel Receive Select Register 2 */
#define SPORT0_MRCS3                   0xFFC0085C /* SPORT0 Multi-Channel Receive Select Register 3 */
#define SPORT1_TCR1                    0xFFC00900 /* SPORT1 Transmit Configuration 1 Register */
#define SPORT1_TCR2                    0xFFC00904 /* SPORT1 Transmit Configuration 2 Register */
#define SPORT1_TCLKDIV                 0xFFC00908 /* SPORT1 Transmit Clock Divider */
#define SPORT1_TFSDIV                  0xFFC0090C /* SPORT1 Transmit Frame Sync Divider */
#define SPORT1_TX                      0xFFC00910 /* SPORT1 TX Data Register */
#define SPORT1_RX                      0xFFC00918 /* SPORT1 RX Data Register */
#define SPORT1_RCR1                    0xFFC00920 /* SPORT1 Transmit Configuration 1 Register */
#define SPORT1_RCR2                    0xFFC00924 /* SPORT1 Transmit Configuration 2 Register */
#define SPORT1_RCLKDIV                 0xFFC00928 /* SPORT1 Receive Clock Divider */
#define SPORT1_RFSDIV                  0xFFC0092C /* SPORT1 Receive Frame Sync Divider */
#define SPORT1_STAT                    0xFFC00930 /* SPORT1 Status Register */
#define SPORT1_CHNL                    0xFFC00934 /* SPORT1 Current Channel Register */
#define SPORT1_MCMC1                   0xFFC00938 /* SPORT1 Multi-Channel Configuration Register 1 */
#define SPORT1_MCMC2                   0xFFC0093C /* SPORT1 Multi-Channel Configuration Register 2 */
#define SPORT1_MTCS0                   0xFFC00940 /* SPORT1 Multi-Channel Transmit Select Register 0 */
#define SPORT1_MTCS1                   0xFFC00944 /* SPORT1 Multi-Channel Transmit Select Register 1 */
#define SPORT1_MTCS2                   0xFFC00948 /* SPORT1 Multi-Channel Transmit Select Register 2 */
#define SPORT1_MTCS3                   0xFFC0094C /* SPORT1 Multi-Channel Transmit Select Register 3 */
#define SPORT1_MRCS0                   0xFFC00950 /* SPORT1 Multi-Channel Receive Select Register 0 */
#define SPORT1_MRCS1                   0xFFC00954 /* SPORT1 Multi-Channel Receive Select Register 1 */
#define SPORT1_MRCS2                   0xFFC00958 /* SPORT1 Multi-Channel Receive Select Register 2 */
#define SPORT1_MRCS3                   0xFFC0095C /* SPORT1 Multi-Channel Receive Select Register 3 */
#define EBIU_AMGCTL                    0xFFC00A00 /* Asynchronous Memory Global Control Register */
#define EBIU_AMBCTL0                   0xFFC00A04 /* Asynchronous Memory Bank Control Register 0 */
#define EBIU_AMBCTL1                   0xFFC00A08 /* Asynchronous Memory Bank Control Register 1 */
#define EBIU_SDGCTL                    0xFFC00A10 /* SDRAM Global Control Register */
#define EBIU_SDBCTL                    0xFFC00A14 /* SDRAM Bank Control Register */
#define EBIU_SDRRC                     0xFFC00A18 /* SDRAM Refresh Rate Control Register */
#define EBIU_SDSTAT                    0xFFC00A1C /* SDRAM Status Register */
#define DMA0_NEXT_DESC_PTR             0xFFC00C00 /* DMA Channel 0 Next Descriptor Pointer Register */
#define DMA0_START_ADDR                0xFFC00C04 /* DMA Channel 0 Start Address Register */
#define DMA0_CONFIG                    0xFFC00C08 /* DMA Channel 0 Configuration Register */
#define DMA0_X_COUNT                   0xFFC00C10 /* DMA Channel 0 X Count Register */
#define DMA0_X_MODIFY                  0xFFC00C14 /* DMA Channel 0 X Modify Register */
#define DMA0_Y_COUNT                   0xFFC00C18 /* DMA Channel 0 Y Count Register */
#define DMA0_Y_MODIFY                  0xFFC00C1C /* DMA Channel 0 Y Modify Register */
#define DMA0_CURR_DESC_PTR             0xFFC00C20 /* DMA Channel 0 Current Descriptor Pointer Register */
#define DMA0_CURR_ADDR                 0xFFC00C24 /* DMA Channel 0 Current Address Register */
#define DMA0_IRQ_STATUS                0xFFC00C28 /* DMA Channel 0 Interrupt/Status Register */
#define DMA0_PERIPHERAL_MAP            0xFFC00C2C /* DMA Channel 0 Peripheral Map Register */
#define DMA0_CURR_X_COUNT              0xFFC00C30 /* DMA Channel 0 Current X Count Register */
#define DMA0_CURR_Y_COUNT              0xFFC00C38 /* DMA Channel 0 Current Y Count Register */
#define DMA1_NEXT_DESC_PTR             0xFFC00C40 /* DMA Channel 1 Next Descriptor Pointer Register */
#define DMA1_START_ADDR                0xFFC00C44 /* DMA Channel 1 Start Address Register */
#define DMA1_CONFIG                    0xFFC00C48 /* DMA Channel 1 Configuration Register */
#define DMA1_X_COUNT                   0xFFC00C50 /* DMA Channel 1 X Count Register */
#define DMA1_X_MODIFY                  0xFFC00C54 /* DMA Channel 1 X Modify Register */
#define DMA1_Y_COUNT                   0xFFC00C58 /* DMA Channel 1 Y Count Register */
#define DMA1_Y_MODIFY                  0xFFC00C5C /* DMA Channel 1 Y Modify Register */
#define DMA1_CURR_DESC_PTR             0xFFC00C60 /* DMA Channel 1 Current Descriptor Pointer Register */
#define DMA1_CURR_ADDR                 0xFFC00C64 /* DMA Channel 1 Current Address Register */
#define DMA1_IRQ_STATUS                0xFFC00C68 /* DMA Channel 1 Interrupt/Status Register */
#define DMA1_PERIPHERAL_MAP            0xFFC00C6C /* DMA Channel 1 Peripheral Map Register */
#define DMA1_CURR_X_COUNT              0xFFC00C70 /* DMA Channel 1 Current X Count Register */
#define DMA1_CURR_Y_COUNT              0xFFC00C78 /* DMA Channel 1 Current Y Count Register */
#define DMA2_NEXT_DESC_PTR             0xFFC00C80 /* DMA Channel 2 Next Descriptor Pointer Register */
#define DMA2_START_ADDR                0xFFC00C84 /* DMA Channel 2 Start Address Register */
#define DMA2_CONFIG                    0xFFC00C88 /* DMA Channel 2 Configuration Register */
#define DMA2_X_COUNT                   0xFFC00C90 /* DMA Channel 2 X Count Register */
#define DMA2_X_MODIFY                  0xFFC00C94 /* DMA Channel 2 X Modify Register */
#define DMA2_Y_COUNT                   0xFFC00C98 /* DMA Channel 2 Y Count Register */
#define DMA2_Y_MODIFY                  0xFFC00C9C /* DMA Channel 2 Y Modify Register */
#define DMA2_CURR_DESC_PTR             0xFFC00CA0 /* DMA Channel 2 Current Descriptor Pointer Register */
#define DMA2_CURR_ADDR                 0xFFC00CA4 /* DMA Channel 2 Current Address Register */
#define DMA2_IRQ_STATUS                0xFFC00CA8 /* DMA Channel 2 Interrupt/Status Register */
#define DMA2_PERIPHERAL_MAP            0xFFC00CAC /* DMA Channel 2 Peripheral Map Register */
#define DMA2_CURR_X_COUNT              0xFFC00CB0 /* DMA Channel 2 Current X Count Register */
#define DMA2_CURR_Y_COUNT              0xFFC00CB8 /* DMA Channel 2 Current Y Count Register */
#define DMA3_NEXT_DESC_PTR             0xFFC00CC0 /* DMA Channel 3 Next Descriptor Pointer Register */
#define DMA3_START_ADDR                0xFFC00CC4 /* DMA Channel 3 Start Address Register */
#define DMA3_CONFIG                    0xFFC00CC8 /* DMA Channel 3 Configuration Register */
#define DMA3_X_COUNT                   0xFFC00CD0 /* DMA Channel 3 X Count Register */
#define DMA3_X_MODIFY                  0xFFC00CD4 /* DMA Channel 3 X Modify Register */
#define DMA3_Y_COUNT                   0xFFC00CD8 /* DMA Channel 3 Y Count Register */
#define DMA3_Y_MODIFY                  0xFFC00CDC /* DMA Channel 3 Y Modify Register */
#define DMA3_CURR_DESC_PTR             0xFFC00CE0 /* DMA Channel 3 Current Descriptor Pointer Register */
#define DMA3_CURR_ADDR                 0xFFC00CE4 /* DMA Channel 3 Current Address Register */
#define DMA3_IRQ_STATUS                0xFFC00CE8 /* DMA Channel 3 Interrupt/Status Register */
#define DMA3_PERIPHERAL_MAP            0xFFC00CEC /* DMA Channel 3 Peripheral Map Register */
#define DMA3_CURR_X_COUNT              0xFFC00CF0 /* DMA Channel 3 Current X Count Register */
#define DMA3_CURR_Y_COUNT              0xFFC00CF8 /* DMA Channel 3 Current Y Count Register */
#define DMA4_NEXT_DESC_PTR             0xFFC00D00 /* DMA Channel 4 Next Descriptor Pointer Register */
#define DMA4_START_ADDR                0xFFC00D04 /* DMA Channel 4 Start Address Register */
#define DMA4_CONFIG                    0xFFC00D08 /* DMA Channel 4 Configuration Register */
#define DMA4_X_COUNT                   0xFFC00D10 /* DMA Channel 4 X Count Register */
#define DMA4_X_MODIFY                  0xFFC00D14 /* DMA Channel 4 X Modify Register */
#define DMA4_Y_COUNT                   0xFFC00D18 /* DMA Channel 4 Y Count Register */
#define DMA4_Y_MODIFY                  0xFFC00D1C /* DMA Channel 4 Y Modify Register */
#define DMA4_CURR_DESC_PTR             0xFFC00D20 /* DMA Channel 4 Current Descriptor Pointer Register */
#define DMA4_CURR_ADDR                 0xFFC00D24 /* DMA Channel 4 Current Address Register */
#define DMA4_IRQ_STATUS                0xFFC00D28 /* DMA Channel 4 Interrupt/Status Register */
#define DMA4_PERIPHERAL_MAP            0xFFC00D2C /* DMA Channel 4 Peripheral Map Register */
#define DMA4_CURR_X_COUNT              0xFFC00D30 /* DMA Channel 4 Current X Count Register */
#define DMA4_CURR_Y_COUNT              0xFFC00D38 /* DMA Channel 4 Current Y Count Register */
#define DMA5_NEXT_DESC_PTR             0xFFC00D40 /* DMA Channel 5 Next Descriptor Pointer Register */
#define DMA5_START_ADDR                0xFFC00D44 /* DMA Channel 5 Start Address Register */
#define DMA5_CONFIG                    0xFFC00D48 /* DMA Channel 5 Configuration Register */
#define DMA5_X_COUNT                   0xFFC00D50 /* DMA Channel 5 X Count Register */
#define DMA5_X_MODIFY                  0xFFC00D54 /* DMA Channel 5 X Modify Register */
#define DMA5_Y_COUNT                   0xFFC00D58 /* DMA Channel 5 Y Count Register */
#define DMA5_Y_MODIFY                  0xFFC00D5C /* DMA Channel 5 Y Modify Register */
#define DMA5_CURR_DESC_PTR             0xFFC00D60 /* DMA Channel 5 Current Descriptor Pointer Register */
#define DMA5_CURR_ADDR                 0xFFC00D64 /* DMA Channel 5 Current Address Register */
#define DMA5_IRQ_STATUS                0xFFC00D68 /* DMA Channel 5 Interrupt/Status Register */
#define DMA5_PERIPHERAL_MAP            0xFFC00D6C /* DMA Channel 5 Peripheral Map Register */
#define DMA5_CURR_X_COUNT              0xFFC00D70 /* DMA Channel 5 Current X Count Register */
#define DMA5_CURR_Y_COUNT              0xFFC00D78 /* DMA Channel 5 Current Y Count Register */
#define DMA6_NEXT_DESC_PTR             0xFFC00D80 /* DMA Channel 6 Next Descriptor Pointer Register */
#define DMA6_START_ADDR                0xFFC00D84 /* DMA Channel 6 Start Address Register */
#define DMA6_CONFIG                    0xFFC00D88 /* DMA Channel 6 Configuration Register */
#define DMA6_X_COUNT                   0xFFC00D90 /* DMA Channel 6 X Count Register */
#define DMA6_X_MODIFY                  0xFFC00D94 /* DMA Channel 6 X Modify Register */
#define DMA6_Y_COUNT                   0xFFC00D98 /* DMA Channel 6 Y Count Register */
#define DMA6_Y_MODIFY                  0xFFC00D9C /* DMA Channel 6 Y Modify Register */
#define DMA6_CURR_DESC_PTR             0xFFC00DA0 /* DMA Channel 6 Current Descriptor Pointer Register */
#define DMA6_CURR_ADDR                 0xFFC00DA4 /* DMA Channel 6 Current Address Register */
#define DMA6_IRQ_STATUS                0xFFC00DA8 /* DMA Channel 6 Interrupt/Status Register */
#define DMA6_PERIPHERAL_MAP            0xFFC00DAC /* DMA Channel 6 Peripheral Map Register */
#define DMA6_CURR_X_COUNT              0xFFC00DB0 /* DMA Channel 6 Current X Count Register */
#define DMA6_CURR_Y_COUNT              0xFFC00DB8 /* DMA Channel 6 Current Y Count Register */
#define DMA7_NEXT_DESC_PTR             0xFFC00DC0 /* DMA Channel 7 Next Descriptor Pointer Register */
#define DMA7_START_ADDR                0xFFC00DC4 /* DMA Channel 7 Start Address Register */
#define DMA7_CONFIG                    0xFFC00DC8 /* DMA Channel 7 Configuration Register */
#define DMA7_X_COUNT                   0xFFC00DD0 /* DMA Channel 7 X Count Register */
#define DMA7_X_MODIFY                  0xFFC00DD4 /* DMA Channel 7 X Modify Register */
#define DMA7_Y_COUNT                   0xFFC00DD8 /* DMA Channel 7 Y Count Register */
#define DMA7_Y_MODIFY                  0xFFC00DDC /* DMA Channel 7 Y Modify Register */
#define DMA7_CURR_DESC_PTR             0xFFC00DE0 /* DMA Channel 7 Current Descriptor Pointer Register */
#define DMA7_CURR_ADDR                 0xFFC00DE4 /* DMA Channel 7 Current Address Register */
#define DMA7_IRQ_STATUS                0xFFC00DE8 /* DMA Channel 7 Interrupt/Status Register */
#define DMA7_PERIPHERAL_MAP            0xFFC00DEC /* DMA Channel 7 Peripheral Map Register */
#define DMA7_CURR_X_COUNT              0xFFC00DF0 /* DMA Channel 7 Current X Count Register */
#define DMA7_CURR_Y_COUNT              0xFFC00DF8 /* DMA Channel 7 Current Y Count Register */
#define DMA8_NEXT_DESC_PTR             0xFFC00E00 /* DMA Channel 8 Next Descriptor Pointer Register */
#define DMA8_START_ADDR                0xFFC00E04 /* DMA Channel 8 Start Address Register */
#define DMA8_CONFIG                    0xFFC00E08 /* DMA Channel 8 Configuration Register */
#define DMA8_X_COUNT                   0xFFC00E10 /* DMA Channel 8 X Count Register */
#define DMA8_X_MODIFY                  0xFFC00E14 /* DMA Channel 8 X Modify Register */
#define DMA8_Y_COUNT                   0xFFC00E18 /* DMA Channel 8 Y Count Register */
#define DMA8_Y_MODIFY                  0xFFC00E1C /* DMA Channel 8 Y Modify Register */
#define DMA8_CURR_DESC_PTR             0xFFC00E20 /* DMA Channel 8 Current Descriptor Pointer Register */
#define DMA8_CURR_ADDR                 0xFFC00E24 /* DMA Channel 8 Current Address Register */
#define DMA8_IRQ_STATUS                0xFFC00E28 /* DMA Channel 8 Interrupt/Status Register */
#define DMA8_PERIPHERAL_MAP            0xFFC00E2C /* DMA Channel 8 Peripheral Map Register */
#define DMA8_CURR_X_COUNT              0xFFC00E30 /* DMA Channel 8 Current X Count Register */
#define DMA8_CURR_Y_COUNT              0xFFC00E38 /* DMA Channel 8 Current Y Count Register */
#define DMA9_NEXT_DESC_PTR             0xFFC00E40 /* DMA Channel 9 Next Descriptor Pointer Register */
#define DMA9_START_ADDR                0xFFC00E44 /* DMA Channel 9 Start Address Register */
#define DMA9_CONFIG                    0xFFC00E48 /* DMA Channel 9 Configuration Register */
#define DMA9_X_COUNT                   0xFFC00E50 /* DMA Channel 9 X Count Register */
#define DMA9_X_MODIFY                  0xFFC00E54 /* DMA Channel 9 X Modify Register */
#define DMA9_Y_COUNT                   0xFFC00E58 /* DMA Channel 9 Y Count Register */
#define DMA9_Y_MODIFY                  0xFFC00E5C /* DMA Channel 9 Y Modify Register */
#define DMA9_CURR_DESC_PTR             0xFFC00E60 /* DMA Channel 9 Current Descriptor Pointer Register */
#define DMA9_CURR_ADDR                 0xFFC00E64 /* DMA Channel 9 Current Address Register */
#define DMA9_IRQ_STATUS                0xFFC00E68 /* DMA Channel 9 Interrupt/Status Register */
#define DMA9_PERIPHERAL_MAP            0xFFC00E6C /* DMA Channel 9 Peripheral Map Register */
#define DMA9_CURR_X_COUNT              0xFFC00E70 /* DMA Channel 9 Current X Count Register */
#define DMA9_CURR_Y_COUNT              0xFFC00E78 /* DMA Channel 9 Current Y Count Register */
#define DMA10_NEXT_DESC_PTR            0xFFC00E80 /* DMA Channel 10 Next Descriptor Pointer Register */
#define DMA10_START_ADDR               0xFFC00E84 /* DMA Channel 10 Start Address Register */
#define DMA10_CONFIG                   0xFFC00E88 /* DMA Channel 10 Configuration Register */
#define DMA10_X_COUNT                  0xFFC00E90 /* DMA Channel 10 X Count Register */
#define DMA10_X_MODIFY                 0xFFC00E94 /* DMA Channel 10 X Modify Register */
#define DMA10_Y_COUNT                  0xFFC00E98 /* DMA Channel 10 Y Count Register */
#define DMA10_Y_MODIFY                 0xFFC00E9C /* DMA Channel 10 Y Modify Register */
#define DMA10_CURR_DESC_PTR            0xFFC00EA0 /* DMA Channel 10 Current Descriptor Pointer Register */
#define DMA10_CURR_ADDR                0xFFC00EA4 /* DMA Channel 10 Current Address Register */
#define DMA10_IRQ_STATUS               0xFFC00EA8 /* DMA Channel 10 Interrupt/Status Register */
#define DMA10_PERIPHERAL_MAP           0xFFC00EAC /* DMA Channel 10 Peripheral Map Register */
#define DMA10_CURR_X_COUNT             0xFFC00EB0 /* DMA Channel 10 Current X Count Register */
#define DMA10_CURR_Y_COUNT             0xFFC00EB8 /* DMA Channel 10 Current Y Count Register */
#define DMA11_NEXT_DESC_PTR            0xFFC00EC0 /* DMA Channel 11 Next Descriptor Pointer Register */
#define DMA11_START_ADDR               0xFFC00EC4 /* DMA Channel 11 Start Address Register */
#define DMA11_CONFIG                   0xFFC00EC8 /* DMA Channel 11 Configuration Register */
#define DMA11_X_COUNT                  0xFFC00ED0 /* DMA Channel 11 X Count Register */
#define DMA11_X_MODIFY                 0xFFC00ED4 /* DMA Channel 11 X Modify Register */
#define DMA11_Y_COUNT                  0xFFC00ED8 /* DMA Channel 11 Y Count Register */
#define DMA11_Y_MODIFY                 0xFFC00EDC /* DMA Channel 11 Y Modify Register */
#define DMA11_CURR_DESC_PTR            0xFFC00EE0 /* DMA Channel 11 Current Descriptor Pointer Register */
#define DMA11_CURR_ADDR                0xFFC00EE4 /* DMA Channel 11 Current Address Register */
#define DMA11_IRQ_STATUS               0xFFC00EE8 /* DMA Channel 11 Interrupt/Status Register */
#define DMA11_PERIPHERAL_MAP           0xFFC00EEC /* DMA Channel 11 Peripheral Map Register */
#define DMA11_CURR_X_COUNT             0xFFC00EF0 /* DMA Channel 11 Current X Count Register */
#define DMA11_CURR_Y_COUNT             0xFFC00EF8 /* DMA Channel 11 Current Y Count Register */
#define MDMA_S0_NEXT_DESC_PTR          0xFFC00F40 /* MemDMA Stream 0 Source Next Descriptor Pointer Register */
#define MDMA_S0_START_ADDR             0xFFC00F44 /* MemDMA Stream 0 Source Start Address Register */
#define MDMA_S0_CONFIG                 0xFFC00F48 /* MemDMA Stream 0 Source Configuration Register */
#define MDMA_S0_X_COUNT                0xFFC00F50 /* MemDMA Stream 0 Source X Count Register */
#define MDMA_S0_X_MODIFY               0xFFC00F54 /* MemDMA Stream 0 Source X Modify Register */
#define MDMA_S0_Y_COUNT                0xFFC00F58 /* MemDMA Stream 0 Source Y Count Register */
#define MDMA_S0_Y_MODIFY               0xFFC00F5C /* MemDMA Stream 0 Source Y Modify Register */
#define MDMA_S0_CURR_DESC_PTR          0xFFC00F60 /* MemDMA Stream 0 Source Current Descriptor Pointer Register */
#define MDMA_S0_CURR_ADDR              0xFFC00F64 /* MemDMA Stream 0 Source Current Address Register */
#define MDMA_S0_IRQ_STATUS             0xFFC00F68 /* MemDMA Stream 0 Source Interrupt/Status Register */
#define MDMA_S0_PERIPHERAL_MAP         0xFFC00F6C /* MemDMA Stream 0 Source Peripheral Map Register */
#define MDMA_S0_CURR_X_COUNT           0xFFC00F70 /* MemDMA Stream 0 Source Current X Count Register */
#define MDMA_S0_CURR_Y_COUNT           0xFFC00F78 /* MemDMA Stream 0 Source Current Y Count Register */
#define MDMA_D0_NEXT_DESC_PTR          0xFFC00F00 /* MemDMA Stream 0 Destination Next Descriptor Pointer Register */
#define MDMA_D0_START_ADDR             0xFFC00F04 /* MemDMA Stream 0 Destination Start Address Register */
#define MDMA_D0_CONFIG                 0xFFC00F08 /* MemDMA Stream 0 Destination Configuration Register */
#define MDMA_D0_X_COUNT                0xFFC00F10 /* MemDMA Stream 0 Destination X Count Register */
#define MDMA_D0_X_MODIFY               0xFFC00F14 /* MemDMA Stream 0 Destination X Modify Register */
#define MDMA_D0_Y_COUNT                0xFFC00F18 /* MemDMA Stream 0 Destination Y Count Register */
#define MDMA_D0_Y_MODIFY               0xFFC00F1C /* MemDMA Stream 0 Destination Y Modify Register */
#define MDMA_D0_CURR_DESC_PTR          0xFFC00F20 /* MemDMA Stream 0 Destination Current Descriptor Pointer Register */
#define MDMA_D0_CURR_ADDR              0xFFC00F24 /* MemDMA Stream 0 Destination Current Address Register */
#define MDMA_D0_IRQ_STATUS             0xFFC00F28 /* MemDMA Stream 0 Destination Interrupt/Status Register */
#define MDMA_D0_PERIPHERAL_MAP         0xFFC00F2C /* MemDMA Stream 0 Destination Peripheral Map Register */
#define MDMA_D0_CURR_X_COUNT           0xFFC00F30 /* MemDMA Stream 0 Destination Current X Count Register */
#define MDMA_D0_CURR_Y_COUNT           0xFFC00F38 /* MemDMA Stream 0 Destination Current Y Count Register */
#define MDMA_S1_NEXT_DESC_PTR          0xFFC00FC0 /* MemDMA Stream 1 Source Next Descriptor Pointer Register */
#define MDMA_S1_START_ADDR             0xFFC00FC4 /* MemDMA Stream 1 Source Start Address Register */
#define MDMA_S1_CONFIG                 0xFFC00FC8 /* MemDMA Stream 1 Source Configuration Register */
#define MDMA_S1_X_COUNT                0xFFC00FD0 /* MemDMA Stream 1 Source X Count Register */
#define MDMA_S1_X_MODIFY               0xFFC00FD4 /* MemDMA Stream 1 Source X Modify Register */
#define MDMA_S1_Y_COUNT                0xFFC00FD8 /* MemDMA Stream 1 Source Y Count Register */
#define MDMA_S1_Y_MODIFY               0xFFC00FDC /* MemDMA Stream 1 Source Y Modify Register */
#define MDMA_S1_CURR_DESC_PTR          0xFFC00FE0 /* MemDMA Stream 1 Source Current Descriptor Pointer Register */
#define MDMA_S1_CURR_ADDR              0xFFC00FE4 /* MemDMA Stream 1 Source Current Address Register */
#define MDMA_S1_IRQ_STATUS             0xFFC00FE8 /* MemDMA Stream 1 Source Interrupt/Status Register */
#define MDMA_S1_PERIPHERAL_MAP         0xFFC00FEC /* MemDMA Stream 1 Source Peripheral Map Register */
#define MDMA_S1_CURR_X_COUNT           0xFFC00FF0 /* MemDMA Stream 1 Source Current X Count Register */
#define MDMA_S1_CURR_Y_COUNT           0xFFC00FF8 /* MemDMA Stream 1 Source Current Y Count Register */
#define MDMA_D1_NEXT_DESC_PTR          0xFFC00F80 /* MemDMA Stream 1 Destination Next Descriptor Pointer Register */
#define MDMA_D1_START_ADDR             0xFFC00F84 /* MemDMA Stream 1 Destination Start Address Register */
#define MDMA_D1_CONFIG                 0xFFC00F88 /* MemDMA Stream 1 Destination Configuration Register */
#define MDMA_D1_X_COUNT                0xFFC00F90 /* MemDMA Stream 1 Destination X Count Register */
#define MDMA_D1_X_MODIFY               0xFFC00F94 /* MemDMA Stream 1 Destination X Modify Register */
#define MDMA_D1_Y_COUNT                0xFFC00F98 /* MemDMA Stream 1 Destination Y Count Register */
#define MDMA_D1_Y_MODIFY               0xFFC00F9C /* MemDMA Stream 1 Destination Y Modify Register */
#define MDMA_D1_CURR_DESC_PTR          0xFFC00FA0 /* MemDMA Stream 1 Destination Current Descriptor Pointer Register */
#define MDMA_D1_CURR_ADDR              0xFFC00FA4 /* MemDMA Stream 1 Destination Current Address Register */
#define MDMA_D1_IRQ_STATUS             0xFFC00FA8 /* MemDMA Stream 1 Destination Interrupt/Status Register */
#define MDMA_D1_PERIPHERAL_MAP         0xFFC00FAC /* MemDMA Stream 1 Destination Peripheral Map Register */
#define MDMA_D1_CURR_X_COUNT           0xFFC00FB0 /* MemDMA Stream 1 Destination Current X Count Register */
#define MDMA_D1_CURR_Y_COUNT           0xFFC00FB8 /* MemDMA Stream 1 Destination Current Y Count Register */
#define PPI_CONTROL                    0xFFC01000 /* PPI Control Register */
#define PPI_STATUS                     0xFFC01004 /* PPI Status Register */
#define PPI_COUNT                      0xFFC01008 /* PPI Transfer Count Register */
#define PPI_DELAY                      0xFFC0100C /* PPI Delay Count Register */
#define PPI_FRAME                      0xFFC01010 /* PPI Frame Length Register */
#define TWI_CLKDIV                     0xFFC01400 /* Serial Clock Divider Register */
#define TWI_CONTROL                    0xFFC01404 /* TWI Control Register */
#define TWI_SLAVE_CTL                  0xFFC01408 /* Slave Mode Control Register */
#define TWI_SLAVE_STAT                 0xFFC0140C /* Slave Mode Status Register */
#define TWI_SLAVE_ADDR                 0xFFC01410 /* Slave Mode Address Register */
#define TWI_MASTER_CTL                 0xFFC01414 /* Master Mode Control Register */
#define TWI_MASTER_STAT                0xFFC01418 /* Master Mode Status Register */
#define TWI_MASTER_ADDR                0xFFC0141C /* Master Mode Address Register */
#define TWI_INT_STAT                   0xFFC01420 /* TWI Interrupt Status Register */
#define TWI_INT_MASK                   0xFFC01424 /* TWI Master Interrupt Mask Register */
#define TWI_FIFO_CTL                   0xFFC01428 /* FIFO Control Register */
#define TWI_FIFO_STAT                  0xFFC0142C /* FIFO Status Register */
#define TWI_XMT_DATA8                  0xFFC01480 /* FIFO Transmit Data Single Byte Register */
#define TWI_XMT_DATA16                 0xFFC01484 /* FIFO Transmit Data Double Byte Register */
#define TWI_RCV_DATA8                  0xFFC01488 /* FIFO Receive Data Single Byte Register */
#define TWI_RCV_DATA16                 0xFFC0148C /* FIFO Receive Data Double Byte Register */
#define PORTGIO                        0xFFC01500 /* Port G I/O Pin State Specify Register */
#define PORTGIO_CLEAR                  0xFFC01504 /* Port G I/O Peripheral Interrupt Clear Register */
#define PORTGIO_SET                    0xFFC01508 /* Port G I/O Peripheral Interrupt Set Register */
#define PORTGIO_TOGGLE                 0xFFC0150C /* Port G I/O Pin State Toggle Register */
#define PORTGIO_MASKA                  0xFFC01510 /* Port G I/O Mask State Specify Interrupt A Register */
#define PORTGIO_MASKA_CLEAR            0xFFC01514 /* Port G I/O Mask Disable Interrupt A Register */
#define PORTGIO_MASKA_SET              0xFFC01518 /* Port G I/O Mask Enable Interrupt A Register */
#define PORTGIO_MASKA_TOGGLE           0xFFC0151C /* Port G I/O Mask Toggle Enable Interrupt A Register */
#define PORTGIO_MASKB                  0xFFC01520 /* Port G I/O Mask State Specify Interrupt B Register */
#define PORTGIO_MASKB_CLEAR            0xFFC01524 /* Port G I/O Mask Disable Interrupt B Register */
#define PORTGIO_MASKB_SET              0xFFC01528 /* Port G I/O Mask Enable Interrupt B Register */
#define PORTGIO_MASKB_TOGGLE           0xFFC0152C /* Port G I/O Mask Toggle Enable Interrupt B Register */
#define PORTGIO_DIR                    0xFFC01530 /* Port G I/O Direction Register */
#define PORTGIO_POLAR                  0xFFC01534 /* Port G I/O Source Polarity Register */
#define PORTGIO_EDGE                   0xFFC01538 /* Port G I/O Source Sensitivity Register */
#define PORTGIO_BOTH                   0xFFC0153C /* Port G I/O Set on BOTH Edges Register */
#define PORTGIO_INEN                   0xFFC01540 /* Port G I/O Input Enable Register */
#define PORTHIO                        0xFFC01700 /* Port H I/O Pin State Specify Register */
#define PORTHIO_CLEAR                  0xFFC01704 /* Port H I/O Peripheral Interrupt Clear Register */
#define PORTHIO_SET                    0xFFC01708 /* Port H I/O Peripheral Interrupt Set Register */
#define PORTHIO_TOGGLE                 0xFFC0170C /* Port H I/O Pin State Toggle Register */
#define PORTHIO_MASKA                  0xFFC01710 /* Port H I/O Mask State Specify Interrupt A Register */
#define PORTHIO_MASKA_CLEAR            0xFFC01714 /* Port H I/O Mask Disable Interrupt A Register */
#define PORTHIO_MASKA_SET              0xFFC01718 /* Port H I/O Mask Enable Interrupt A Register */
#define PORTHIO_MASKA_TOGGLE           0xFFC0171C /* Port H I/O Mask Toggle Enable Interrupt A Register */
#define PORTHIO_MASKB                  0xFFC01720 /* Port H I/O Mask State Specify Interrupt B Register */
#define PORTHIO_MASKB_CLEAR            0xFFC01724 /* Port H I/O Mask Disable Interrupt B Register */
#define PORTHIO_MASKB_SET              0xFFC01728 /* Port H I/O Mask Enable Interrupt B Register */
#define PORTHIO_MASKB_TOGGLE           0xFFC0172C /* Port H I/O Mask Toggle Enable Interrupt B Register */
#define PORTHIO_DIR                    0xFFC01730 /* Port H I/O Direction Register */
#define PORTHIO_POLAR                  0xFFC01734 /* Port H I/O Source Polarity Register */
#define PORTHIO_EDGE                   0xFFC01738 /* Port H I/O Source Sensitivity Register */
#define PORTHIO_BOTH                   0xFFC0173C /* Port H I/O Set on BOTH Edges Register */
#define PORTHIO_INEN                   0xFFC01740 /* Port H I/O Input Enable Register */
#define UART1_THR                      0xFFC02000 /* Transmit Holding register */
#define UART1_RBR                      0xFFC02000 /* Receive Buffer register */
#define UART1_DLL                      0xFFC02000 /* Divisor Latch (Low-Byte) */
#define UART1_IER                      0xFFC02004 /* Interrupt Enable Register */
#define UART1_DLH                      0xFFC02004 /* Divisor Latch (High-Byte) */
#define UART1_IIR                      0xFFC02008 /* Interrupt Identification Register */
#define UART1_LCR                      0xFFC0200C /* Line Control Register */
#define UART1_MCR                      0xFFC02010 /* Modem Control Register */
#define UART1_LSR                      0xFFC02014 /* Line Status Register */
#define UART1_MSR                      0xFFC02018 /* Modem Status Register */
#define UART1_SCR                      0xFFC0201C /* SCR Scratch Register */
#define UART1_GCTL                     0xFFC02024 /* Global Control Register */
#define CAN_MC1                        0xFFC02A00 /* Mailbox config reg 1 */
#define CAN_MD1                        0xFFC02A04 /* Mailbox direction reg 1 */
#define CAN_TRS1                       0xFFC02A08 /* Transmit Request Set reg 1 */
#define CAN_TRR1                       0xFFC02A0C /* Transmit Request Reset reg 1 */
#define CAN_TA1                        0xFFC02A10 /* Transmit Acknowledge reg 1 */
#define CAN_AA1                        0xFFC02A14 /* Transmit Abort Acknowledge reg 1 */
#define CAN_RMP1                       0xFFC02A18 /* Receive Message Pending reg 1 */
#define CAN_RML1                       0xFFC02A1C /* Receive Message Lost reg 1 */
#define CAN_MBTIF1                     0xFFC02A20 /* Mailbox Transmit Interrupt Flag reg 1 */
#define CAN_MBRIF1                     0xFFC02A24 /* Mailbox Receive  Interrupt Flag reg 1 */
#define CAN_MBIM1                      0xFFC02A28 /* Mailbox Interrupt Mask reg 1 */
#define CAN_RFH1                       0xFFC02A2C /* Remote Frame Handling reg 1 */
#define CAN_OPSS1                      0xFFC02A30 /* Overwrite Protection Single Shot Xmission reg 1 */
#define CAN_MC2                        0xFFC02A40 /* Mailbox config reg 2 */
#define CAN_MD2                        0xFFC02A44 /* Mailbox direction reg 2 */
#define CAN_TRS2                       0xFFC02A48 /* Transmit Request Set reg 2 */
#define CAN_TRR2                       0xFFC02A4C /* Transmit Request Reset reg 2 */
#define CAN_TA2                        0xFFC02A50 /* Transmit Acknowledge reg 2 */
#define CAN_AA2                        0xFFC02A54 /* Transmit Abort Acknowledge reg 2 */
#define CAN_RMP2                       0xFFC02A58 /* Receive Message Pending reg 2 */
#define CAN_RML2                       0xFFC02A5C /* Receive Message Lost reg 2 */
#define CAN_MBTIF2                     0xFFC02A60 /* Mailbox Transmit Interrupt Flag reg 2 */
#define CAN_MBRIF2                     0xFFC02A64 /* Mailbox Receive  Interrupt Flag reg 2 */
#define CAN_MBIM2                      0xFFC02A68 /* Mailbox Interrupt Mask reg 2 */
#define CAN_RFH2                       0xFFC02A6C /* Remote Frame Handling reg 2 */
#define CAN_OPSS2                      0xFFC02A70 /* Overwrite Protection Single Shot Xmission reg 2 */
#define CAN_CLOCK                      0xFFC02A80 /* Bit Timing Configuration register 0 */
#define CAN_TIMING                     0xFFC02A84 /* Bit Timing Configuration register 1 */
#define CAN_DEBUG                      0xFFC02A88 /* Config register */
#define CAN_STATUS                     0xFFC02A8C /* Global Status Register */
#define CAN_CEC                        0xFFC02A90 /* Error Counter Register */
#define CAN_GIS                        0xFFC02A94 /* Global Interrupt Status Register */
#define CAN_GIM                        0xFFC02A98 /* Global Interrupt Mask Register */
#define CAN_GIF                        0xFFC02A9C /* Global Interrupt Flag Register */
#define CAN_CONTROL                    0xFFC02AA0 /* Master Control Register */
#define CAN_INTR                       0xFFC02AA4 /* Interrupt Pending Register */
#define CAN_VERSION                    0xFFC02AA8 /* Version Code Register */
#define CAN_MBTD                       0xFFC02AAC /* Mailbox Temporary Disable Feature */
#define CAN_EWR                        0xFFC02AB0 /* Programmable Warning Level */
#define CAN_ESR                        0xFFC02AB4 /* Error Status Register */
#define CAN_UCREG                      0xFFC02AC0 /* Universal Counter Register/Capture Register */
#define CAN_UCCNT                      0xFFC02AC4 /* Universal Counter */
#define CAN_UCRC                       0xFFC02AC8 /* Universal Counter Force Reload Register */
#define CAN_UCCNF                      0xFFC02ACC /* Universal Counter Configuration Register */
#define CAN_VERSION2                   0xFFC02AD4 /* Version Code Register 2 */
#define CAN_AM00L                      0xFFC02B00 /* Mailbox 0 Low Acceptance Mask */
#define CAN_AM00H                      0xFFC02B04 /* Mailbox 0 High Acceptance Mask */
#define CAN_AM01L                      0xFFC02B08 /* Mailbox 1 Low Acceptance Mask  */
#define CAN_AM01H                      0xFFC02B0C /* Mailbox 1 High Acceptance Mask */
#define CAN_AM02L                      0xFFC02B10 /* Mailbox 2 Low Acceptance Mask  */
#define CAN_AM02H                      0xFFC02B14 /* Mailbox 2 High Acceptance Mask */
#define CAN_AM03L                      0xFFC02B18 /* Mailbox 3 Low Acceptance Mask  */
#define CAN_AM03H                      0xFFC02B1C /* Mailbox 3 High Acceptance Mask */
#define CAN_AM04L                      0xFFC02B20 /* Mailbox 4 Low Acceptance Mask  */
#define CAN_AM04H                      0xFFC02B24 /* Mailbox 4 High Acceptance Mask */
#define CAN_AM05L                      0xFFC02B28 /* Mailbox 5 Low Acceptance Mask  */
#define CAN_AM05H                      0xFFC02B2C /* Mailbox 5 High Acceptance Mask */
#define CAN_AM06L                      0xFFC02B30 /* Mailbox 6 Low Acceptance Mask  */
#define CAN_AM06H                      0xFFC02B34 /* Mailbox 6 High Acceptance Mask */
#define CAN_AM07L                      0xFFC02B38 /* Mailbox 7 Low Acceptance Mask  */
#define CAN_AM07H                      0xFFC02B3C /* Mailbox 7 High Acceptance Mask */
#define CAN_AM08L                      0xFFC02B40 /* Mailbox 8 Low Acceptance Mask  */
#define CAN_AM08H                      0xFFC02B44 /* Mailbox 8 High Acceptance Mask */
#define CAN_AM09L                      0xFFC02B48 /* Mailbox 9 Low Acceptance Mask  */
#define CAN_AM09H                      0xFFC02B4C /* Mailbox 9 High Acceptance Mask */
#define CAN_AM10L                      0xFFC02B50 /* Mailbox 10 Low Acceptance Mask  */
#define CAN_AM10H                      0xFFC02B54 /* Mailbox 10 High Acceptance Mask */
#define CAN_AM11L                      0xFFC02B58 /* Mailbox 11 Low Acceptance Mask  */
#define CAN_AM11H                      0xFFC02B5C /* Mailbox 11 High Acceptance Mask */
#define CAN_AM12L                      0xFFC02B60 /* Mailbox 12 Low Acceptance Mask  */
#define CAN_AM12H                      0xFFC02B64 /* Mailbox 12 High Acceptance Mask */
#define CAN_AM13L                      0xFFC02B68 /* Mailbox 13 Low Acceptance Mask  */
#define CAN_AM13H                      0xFFC02B6C /* Mailbox 13 High Acceptance Mask */
#define CAN_AM14L                      0xFFC02B70 /* Mailbox 14 Low Acceptance Mask  */
#define CAN_AM14H                      0xFFC02B74 /* Mailbox 14 High Acceptance Mask */
#define CAN_AM15L                      0xFFC02B78 /* Mailbox 15 Low Acceptance Mask  */
#define CAN_AM15H                      0xFFC02B7C /* Mailbox 15 High Acceptance Mask */
#define CAN_AM16L                      0xFFC02B80 /* Mailbox 16 Low Acceptance Mask  */
#define CAN_AM16H                      0xFFC02B84 /* Mailbox 16 High Acceptance Mask */
#define CAN_AM17L                      0xFFC02B88 /* Mailbox 17 Low Acceptance Mask  */
#define CAN_AM17H                      0xFFC02B8C /* Mailbox 17 High Acceptance Mask */
#define CAN_AM18L                      0xFFC02B90 /* Mailbox 18 Low Acceptance Mask  */
#define CAN_AM18H                      0xFFC02B94 /* Mailbox 18 High Acceptance Mask */
#define CAN_AM19L                      0xFFC02B98 /* Mailbox 19 Low Acceptance Mask  */
#define CAN_AM19H                      0xFFC02B9C /* Mailbox 19 High Acceptance Mask */
#define CAN_AM20L                      0xFFC02BA0 /* Mailbox 20 Low Acceptance Mask  */
#define CAN_AM20H                      0xFFC02BA4 /* Mailbox 20 High Acceptance Mask */
#define CAN_AM21L                      0xFFC02BA8 /* Mailbox 21 Low Acceptance Mask  */
#define CAN_AM21H                      0xFFC02BAC /* Mailbox 21 High Acceptance Mask */
#define CAN_AM22L                      0xFFC02BB0 /* Mailbox 22 Low Acceptance Mask  */
#define CAN_AM22H                      0xFFC02BB4 /* Mailbox 22 High Acceptance Mask */
#define CAN_AM23L                      0xFFC02BB8 /* Mailbox 23 Low Acceptance Mask  */
#define CAN_AM23H                      0xFFC02BBC /* Mailbox 23 High Acceptance Mask */
#define CAN_AM24L                      0xFFC02BC0 /* Mailbox 24 Low Acceptance Mask  */
#define CAN_AM24H                      0xFFC02BC4 /* Mailbox 24 High Acceptance Mask */
#define CAN_AM25L                      0xFFC02BC8 /* Mailbox 25 Low Acceptance Mask  */
#define CAN_AM25H                      0xFFC02BCC /* Mailbox 25 High Acceptance Mask */
#define CAN_AM26L                      0xFFC02BD0 /* Mailbox 26 Low Acceptance Mask  */
#define CAN_AM26H                      0xFFC02BD4 /* Mailbox 26 High Acceptance Mask */
#define CAN_AM27L                      0xFFC02BD8 /* Mailbox 27 Low Acceptance Mask  */
#define CAN_AM27H                      0xFFC02BDC /* Mailbox 27 High Acceptance Mask */
#define CAN_AM28L                      0xFFC02BE0 /* Mailbox 28 Low Acceptance Mask  */
#define CAN_AM28H                      0xFFC02BE4 /* Mailbox 28 High Acceptance Mask */
#define CAN_AM29L                      0xFFC02BE8 /* Mailbox 29 Low Acceptance Mask  */
#define CAN_AM29H                      0xFFC02BEC /* Mailbox 29 High Acceptance Mask */
#define CAN_AM30L                      0xFFC02BF0 /* Mailbox 30 Low Acceptance Mask  */
#define CAN_AM30H                      0xFFC02BF4 /* Mailbox 30 High Acceptance Mask */
#define CAN_AM31L                      0xFFC02BF8 /* Mailbox 31 Low Acceptance Mask  */
#define CAN_AM31H                      0xFFC02BFC /* Mailbox 31 High Acceptance Mask */
#define CAN_MB00_DATA0                 0xFFC02C00 /* Mailbox 0 Data Word 0 [15:0] Register */
#define CAN_MB00_DATA1                 0xFFC02C04 /* Mailbox 0 Data Word 1 [31:16] Register */
#define CAN_MB00_DATA2                 0xFFC02C08 /* Mailbox 0 Data Word 2 [47:32] Register */
#define CAN_MB00_DATA3                 0xFFC02C0C /* Mailbox 0 Data Word 3 [63:48] Register */
#define CAN_MB00_LENGTH                0xFFC02C10 /* Mailbox 0 Data Length Code Register */
#define CAN_MB00_TIMESTAMP             0xFFC02C14 /* Mailbox 0 Time Stamp Value Register */
#define CAN_MB00_ID0                   0xFFC02C18 /* Mailbox 0 Identifier Low Register */
#define CAN_MB00_ID1                   0xFFC02C1C /* Mailbox 0 Identifier High Register */
#define CAN_MB01_DATA0                 0xFFC02C20 /* Mailbox 1 Data Word 0 [15:0] Register  */
#define CAN_MB01_DATA1                 0xFFC02C24 /* Mailbox 1 Data Word 1 [31:16] Register */
#define CAN_MB01_DATA2                 0xFFC02C28 /* Mailbox 1 Data Word 2 [47:32] Register */
#define CAN_MB01_DATA3                 0xFFC02C2C /* Mailbox 1 Data Word 3 [63:48] Register */
#define CAN_MB01_LENGTH                0xFFC02C30 /* Mailbox 1 Data Length Code Register */
#define CAN_MB01_TIMESTAMP             0xFFC02C34 /* Mailbox 1 Time Stamp Value Register */
#define CAN_MB01_ID0                   0xFFC02C38 /* Mailbox 1 Identifier Low Register */
#define CAN_MB01_ID1                   0xFFC02C3C /* Mailbox 1 Identifier High Register */
#define CAN_MB02_DATA0                 0xFFC02C40 /* Mailbox 2 Data Word 0 [15:0] Register  */
#define CAN_MB02_DATA1                 0xFFC02C44 /* Mailbox 2 Data Word 1 [31:16] Register */
#define CAN_MB02_DATA2                 0xFFC02C48 /* Mailbox 2 Data Word 2 [47:32] Register */
#define CAN_MB02_DATA3                 0xFFC02C4C /* Mailbox 2 Data Word 3 [63:48] Register */
#define CAN_MB02_LENGTH                0xFFC02C50 /* Mailbox 2 Data Length Code Register    */
#define CAN_MB02_TIMESTAMP             0xFFC02C54 /* Mailbox 2 Time Stamp Value Register */
#define CAN_MB02_ID0                   0xFFC02C58 /* Mailbox 2 Identifier Low Register */
#define CAN_MB02_ID1                   0xFFC02C5C /* Mailbox 2 Identifier High Register */
#define CAN_MB03_DATA0                 0xFFC02C60 /* Mailbox 3 Data Word 0 [15:0] Register  */
#define CAN_MB03_DATA1                 0xFFC02C64 /* Mailbox 3 Data Word 1 [31:16] Register */
#define CAN_MB03_DATA2                 0xFFC02C68 /* Mailbox 3 Data Word 2 [47:32] Register */
#define CAN_MB03_DATA3                 0xFFC02C6C /* Mailbox 3 Data Word 3 [63:48] Register */
#define CAN_MB03_LENGTH                0xFFC02C70 /* Mailbox 3 Data Length Code Register */
#define CAN_MB03_TIMESTAMP             0xFFC02C74 /* Mailbox 3 Time Stamp Value Register */
#define CAN_MB03_ID0                   0xFFC02C78 /* Mailbox 3 Identifier Low Register */
#define CAN_MB03_ID1                   0xFFC02C7C /* Mailbox 3 Identifier High Register */
#define CAN_MB04_DATA0                 0xFFC02C80 /* Mailbox 4 Data Word 0 [15:0] Register */
#define CAN_MB04_DATA1                 0xFFC02C84 /* Mailbox 4 Data Word 1 [31:16] Register */
#define CAN_MB04_DATA2                 0xFFC02C88 /* Mailbox 4 Data Word 2 [47:32] Register */
#define CAN_MB04_DATA3                 0xFFC02C8C /* Mailbox 4 Data Word 3 [63:48] Register */
#define CAN_MB04_LENGTH                0xFFC02C90 /* Mailbox 4 Data Length Code Register */
#define CAN_MB04_TIMESTAMP             0xFFC02C94 /* Mailbox 4 Time Stamp Value Register */
#define CAN_MB04_ID0                   0xFFC02C98 /* Mailbox 4 Identifier Low Register */
#define CAN_MB04_ID1                   0xFFC02C9C /* Mailbox 4 Identifier High Register */
#define CAN_MB05_DATA0                 0xFFC02CA0 /* Mailbox 5 Data Word 0 [15:0] Register  */
#define CAN_MB05_DATA1                 0xFFC02CA4 /* Mailbox 5 Data Word 1 [31:16] Register */
#define CAN_MB05_DATA2                 0xFFC02CA8 /* Mailbox 5 Data Word 2 [47:32] Register */
#define CAN_MB05_DATA3                 0xFFC02CAC /* Mailbox 5 Data Word 3 [63:48] Register */
#define CAN_MB05_LENGTH                0xFFC02CB0 /* Mailbox 5 Data Length Code Register */
#define CAN_MB05_TIMESTAMP             0xFFC02CB4 /* Mailbox 5 Time Stamp Value Register */
#define CAN_MB05_ID0                   0xFFC02CB8 /* Mailbox 5 Identifier Low Register */
#define CAN_MB05_ID1                   0xFFC02CBC /* Mailbox 5 Identifier High Register */
#define CAN_MB06_DATA0                 0xFFC02CC0 /* Mailbox 6 Data Word 0 [15:0] Register  */
#define CAN_MB06_DATA1                 0xFFC02CC4 /* Mailbox 6 Data Word 1 [31:16] Register */
#define CAN_MB06_DATA2                 0xFFC02CC8 /* Mailbox 6 Data Word 2 [47:32] Register */
#define CAN_MB06_DATA3                 0xFFC02CCC /* Mailbox 6 Data Word 3 [63:48] Register */
#define CAN_MB06_LENGTH                0xFFC02CD0 /* Mailbox 6 Data Length Code Register */
#define CAN_MB06_TIMESTAMP             0xFFC02CD4 /* Mailbox 6 Time Stamp Value Register */
#define CAN_MB06_ID0                   0xFFC02CD8 /* Mailbox 6 Identifier Low Register */
#define CAN_MB06_ID1                   0xFFC02CDC /* Mailbox 6 Identifier High Register */
#define CAN_MB07_DATA0                 0xFFC02CE0 /* Mailbox 7 Data Word 0 [15:0] Register */
#define CAN_MB07_DATA1                 0xFFC02CE4 /* Mailbox 7 Data Word 1 [31:16] Register */
#define CAN_MB07_DATA2                 0xFFC02CE8 /* Mailbox 7 Data Word 2 [47:32] Register */
#define CAN_MB07_DATA3                 0xFFC02CEC /* Mailbox 7 Data Word 3 [63:48] Register */
#define CAN_MB07_LENGTH                0xFFC02CF0 /* Mailbox 7 Data Length Code Register */
#define CAN_MB07_TIMESTAMP             0xFFC02CF4 /* Mailbox 7 Time Stamp Value Register */
#define CAN_MB07_ID0                   0xFFC02CF8 /* Mailbox 7 Identifier Low Register */
#define CAN_MB07_ID1                   0xFFC02CFC /* Mailbox 7 Identifier High Register */
#define CAN_MB08_DATA0                 0xFFC02D00 /* Mailbox 8 Data Word 0 [15:0] Register */
#define CAN_MB08_DATA1                 0xFFC02D04 /* Mailbox 8 Data Word 1 [31:16] Register */
#define CAN_MB08_DATA2                 0xFFC02D08 /* Mailbox 8 Data Word 2 [47:32] Register */
#define CAN_MB08_DATA3                 0xFFC02D0C /* Mailbox 8 Data Word 3 [63:48] Register */
#define CAN_MB08_LENGTH                0xFFC02D10 /* Mailbox 8 Data Length Code Register */
#define CAN_MB08_TIMESTAMP             0xFFC02D14 /* Mailbox 8 Time Stamp Value Register */
#define CAN_MB08_ID0                   0xFFC02D18 /* Mailbox 8 Identifier Low Register */
#define CAN_MB08_ID1                   0xFFC02D1C /* Mailbox 8 Identifier High Register */
#define CAN_MB09_DATA0                 0xFFC02D20 /* Mailbox 9 Data Word 0 [15:0] Register */
#define CAN_MB09_DATA1                 0xFFC02D24 /* Mailbox 9 Data Word 1 [31:16] Register */
#define CAN_MB09_DATA2                 0xFFC02D28 /* Mailbox 9 Data Word 2 [47:32] Register */
#define CAN_MB09_DATA3                 0xFFC02D2C /* Mailbox 9 Data Word 3 [63:48] Register */
#define CAN_MB09_LENGTH                0xFFC02D30 /* Mailbox 9 Data Length Code Register */
#define CAN_MB09_TIMESTAMP             0xFFC02D34 /* Mailbox 9 Time Stamp Value Register */
#define CAN_MB09_ID0                   0xFFC02D38 /* Mailbox 9 Identifier Low Register */
#define CAN_MB09_ID1                   0xFFC02D3C /* Mailbox 9 Identifier High Register */
#define CAN_MB10_DATA0                 0xFFC02D40 /* Mailbox 10 Data Word 0 [15:0] Register */
#define CAN_MB10_DATA1                 0xFFC02D44 /* Mailbox 10 Data Word 1 [31:16] Register */
#define CAN_MB10_DATA2                 0xFFC02D48 /* Mailbox 10 Data Word 2 [47:32] Register */
#define CAN_MB10_DATA3                 0xFFC02D4C /* Mailbox 10 Data Word 3 [63:48] Register */
#define CAN_MB10_LENGTH                0xFFC02D50 /* Mailbox 10 Data Length Code Register */
#define CAN_MB10_TIMESTAMP             0xFFC02D54 /* Mailbox 10 Time Stamp Value Register */
#define CAN_MB10_ID0                   0xFFC02D58 /* Mailbox 10 Identifier Low Register */
#define CAN_MB10_ID1                   0xFFC02D5C /* Mailbox 10 Identifier High Register */
#define CAN_MB11_DATA0                 0xFFC02D60 /* Mailbox 11 Data Word 0 [15:0] Register */
#define CAN_MB11_DATA1                 0xFFC02D64 /* Mailbox 11 Data Word 1 [31:16] Register */
#define CAN_MB11_DATA2                 0xFFC02D68 /* Mailbox 11 Data Word 2 [47:32] Register */
#define CAN_MB11_DATA3                 0xFFC02D6C /* Mailbox 11 Data Word 3 [63:48] Register */
#define CAN_MB11_LENGTH                0xFFC02D70 /* Mailbox 11 Data Length Code Register */
#define CAN_MB11_TIMESTAMP             0xFFC02D74 /* Mailbox 11 Time Stamp Value Register */
#define CAN_MB11_ID0                   0xFFC02D78 /* Mailbox 11 Identifier Low Register */
#define CAN_MB11_ID1                   0xFFC02D7C /* Mailbox 11 Identifier High Register */
#define CAN_MB12_DATA0                 0xFFC02D80 /* Mailbox 12 Data Word 0 [15:0] Register */
#define CAN_MB12_DATA1                 0xFFC02D84 /* Mailbox 12 Data Word 1 [31:16] Register */
#define CAN_MB12_DATA2                 0xFFC02D88 /* Mailbox 12 Data Word 2 [47:32] Register */
#define CAN_MB12_DATA3                 0xFFC02D8C /* Mailbox 12 Data Word 3 [63:48] Register */
#define CAN_MB12_LENGTH                0xFFC02D90 /* Mailbox 12 Data Length Code Register */
#define CAN_MB12_TIMESTAMP             0xFFC02D94 /* Mailbox 12 Time Stamp Value Register */
#define CAN_MB12_ID0                   0xFFC02D98 /* Mailbox 12 Identifier Low Register */
#define CAN_MB12_ID1                   0xFFC02D9C /* Mailbox 12 Identifier High Register */
#define CAN_MB13_DATA0                 0xFFC02DA0 /* Mailbox 13 Data Word 0 [15:0] Register */
#define CAN_MB13_DATA1                 0xFFC02DA4 /* Mailbox 13 Data Word 1 [31:16] Register */
#define CAN_MB13_DATA2                 0xFFC02DA8 /* Mailbox 13 Data Word 2 [47:32] Register */
#define CAN_MB13_DATA3                 0xFFC02DAC /* Mailbox 13 Data Word 3 [63:48] Register */
#define CAN_MB13_LENGTH                0xFFC02DB0 /* Mailbox 13 Data Length Code Register */
#define CAN_MB13_TIMESTAMP             0xFFC02DB4 /* Mailbox 13 Time Stamp Value Register */
#define CAN_MB13_ID0                   0xFFC02DB8 /* Mailbox 13 Identifier Low Register */
#define CAN_MB13_ID1                   0xFFC02DBC /* Mailbox 13 Identifier High Register */
#define CAN_MB14_DATA0                 0xFFC02DC0 /* Mailbox 14 Data Word 0 [15:0] Register */
#define CAN_MB14_DATA1                 0xFFC02DC4 /* Mailbox 14 Data Word 1 [31:16] Register */
#define CAN_MB14_DATA2                 0xFFC02DC8 /* Mailbox 14 Data Word 2 [47:32] Register */
#define CAN_MB14_DATA3                 0xFFC02DCC /* Mailbox 14 Data Word 3 [63:48] Register */
#define CAN_MB14_LENGTH                0xFFC02DD0 /* Mailbox 14 Data Length Code Register */
#define CAN_MB14_TIMESTAMP             0xFFC02DD4 /* Mailbox 14 Time Stamp Value Register */
#define CAN_MB14_ID0                   0xFFC02DD8 /* Mailbox 14 Identifier Low Register */
#define CAN_MB14_ID1                   0xFFC02DDC /* Mailbox 14 Identifier High Register */
#define CAN_MB15_DATA0                 0xFFC02DE0 /* Mailbox 15 Data Word 0 [15:0] Register */
#define CAN_MB15_DATA1                 0xFFC02DE4 /* Mailbox 15 Data Word 1 [31:16] Register */
#define CAN_MB15_DATA2                 0xFFC02DE8 /* Mailbox 15 Data Word 2 [47:32] Register */
#define CAN_MB15_DATA3                 0xFFC02DEC /* Mailbox 15 Data Word 3 [63:48] Register */
#define CAN_MB15_LENGTH                0xFFC02DF0 /* Mailbox 15 Data Length Code Register */
#define CAN_MB15_TIMESTAMP             0xFFC02DF4 /* Mailbox 15 Time Stamp Value Register */
#define CAN_MB15_ID0                   0xFFC02DF8 /* Mailbox 15 Identifier Low Register */
#define CAN_MB15_ID1                   0xFFC02DFC /* Mailbox 15 Identifier High Register */
#define CAN_MB16_DATA0                 0xFFC02E00 /* Mailbox 16 Data Word 0 [15:0] Register */
#define CAN_MB16_DATA1                 0xFFC02E04 /* Mailbox 16 Data Word 1 [31:16] Register */
#define CAN_MB16_DATA2                 0xFFC02E08 /* Mailbox 16 Data Word 2 [47:32] Register */
#define CAN_MB16_DATA3                 0xFFC02E0C /* Mailbox 16 Data Word 3 [63:48] Register */
#define CAN_MB16_LENGTH                0xFFC02E10 /* Mailbox 16 Data Length Code Register */
#define CAN_MB16_TIMESTAMP             0xFFC02E14 /* Mailbox 16 Time Stamp Value Register */
#define CAN_MB16_ID0                   0xFFC02E18 /* Mailbox 16 Identifier Low Register */
#define CAN_MB16_ID1                   0xFFC02E1C /* Mailbox 16 Identifier High Register */
#define CAN_MB17_DATA0                 0xFFC02E20 /* Mailbox 17 Data Word 0 [15:0] Register */
#define CAN_MB17_DATA1                 0xFFC02E24 /* Mailbox 17 Data Word 1 [31:16] Register */
#define CAN_MB17_DATA2                 0xFFC02E28 /* Mailbox 17 Data Word 2 [47:32] Register */
#define CAN_MB17_DATA3                 0xFFC02E2C /* Mailbox 17 Data Word 3 [63:48] Register */
#define CAN_MB17_LENGTH                0xFFC02E30 /* Mailbox 17 Data Length Code Register */
#define CAN_MB17_TIMESTAMP             0xFFC02E34 /* Mailbox 17 Time Stamp Value Register */
#define CAN_MB17_ID0                   0xFFC02E38 /* Mailbox 17 Identifier Low Register */
#define CAN_MB17_ID1                   0xFFC02E3C /* Mailbox 17 Identifier High Register */
#define CAN_MB18_DATA0                 0xFFC02E40 /* Mailbox 18 Data Word 0 [15:0] Register */
#define CAN_MB18_DATA1                 0xFFC02E44 /* Mailbox 18 Data Word 1 [31:16] Register */
#define CAN_MB18_DATA2                 0xFFC02E48 /* Mailbox 18 Data Word 2 [47:32] Register */
#define CAN_MB18_DATA3                 0xFFC02E4C /* Mailbox 18 Data Word 3 [63:48] Register */
#define CAN_MB18_LENGTH                0xFFC02E50 /* Mailbox 18 Data Length Code Register */
#define CAN_MB18_TIMESTAMP             0xFFC02E54 /* Mailbox 18 Time Stamp Value Register */
#define CAN_MB18_ID0                   0xFFC02E58 /* Mailbox 18 Identifier Low Register */
#define CAN_MB18_ID1                   0xFFC02E5C /* Mailbox 18 Identifier High Register */
#define CAN_MB19_DATA0                 0xFFC02E60 /* Mailbox 19 Data Word 0 [15:0] Register */
#define CAN_MB19_DATA1                 0xFFC02E64 /* Mailbox 19 Data Word 1 [31:16] Register */
#define CAN_MB19_DATA2                 0xFFC02E68 /* Mailbox 19 Data Word 2 [47:32] Register */
#define CAN_MB19_DATA3                 0xFFC02E6C /* Mailbox 19 Data Word 3 [63:48] Register */
#define CAN_MB19_LENGTH                0xFFC02E70 /* Mailbox 19 Data Length Code Register */
#define CAN_MB19_TIMESTAMP             0xFFC02E74 /* Mailbox 19 Time Stamp Value Register */
#define CAN_MB19_ID0                   0xFFC02E78 /* Mailbox 19 Identifier Low Register */
#define CAN_MB19_ID1                   0xFFC02E7C /* Mailbox 19 Identifier High Register */
#define CAN_MB20_DATA0                 0xFFC02E80 /* Mailbox 20 Data Word 0 [15:0] Register */
#define CAN_MB20_DATA1                 0xFFC02E84 /* Mailbox 20 Data Word 1 [31:16] Register */
#define CAN_MB20_DATA2                 0xFFC02E88 /* Mailbox 20 Data Word 2 [47:32] Register */
#define CAN_MB20_DATA3                 0xFFC02E8C /* Mailbox 20 Data Word 3 [63:48] Register */
#define CAN_MB20_LENGTH                0xFFC02E90 /* Mailbox 20 Data Length Code Register */
#define CAN_MB20_TIMESTAMP             0xFFC02E94 /* Mailbox 20 Time Stamp Value Register */
#define CAN_MB20_ID0                   0xFFC02E98 /* Mailbox 20 Identifier Low Register */
#define CAN_MB20_ID1                   0xFFC02E9C /* Mailbox 20 Identifier High Register */
#define CAN_MB21_DATA0                 0xFFC02EA0 /* Mailbox 21 Data Word 0 [15:0] Register */
#define CAN_MB21_DATA1                 0xFFC02EA4 /* Mailbox 21 Data Word 1 [31:16] Register */
#define CAN_MB21_DATA2                 0xFFC02EA8 /* Mailbox 21 Data Word 2 [47:32] Register */
#define CAN_MB21_DATA3                 0xFFC02EAC /* Mailbox 21 Data Word 3 [63:48] Register */
#define CAN_MB21_LENGTH                0xFFC02EB0 /* Mailbox 21 Data Length Code Register */
#define CAN_MB21_TIMESTAMP             0xFFC02EB4 /* Mailbox 21 Time Stamp Value Register */
#define CAN_MB21_ID0                   0xFFC02EB8 /* Mailbox 21 Identifier Low Register */
#define CAN_MB21_ID1                   0xFFC02EBC /* Mailbox 21 Identifier High Register */
#define CAN_MB22_DATA0                 0xFFC02EC0 /* Mailbox 22 Data Word 0 [15:0] Register */
#define CAN_MB22_DATA1                 0xFFC02EC4 /* Mailbox 22 Data Word 1 [31:16] Register */
#define CAN_MB22_DATA2                 0xFFC02EC8 /* Mailbox 22 Data Word 2 [47:32] Register */
#define CAN_MB22_DATA3                 0xFFC02ECC /* Mailbox 22 Data Word 3 [63:48] Register */
#define CAN_MB22_LENGTH                0xFFC02ED0 /* Mailbox 22 Data Length Code Register */
#define CAN_MB22_TIMESTAMP             0xFFC02ED4 /* Mailbox 22 Time Stamp Value Register */
#define CAN_MB22_ID0                   0xFFC02ED8 /* Mailbox 22 Identifier Low Register */
#define CAN_MB22_ID1                   0xFFC02EDC /* Mailbox 22 Identifier High Register */
#define CAN_MB23_DATA0                 0xFFC02EE0 /* Mailbox 23 Data Word 0 [15:0] Register */
#define CAN_MB23_DATA1                 0xFFC02EE4 /* Mailbox 23 Data Word 1 [31:16] Register */
#define CAN_MB23_DATA2                 0xFFC02EE8 /* Mailbox 23 Data Word 2 [47:32] Register */
#define CAN_MB23_DATA3                 0xFFC02EEC /* Mailbox 23 Data Word 3 [63:48] Register */
#define CAN_MB23_LENGTH                0xFFC02EF0 /* Mailbox 23 Data Length Code Register */
#define CAN_MB23_TIMESTAMP             0xFFC02EF4 /* Mailbox 23 Time Stamp Value Register */
#define CAN_MB23_ID0                   0xFFC02EF8 /* Mailbox 23 Identifier Low Register */
#define CAN_MB23_ID1                   0xFFC02EFC /* Mailbox 23 Identifier High Register */
#define CAN_MB24_DATA0                 0xFFC02F00 /* Mailbox 24 Data Word 0 [15:0] Register */
#define CAN_MB24_DATA1                 0xFFC02F04 /* Mailbox 24 Data Word 1 [31:16] Register */
#define CAN_MB24_DATA2                 0xFFC02F08 /* Mailbox 24 Data Word 2 [47:32] Register */
#define CAN_MB24_DATA3                 0xFFC02F0C /* Mailbox 24 Data Word 3 [63:48] Register */
#define CAN_MB24_LENGTH                0xFFC02F10 /* Mailbox 24 Data Length Code Register */
#define CAN_MB24_TIMESTAMP             0xFFC02F14 /* Mailbox 24 Time Stamp Value Register */
#define CAN_MB24_ID0                   0xFFC02F18 /* Mailbox 24 Identifier Low Register */
#define CAN_MB24_ID1                   0xFFC02F1C /* Mailbox 24 Identifier High Register */
#define CAN_MB25_DATA0                 0xFFC02F20 /* Mailbox 25 Data Word 0 [15:0] Register */
#define CAN_MB25_DATA1                 0xFFC02F24 /* Mailbox 25 Data Word 1 [31:16] Register */
#define CAN_MB25_DATA2                 0xFFC02F28 /* Mailbox 25 Data Word 2 [47:32] Register */
#define CAN_MB25_DATA3                 0xFFC02F2C /* Mailbox 25 Data Word 3 [63:48] Register */
#define CAN_MB25_LENGTH                0xFFC02F30 /* Mailbox 25 Data Length Code Register */
#define CAN_MB25_TIMESTAMP             0xFFC02F34 /* Mailbox 25 Time Stamp Value Register */
#define CAN_MB25_ID0                   0xFFC02F38 /* Mailbox 25 Identifier Low Register */
#define CAN_MB25_ID1                   0xFFC02F3C /* Mailbox 25 Identifier High Register */
#define CAN_MB26_DATA0                 0xFFC02F40 /* Mailbox 26 Data Word 0 [15:0] Register */
#define CAN_MB26_DATA1                 0xFFC02F44 /* Mailbox 26 Data Word 1 [31:16] Register */
#define CAN_MB26_DATA2                 0xFFC02F48 /* Mailbox 26 Data Word 2 [47:32] Register */
#define CAN_MB26_DATA3                 0xFFC02F4C /* Mailbox 26 Data Word 3 [63:48] Register */
#define CAN_MB26_LENGTH                0xFFC02F50 /* Mailbox 26 Data Length Code Register */
#define CAN_MB26_TIMESTAMP             0xFFC02F54 /* Mailbox 26 Time Stamp Value Register */
#define CAN_MB26_ID0                   0xFFC02F58 /* Mailbox 26 Identifier Low Register */
#define CAN_MB26_ID1                   0xFFC02F5C /* Mailbox 26 Identifier High Register */
#define CAN_MB27_DATA0                 0xFFC02F60 /* Mailbox 27 Data Word 0 [15:0] Register */
#define CAN_MB27_DATA1                 0xFFC02F64 /* Mailbox 27 Data Word 1 [31:16] Register */
#define CAN_MB27_DATA2                 0xFFC02F68 /* Mailbox 27 Data Word 2 [47:32] Register */
#define CAN_MB27_DATA3                 0xFFC02F6C /* Mailbox 27 Data Word 3 [63:48] Register */
#define CAN_MB27_LENGTH                0xFFC02F70 /* Mailbox 27 Data Length Code Register */
#define CAN_MB27_TIMESTAMP             0xFFC02F74 /* Mailbox 27 Time Stamp Value Register */
#define CAN_MB27_ID0                   0xFFC02F78 /* Mailbox 27 Identifier Low Register */
#define CAN_MB27_ID1                   0xFFC02F7C /* Mailbox 27 Identifier High Register */
#define CAN_MB28_DATA0                 0xFFC02F80 /* Mailbox 28 Data Word 0 [15:0] Register */
#define CAN_MB28_DATA1                 0xFFC02F84 /* Mailbox 28 Data Word 1 [31:16] Register */
#define CAN_MB28_DATA2                 0xFFC02F88 /* Mailbox 28 Data Word 2 [47:32] Register */
#define CAN_MB28_DATA3                 0xFFC02F8C /* Mailbox 28 Data Word 3 [63:48] Register */
#define CAN_MB28_LENGTH                0xFFC02F90 /* Mailbox 28 Data Length Code Register */
#define CAN_MB28_TIMESTAMP             0xFFC02F94 /* Mailbox 28 Time Stamp Value Register */
#define CAN_MB28_ID0                   0xFFC02F98 /* Mailbox 28 Identifier Low Register */
#define CAN_MB28_ID1                   0xFFC02F9C /* Mailbox 28 Identifier High Register */
#define CAN_MB29_DATA0                 0xFFC02FA0 /* Mailbox 29 Data Word 0 [15:0] Register */
#define CAN_MB29_DATA1                 0xFFC02FA4 /* Mailbox 29 Data Word 1 [31:16] Register */
#define CAN_MB29_DATA2                 0xFFC02FA8 /* Mailbox 29 Data Word 2 [47:32] Register */
#define CAN_MB29_DATA3                 0xFFC02FAC /* Mailbox 29 Data Word 3 [63:48] Register */
#define CAN_MB29_LENGTH                0xFFC02FB0 /* Mailbox 29 Data Length Code Register */
#define CAN_MB29_TIMESTAMP             0xFFC02FB4 /* Mailbox 29 Time Stamp Value Register */
#define CAN_MB29_ID0                   0xFFC02FB8 /* Mailbox 29 Identifier Low Register */
#define CAN_MB29_ID1                   0xFFC02FBC /* Mailbox 29 Identifier High Register */
#define CAN_MB30_DATA0                 0xFFC02FC0 /* Mailbox 30 Data Word 0 [15:0] Register */
#define CAN_MB30_DATA1                 0xFFC02FC4 /* Mailbox 30 Data Word 1 [31:16] Register */
#define CAN_MB30_DATA2                 0xFFC02FC8 /* Mailbox 30 Data Word 2 [47:32] Register */
#define CAN_MB30_DATA3                 0xFFC02FCC /* Mailbox 30 Data Word 3 [63:48] Register */
#define CAN_MB30_LENGTH                0xFFC02FD0 /* Mailbox 30 Data Length Code Register */
#define CAN_MB30_TIMESTAMP             0xFFC02FD4 /* Mailbox 30 Time Stamp Value Register */
#define CAN_MB30_ID0                   0xFFC02FD8 /* Mailbox 30 Identifier Low Register */
#define CAN_MB30_ID1                   0xFFC02FDC /* Mailbox 30 Identifier High Register */
#define CAN_MB31_DATA0                 0xFFC02FE0 /* Mailbox 31 Data Word 0 [15:0] Register */
#define CAN_MB31_DATA1                 0xFFC02FE4 /* Mailbox 31 Data Word 1 [31:16] Register */
#define CAN_MB31_DATA2                 0xFFC02FE8 /* Mailbox 31 Data Word 2 [47:32] Register */
#define CAN_MB31_DATA3                 0xFFC02FEC /* Mailbox 31 Data Word 3 [63:48] Register */
#define CAN_MB31_LENGTH                0xFFC02FF0 /* Mailbox 31 Data Length Code Register */
#define CAN_MB31_TIMESTAMP             0xFFC02FF4 /* Mailbox 31 Time Stamp Value Register */
#define CAN_MB31_ID0                   0xFFC02FF8 /* Mailbox 31 Identifier Low Register */
#define CAN_MB31_ID1                   0xFFC02FFC /* Mailbox 31 Identifier High Register */
#define PORTF_FER                      0xFFC03200 /* Port F Function Enable Register (Alternate/Flag*) */
#define PORTG_FER                      0xFFC03204 /* Port G Function Enable Register (Alternate/Flag*) */
#define PORTH_FER                      0xFFC03208 /* Port H Function Enable Register (Alternate/Flag*) */
#define PORT_MUX                       0xFFC0320C /* Port Multiplexer Control Register */
#define HMDMA0_CONTROL                 0xFFC03300 /* Handshake MDMA0 Control Register */
#define HMDMA0_ECINIT                  0xFFC03304 /* HMDMA0 Initial Edge Count Register */
#define HMDMA0_BCINIT                  0xFFC03308 /* HMDMA0 Initial Block Count Register */
#define HMDMA0_ECURGENT                0xFFC0330C /* HMDMA0 Urgent Edge Count Threshhold Register */
#define HMDMA0_ECOVERFLOW              0xFFC03310 /* HMDMA0 Edge Count Overflow Interrupt Register */
#define HMDMA0_ECOUNT                  0xFFC03314 /* HMDMA0 Current Edge Count Register */
#define HMDMA0_BCOUNT                  0xFFC03318 /* HMDMA0 Current Block Count Register */
#define HMDMA1_CONTROL                 0xFFC03340 /* Handshake MDMA1 Control Register */
#define HMDMA1_ECINIT                  0xFFC03344 /* HMDMA1 Initial Edge Count Register */
#define HMDMA1_BCINIT                  0xFFC03348 /* HMDMA1 Initial Block Count Register */
#define HMDMA1_ECURGENT                0xFFC0334C /* HMDMA1 Urgent Edge Count Threshhold Register */
#define HMDMA1_ECOVERFLOW              0xFFC03350 /* HMDMA1 Edge Count Overflow Interrupt Register */
#define HMDMA1_ECOUNT                  0xFFC03354 /* HMDMA1 Current Edge Count Register */
#define HMDMA1_BCOUNT                  0xFFC03358 /* HMDMA1 Current Block Count Register */
#define SRAM_BASE_ADDR                 0xFFE00000 /* SRAM Base Address (Read Only) */
#define DMEM_CONTROL                   0xFFE00004 /* Data memory control */
#define DCPLB_STATUS                   0xFFE00008 /* L1 Data Memory Controller Register */
#define DCPLB_FAULT_ADDR               0xFFE0000C
#define DCPLB_ADDR0                    0xFFE00100 /* Data Cache Protection Lookaside Buffer 0 */
#define DCPLB_ADDR1                    0xFFE00104 /* Data Cache Protection Lookaside Buffer 1 */
#define DCPLB_ADDR2                    0xFFE00108 /* Data Cache Protection Lookaside Buffer 2 */
#define DCPLB_ADDR3                    0xFFE0010C /* Data Cache Protection Lookaside Buffer 3 */
#define DCPLB_ADDR4                    0xFFE00110 /* Data Cache Protection Lookaside Buffer 4 */
#define DCPLB_ADDR5                    0xFFE00114 /* Data Cache Protection Lookaside Buffer 5 */
#define DCPLB_ADDR6                    0xFFE00118 /* Data Cache Protection Lookaside Buffer 6 */
#define DCPLB_ADDR7                    0xFFE0011C /* Data Cache Protection Lookaside Buffer 7 */
#define DCPLB_ADDR8                    0xFFE00120 /* Data Cache Protection Lookaside Buffer 8 */
#define DCPLB_ADDR9                    0xFFE00124 /* Data Cache Protection Lookaside Buffer 9 */
#define DCPLB_ADDR10                   0xFFE00128 /* Data Cache Protection Lookaside Buffer 10 */
#define DCPLB_ADDR11                   0xFFE0012C /* Data Cache Protection Lookaside Buffer 11 */
#define DCPLB_ADDR12                   0xFFE00130 /* Data Cache Protection Lookaside Buffer 12 */
#define DCPLB_ADDR13                   0xFFE00134 /* Data Cache Protection Lookaside Buffer 13 */
#define DCPLB_ADDR14                   0xFFE00138 /* Data Cache Protection Lookaside Buffer 14 */
#define DCPLB_ADDR15                   0xFFE0013C /* Data Cache Protection Lookaside Buffer 15 */
#define DCPLB_DATA0                    0xFFE00200 /* Data Cache 0 Status */
#define DCPLB_DATA1                    0xFFE00204 /* Data Cache 1 Status */
#define DCPLB_DATA2                    0xFFE00208 /* Data Cache 2 Status */
#define DCPLB_DATA3                    0xFFE0020C /* Data Cache 3 Status */
#define DCPLB_DATA4                    0xFFE00210 /* Data Cache 4 Status */
#define DCPLB_DATA5                    0xFFE00214 /* Data Cache 5 Status */
#define DCPLB_DATA6                    0xFFE00218 /* Data Cache 6 Status */
#define DCPLB_DATA7                    0xFFE0021C /* Data Cache 7 Status */
#define DCPLB_DATA8                    0xFFE00220 /* Data Cache 8 Status */
#define DCPLB_DATA9                    0xFFE00224 /* Data Cache 9 Status */
#define DCPLB_DATA10                   0xFFE00228 /* Data Cache 10 Status */
#define DCPLB_DATA11                   0xFFE0022C /* Data Cache 11 Status */
#define DCPLB_DATA12                   0xFFE00230 /* Data Cache 12 Status */
#define DCPLB_DATA13                   0xFFE00234 /* Data Cache 13 Status */
#define DCPLB_DATA14                   0xFFE00238 /* Data Cache 14 Status */
#define DCPLB_DATA15                   0xFFE0023C /* Data Cache 15 Status */
#define DTEST_COMMAND                  0xFFE00300 /* Data Test Command Register */
#define DTEST_DATA0                    0xFFE00400 /* Data Test Data Register */
#define DTEST_DATA1                    0xFFE00404 /* Data Test Data Register */
#define IMEM_CONTROL                   0xFFE01004 /* Instruction Memory Control */
#define ICPLB_STATUS                   0xFFE01008
#define ICPLB_FAULT_ADDR               0xFFE0100C
#define ICPLB_ADDR0                    0xFFE01100 /* Instruction Cacheability Protection Lookaside Buffer 0 */
#define ICPLB_ADDR1                    0xFFE01104 /* Instruction Cacheability Protection Lookaside Buffer 1 */
#define ICPLB_ADDR2                    0xFFE01108 /* Instruction Cacheability Protection Lookaside Buffer 2 */
#define ICPLB_ADDR3                    0xFFE0110C /* Instruction Cacheability Protection Lookaside Buffer 3 */
#define ICPLB_ADDR4                    0xFFE01110 /* Instruction Cacheability Protection Lookaside Buffer 4 */
#define ICPLB_ADDR5                    0xFFE01114 /* Instruction Cacheability Protection Lookaside Buffer 5 */
#define ICPLB_ADDR6                    0xFFE01118 /* Instruction Cacheability Protection Lookaside Buffer 6 */
#define ICPLB_ADDR7                    0xFFE0111C /* Instruction Cacheability Protection Lookaside Buffer 7 */
#define ICPLB_ADDR8                    0xFFE01120 /* Instruction Cacheability Protection Lookaside Buffer 8 */
#define ICPLB_ADDR9                    0xFFE01124 /* Instruction Cacheability Protection Lookaside Buffer 9 */
#define ICPLB_ADDR10                   0xFFE01128 /* Instruction Cacheability Protection Lookaside Buffer 10 */
#define ICPLB_ADDR11                   0xFFE0112C /* Instruction Cacheability Protection Lookaside Buffer 11 */
#define ICPLB_ADDR12                   0xFFE01130 /* Instruction Cacheability Protection Lookaside Buffer 12 */
#define ICPLB_ADDR13                   0xFFE01134 /* Instruction Cacheability Protection Lookaside Buffer 13 */
#define ICPLB_ADDR14                   0xFFE01138 /* Instruction Cacheability Protection Lookaside Buffer 14 */
#define ICPLB_ADDR15                   0xFFE0113C /* Instruction Cacheability Protection Lookaside Buffer 15 */
#define ICPLB_DATA0                    0xFFE01200 /* Instruction Cache 0 Status */
#define ICPLB_DATA1                    0xFFE01204 /* Instruction Cache 1 Status */
#define ICPLB_DATA2                    0xFFE01208 /* Instruction Cache 2 Status */
#define ICPLB_DATA3                    0xFFE0120C /* Instruction Cache 3 Status */
#define ICPLB_DATA4                    0xFFE01210 /* Instruction Cache 4 Status */
#define ICPLB_DATA5                    0xFFE01214 /* Instruction Cache 5 Status */
#define ICPLB_DATA6                    0xFFE01218 /* Instruction Cache 6 Status */
#define ICPLB_DATA7                    0xFFE0121C /* Instruction Cache 7 Status */
#define ICPLB_DATA8                    0xFFE01220 /* Instruction Cache 8 Status */
#define ICPLB_DATA9                    0xFFE01224 /* Instruction Cache 9 Status */
#define ICPLB_DATA10                   0xFFE01228 /* Instruction Cache 10 Status */
#define ICPLB_DATA11                   0xFFE0122C /* Instruction Cache 11 Status */
#define ICPLB_DATA12                   0xFFE01230 /* Instruction Cache 12 Status */
#define ICPLB_DATA13                   0xFFE01234 /* Instruction Cache 13 Status */
#define ICPLB_DATA14                   0xFFE01238 /* Instruction Cache 14 Status */
#define ICPLB_DATA15                   0xFFE0123C /* Instruction Cache 15 Status */
#define ITEST_COMMAND                  0xFFE01300 /* Instruction Test Command Register */
#define ITEST_DATA0                    0xFFE01400 /* Instruction Test Data Register */
#define ITEST_DATA1                    0xFFE01404 /* Instruction Test Data Register */
#define EVT0                           0xFFE02000 /* Event Vector 0 ESR Address */
#define EVT1                           0xFFE02004 /* Event Vector 1 ESR Address */
#define EVT2                           0xFFE02008 /* Event Vector 2 ESR Address */
#define EVT3                           0xFFE0200C /* Event Vector 3 ESR Address */
#define EVT4                           0xFFE02010 /* Event Vector 4 ESR Address */
#define EVT5                           0xFFE02014 /* Event Vector 5 ESR Address */
#define EVT6                           0xFFE02018 /* Event Vector 6 ESR Address */
#define EVT7                           0xFFE0201C /* Event Vector 7 ESR Address */
#define EVT8                           0xFFE02020 /* Event Vector 8 ESR Address */
#define EVT9                           0xFFE02024 /* Event Vector 9 ESR Address */
#define EVT10                          0xFFE02028 /* Event Vector 10 ESR Address */
#define EVT11                          0xFFE0202C /* Event Vector 11 ESR Address */
#define EVT12                          0xFFE02030 /* Event Vector 12 ESR Address */
#define EVT13                          0xFFE02034 /* Event Vector 13 ESR Address */
#define EVT14                          0xFFE02038 /* Event Vector 14 ESR Address */
#define EVT15                          0xFFE0203C /* Event Vector 15 ESR Address */
#define ILAT                           0xFFE0210C /* Interrupt Latch Register */
#define IMASK                          0xFFE02104 /* Interrupt Mask Register */
#define IPEND                          0xFFE02108 /* Interrupt Pending Register */
#define IPRIO                          0xFFE02110 /* Interrupt Priority Register */
#define TCNTL                          0xFFE03000 /* Core Timer Control Register */
#define TPERIOD                        0xFFE03004 /* Core Timer Period Register */
#define TSCALE                         0xFFE03008 /* Core Timer Scale Register */
#define TCOUNT                         0xFFE0300C /* Core Timer Count Register */
#define CHIPID                         0xFFC00014
#define TBUFCTL                        0xFFE06000 /* Trace Buffer Control Register */
#define TBUFSTAT                       0xFFE06004 /* Trace Buffer Status Register */
#define TBUF                           0xFFE06100 /* Trace Buffer */
#define PFCTL                          0xFFE08000
#define PFCNTR0                        0xFFE08100
#define PFCNTR1                        0xFFE08104
#define DMA_TC_CNT                     0xFFC00B0C
#define DMA_TC_PER                     0xFFC00B10

#endif /* __BFIN_DEF_ADSP_EDN_BF534_extended__ */