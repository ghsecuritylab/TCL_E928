

#ifndef __BFIN_DEF_ADSP_EDN_extended__
#define __BFIN_DEF_ADSP_EDN_extended__

#define ILAT                           0xFFE0210C /* Interrupt Latch Register */
#define IMASK                          0xFFE02104 /* Interrupt Mask Register */
#define IPEND                          0xFFE02108 /* Interrupt Pending Register */
#define IPRIO                          0xFFE02110 /* Interrupt Priority Register */
#define TCNTL                          0xFFE03000 /* Core Timer Control Register */
#define TPERIOD                        0xFFE03004 /* Core Timer Period Register */
#define TSCALE                         0xFFE03008 /* Core Timer Scale Register */
#define TCOUNT                         0xFFE0300C /* Core Timer Count Register */
#define SRAM_BASE_ADDR                 0xFFE00000 /* SRAM Base Address (Read Only) */
#define DMEM_CONTROL                   0xFFE00004 /* Data memory control */
#define DCPLB_FAULT_STATUS             0xFFE00008 /* L1 Data Memory Controller Register */
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
#define IMEM_CONTROL                   0xFFE01004 /* Instruction Memory Control */
#define ICPLB_FAULT_STATUS             0xFFE01008
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
#define MDMAFLX0_DMACNFG_D             0xFFC00E08
#define MDMAFLX0_XCOUNT_D              0xFFC00E10
#define MDMAFLX0_XMODIFY_D             0xFFC00E14
#define MDMAFLX0_YCOUNT_D              0xFFC00E18
#define MDMAFLX0_YMODIFY_D             0xFFC00E1C
#define MDMAFLX0_IRQSTAT_D             0xFFC00E28
#define MDMAFLX0_PMAP_D                0xFFC00E2C
#define MDMAFLX0_CURXCOUNT_D           0xFFC00E30
#define MDMAFLX0_CURYCOUNT_D           0xFFC00E38
#define MDMAFLX0_DMACNFG_S             0xFFC00E48
#define MDMAFLX0_XCOUNT_S              0xFFC00E50
#define MDMAFLX0_XMODIFY_S             0xFFC00E54
#define MDMAFLX0_YCOUNT_S              0xFFC00E58
#define MDMAFLX0_YMODIFY_S             0xFFC00E5C
#define MDMAFLX0_IRQSTAT_S             0xFFC00E68
#define MDMAFLX0_PMAP_S                0xFFC00E6C
#define MDMAFLX0_CURXCOUNT_S           0xFFC00E70
#define MDMAFLX0_CURYCOUNT_S           0xFFC00E78
#define MDMAFLX1_DMACNFG_D             0xFFC00E88
#define MDMAFLX1_XCOUNT_D              0xFFC00E90
#define MDMAFLX1_XMODIFY_D             0xFFC00E94
#define MDMAFLX1_YCOUNT_D              0xFFC00E98
#define MDMAFLX1_YMODIFY_D             0xFFC00E9C
#define MDMAFLX1_IRQSTAT_D             0xFFC00EA8
#define MDMAFLX1_PMAP_D                0xFFC00EAC
#define MDMAFLX1_CURXCOUNT_D           0xFFC00EB0
#define MDMAFLX1_CURYCOUNT_D           0xFFC00EB8
#define MDMAFLX1_DMACNFG_S             0xFFC00EC8
#define MDMAFLX1_XCOUNT_S              0xFFC00ED0
#define MDMAFLX1_XMODIFY_S             0xFFC00ED4
#define MDMAFLX1_YCOUNT_S              0xFFC00ED8
#define MDMAFLX1_YMODIFY_S             0xFFC00EDC
#define MDMAFLX1_IRQSTAT_S             0xFFC00EE8
#define MDMAFLX1_PMAP_S                0xFFC00EEC
#define MDMAFLX1_CURXCOUNT_S           0xFFC00EF0
#define MDMAFLX1_CURYCOUNT_S           0xFFC00EF8
#define DMAFLX0_DMACNFG                0xFFC00C08
#define DMAFLX0_XCOUNT                 0xFFC00C10
#define DMAFLX0_XMODIFY                0xFFC00C14
#define DMAFLX0_YCOUNT                 0xFFC00C18
#define DMAFLX0_YMODIFY                0xFFC00C1C
#define DMAFLX0_IRQSTAT                0xFFC00C28
#define DMAFLX0_PMAP                   0xFFC00C2C
#define DMAFLX0_CURXCOUNT              0xFFC00C30
#define DMAFLX0_CURYCOUNT              0xFFC00C38
#define DMAFLX1_DMACNFG                0xFFC00C48
#define DMAFLX1_XCOUNT                 0xFFC00C50
#define DMAFLX1_XMODIFY                0xFFC00C54
#define DMAFLX1_YCOUNT                 0xFFC00C58
#define DMAFLX1_YMODIFY                0xFFC00C5C
#define DMAFLX1_IRQSTAT                0xFFC00C68
#define DMAFLX1_PMAP                   0xFFC00C6C
#define DMAFLX1_CURXCOUNT              0xFFC00C70
#define DMAFLX1_CURYCOUNT              0xFFC00C78
#define DMAFLX2_DMACNFG                0xFFC00C88
#define DMAFLX2_XCOUNT                 0xFFC00C90
#define DMAFLX2_XMODIFY                0xFFC00C94
#define DMAFLX2_YCOUNT                 0xFFC00C98
#define DMAFLX2_YMODIFY                0xFFC00C9C
#define DMAFLX2_IRQSTAT                0xFFC00CA8
#define DMAFLX2_PMAP                   0xFFC00CAC
#define DMAFLX2_CURXCOUNT              0xFFC00CB0
#define DMAFLX2_CURYCOUNT              0xFFC00CB8
#define DMAFLX3_DMACNFG                0xFFC00CC8
#define DMAFLX3_XCOUNT                 0xFFC00CD0
#define DMAFLX3_XMODIFY                0xFFC00CD4
#define DMAFLX3_YCOUNT                 0xFFC00CD8
#define DMAFLX3_YMODIFY                0xFFC00CDC
#define DMAFLX3_IRQSTAT                0xFFC00CE8
#define DMAFLX3_PMAP                   0xFFC00CEC
#define DMAFLX3_CURXCOUNT              0xFFC00CF0
#define DMAFLX3_CURYCOUNT              0xFFC00CF8
#define DMAFLX4_DMACNFG                0xFFC00D08
#define DMAFLX4_XCOUNT                 0xFFC00D10
#define DMAFLX4_XMODIFY                0xFFC00D14
#define DMAFLX4_YCOUNT                 0xFFC00D18
#define DMAFLX4_YMODIFY                0xFFC00D1C
#define DMAFLX4_IRQSTAT                0xFFC00D28
#define DMAFLX4_PMAP                   0xFFC00D2C
#define DMAFLX4_CURXCOUNT              0xFFC00D30
#define DMAFLX4_CURYCOUNT              0xFFC00D38
#define DMAFLX5_DMACNFG                0xFFC00D48
#define DMAFLX5_XCOUNT                 0xFFC00D50
#define DMAFLX5_XMODIFY                0xFFC00D54
#define DMAFLX5_YCOUNT                 0xFFC00D58
#define DMAFLX5_YMODIFY                0xFFC00D5C
#define DMAFLX5_IRQSTAT                0xFFC00D68
#define DMAFLX5_PMAP                   0xFFC00D6C
#define DMAFLX5_CURXCOUNT              0xFFC00D70
#define DMAFLX5_CURYCOUNT              0xFFC00D78
#define DMAFLX6_DMACNFG                0xFFC00D88
#define DMAFLX6_XCOUNT                 0xFFC00D90
#define DMAFLX6_XMODIFY                0xFFC00D94
#define DMAFLX6_YCOUNT                 0xFFC00D98
#define DMAFLX6_YMODIFY                0xFFC00D9C
#define DMAFLX6_IRQSTAT                0xFFC00DA8
#define DMAFLX6_PMAP                   0xFFC00DAC
#define DMAFLX6_CURXCOUNT              0xFFC00DB0
#define DMAFLX6_CURYCOUNT              0xFFC00DB8
#define DMAFLX7_DMACNFG                0xFFC00DC8
#define DMAFLX7_XCOUNT                 0xFFC00DD0
#define DMAFLX7_XMODIFY                0xFFC00DD4
#define DMAFLX7_YCOUNT                 0xFFC00DD8
#define DMAFLX7_YMODIFY                0xFFC00DDC
#define DMAFLX7_IRQSTAT                0xFFC00DE8
#define DMAFLX7_PMAP                   0xFFC00DEC
#define DMAFLX7_CURXCOUNT              0xFFC00DF0
#define DMAFLX7_CURYCOUNT              0xFFC00DF8
#define TIMER0_CONFIG                  0xFFC00600
#define TIMER0_COUNTER                 0xFFC00604
#define TIMER0_PERIOD                  0xFFC00608
#define TIMER0_WIDTH                   0xFFC0060C
#define TIMER1_CONFIG                  0xFFC00610
#define TIMER1_COUNTER                 0xFFC00614
#define TIMER1_PERIOD                  0xFFC00618
#define TIMER1_WIDTH                   0xFFC0061C
#define TIMER2_CONFIG                  0xFFC00620
#define TIMER2_COUNTER                 0xFFC00624
#define TIMER2_PERIOD                  0xFFC00628
#define TIMER2_WIDTH                   0xFFC0062C
#define TIMER_ENABLE                   0xFFC00640
#define TIMER_DISABLE                  0xFFC00644
#define TIMER_STATUS                   0xFFC00648
#define SIC_RVECT                      0xFFC00108 /* Interrupt Reset Vector Address Register */
#define SIC_IMASK                      0xFFC0010C /* Interrupt Mask Register */
#define SIC_IAR0                       0xFFC00110 /* Interrupt Assignment Register 0 */
#define SIC_IAR1                       0xFFC00114 /* Interrupt Assignment Register 1 */
#define SIC_IAR2                       0xFFC00118 /* Interrupt Assignment Register 2 */
#define SIC_IAR3                       0xFFC0011C /* Interrupt Assignment Register 3 */
#define SIC_ISR                        0xFFC00120 /* Interrupt Status Register */
#define SIC_IWR                        0xFFC00124 /* Interrupt Wakeup Register */
#define UART_THR                       0xFFC00400 /* Transmit Holding */
#define UART_DLL                       0xFFC00400 /* Divisor Latch Low Byte */
#define UART_DLH                       0xFFC00404 /* Divisor Latch High Byte */
#define UART_IER                       0xFFC00404
#define UART_IIR                       0xFFC00408
#define UART_LCR                       0xFFC0040C
#define UART_MCR                       0xFFC00410
#define UART_LSR                       0xFFC00414
#define UART_SCR                       0xFFC0041C
#define UART_RBR                       0xFFC00400 /* Receive Buffer */
#define UART_GCTL                      0xFFC00424
#define SPT0_TX_CONFIG0                0xFFC00800
#define SPT0_TX_CONFIG1                0xFFC00804
#define SPT0_RX_CONFIG0                0xFFC00820
#define SPT0_RX_CONFIG1                0xFFC00824
#define SPT0_TX                        0xFFC00810
#define SPT0_RX                        0xFFC00818
#define SPT0_TSCLKDIV                  0xFFC00808
#define SPT0_RSCLKDIV                  0xFFC00828
#define SPT0_TFSDIV                    0xFFC0080C
#define SPT0_RFSDIV                    0xFFC0082C
#define SPT0_STAT                      0xFFC00830
#define SPT0_MTCS0                     0xFFC00840
#define SPT0_MTCS1                     0xFFC00844
#define SPT0_MTCS2                     0xFFC00848
#define SPT0_MTCS3                     0xFFC0084C
#define SPT0_MRCS0                     0xFFC00850
#define SPT0_MRCS1                     0xFFC00854
#define SPT0_MRCS2                     0xFFC00858
#define SPT0_MRCS3                     0xFFC0085C
#define SPT0_MCMC1                     0xFFC00838
#define SPT0_MCMC2                     0xFFC0083C
#define SPT0_CHNL                      0xFFC00834
#define SPT1_TX_CONFIG0                0xFFC00900
#define SPT1_TX_CONFIG1                0xFFC00904
#define SPT1_RX_CONFIG0                0xFFC00920
#define SPT1_RX_CONFIG1                0xFFC00924
#define SPT1_TX                        0xFFC00910
#define SPT1_RX                        0xFFC00918
#define SPT1_TSCLKDIV                  0xFFC00908
#define SPT1_RSCLKDIV                  0xFFC00928
#define SPT1_TFSDIV                    0xFFC0090C
#define SPT1_RFSDIV                    0xFFC0092C
#define SPT1_STAT                      0xFFC00930
#define SPT1_MTCS0                     0xFFC00940
#define SPT1_MTCS1                     0xFFC00944
#define SPT1_MTCS2                     0xFFC00948
#define SPT1_MTCS3                     0xFFC0094C
#define SPT1_MRCS0                     0xFFC00950
#define SPT1_MRCS1                     0xFFC00954
#define SPT1_MRCS2                     0xFFC00958
#define SPT1_MRCS3                     0xFFC0095C
#define SPT1_MCMC1                     0xFFC00938
#define SPT1_MCMC2                     0xFFC0093C
#define SPT1_CHNL                      0xFFC00934
#define PPI_CONTROL                    0xFFC01000
#define PPI_STATUS                     0xFFC01004
#define PPI_DELAY                      0xFFC0100C
#define PPI_COUNT                      0xFFC01008
#define PPI_FRAME                      0xFFC01010
#define PLL_CTL                        0xFFC00000 /* PLL Control register (16-bit) */
#define PLL_DIV                        0xFFC00004 /* PLL Divide Register (16-bit) */
#define VR_CTL                         0xFFC00008 /* Voltage Regulator Control Register (16-bit) */
#define PLL_STAT                       0xFFC0000C /* PLL Status register (16-bit) */
#define PLL_LOCKCNT                    0xFFC00010 /* PLL Lock Count register (16-bit) */
#define SWRST                          0xFFC00100 /* Software Reset Register (16-bit) */
#define SYSCR                          0xFFC00104 /* System Configuration register */
#define EVT_OVERRIDE                   0xFFE02100
#define CHIPID                         0xFFC00014
#define TBUFCTL                        0xFFE06000 /* Trace Buffer Control Register */
#define TBUFSTAT                       0xFFE06004 /* Trace Buffer Status Register */
#define TBUF                           0xFFE06100 /* Trace Buffer */
#define PFCTL                          0xFFE08000
#define PFCNTR0                        0xFFE08100
#define PFCNTR1                        0xFFE08104
#define WDOG_CTL                       0xFFC00200 /* Watchdog Control Register */
#define WDOG_CNT                       0xFFC00204 /* Watchdog Count Register */
#define WDOG_STAT                      0xFFC00208 /* Watchdog Status Register */
#define RTC_STAT                       0xFFC00300
#define RTC_ICTL                       0xFFC00304
#define RTC_ISTAT                      0xFFC00308
#define RTC_SWCNT                      0xFFC0030C
#define RTC_ALARM                      0xFFC00310
#define RTC_PREN                       0xFFC00314
#define SPI_CTL                        0xFFC00500
#define SPI_FLG                        0xFFC00504
#define SPI_STAT                       0xFFC00508
#define SPI_TDBR                       0xFFC0050C
#define SPI_RDBR                       0xFFC00510
#define SPI_BAUD                       0xFFC00514
#define SPI_SHADOW                     0xFFC00518
#define FIO_FLAG_D                     0xFFC00700
#define FIO_FLAG_C                     0xFFC00704
#define FIO_FLAG_S                     0xFFC00708
#define FIO_FLAG_T                     0xFFC0070C
#define FIO_MASKA_D                    0xFFC00710
#define FIO_MASKA_C                    0xFFC00714
#define FIO_MASKA_S                    0xFFC00718
#define FIO_MASKA_T                    0xFFC0071C
#define FIO_MASKB_D                    0xFFC00720
#define FIO_MASKB_C                    0xFFC00724
#define FIO_MASKB_S                    0xFFC00728
#define FIO_MASKB_T                    0xFFC0072C
#define FIO_DIR                        0xFFC00730
#define FIO_POLAR                      0xFFC00734
#define FIO_EDGE                       0xFFC00738
#define FIO_BOTH                       0xFFC0073C
#define FIO_INEN                       0xFFC00740
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
#define DMA0_NEXT_DESC_PTR             0xFFC00C00
#define DMA0_START_ADDR                0xFFC00C04
#define DMA0_CONFIG                    0xFFC00C08 /* DMA Channel 0 Configuration Register */
#define DMA0_X_COUNT                   0xFFC00C10
#define DMA0_X_MODIFY                  0xFFC00C14
#define DMA0_Y_COUNT                   0xFFC00C18
#define DMA0_Y_MODIFY                  0xFFC00C1C
#define DMA0_CURR_DESC_PTR             0xFFC00C20
#define DMA0_CURR_ADDR                 0xFFC00C24
#define DMA0_IRQ_STATUS                0xFFC00C28
#define DMA0_PERIPHERAL_MAP            0xFFC00C2C
#define DMA0_CURR_X_COUNT              0xFFC00C30
#define DMA0_CURR_Y_COUNT              0xFFC00C38
#define DMA1_NEXT_DESC_PTR             0xFFC00C40
#define DMA1_START_ADDR                0xFFC00C44
#define DMA1_CONFIG                    0xFFC00C48 /* DMA Channel 1 Configuration Register */
#define DMA1_X_COUNT                   0xFFC00C50
#define DMA1_X_MODIFY                  0xFFC00C54
#define DMA1_Y_COUNT                   0xFFC00C58
#define DMA1_Y_MODIFY                  0xFFC00C5C
#define DMA1_CURR_DESC_PTR             0xFFC00C60
#define DMA1_CURR_ADDR                 0xFFC00C64
#define DMA1_IRQ_STATUS                0xFFC00C68
#define DMA1_PERIPHERAL_MAP            0xFFC00C6C
#define DMA1_CURR_X_COUNT              0xFFC00C70
#define DMA1_CURR_Y_COUNT              0xFFC00C78
#define DMA2_NEXT_DESC_PTR             0xFFC00C80
#define DMA2_START_ADDR                0xFFC00C84
#define DMA2_CONFIG                    0xFFC00C88 /* DMA Channel 2 Configuration Register */
#define DMA2_X_COUNT                   0xFFC00C90
#define DMA2_X_MODIFY                  0xFFC00C94
#define DMA2_Y_COUNT                   0xFFC00C98
#define DMA2_Y_MODIFY                  0xFFC00C9C
#define DMA2_CURR_DESC_PTR             0xFFC00CA0
#define DMA2_CURR_ADDR                 0xFFC00CA4
#define DMA2_IRQ_STATUS                0xFFC00CA8
#define DMA2_PERIPHERAL_MAP            0xFFC00CAC
#define DMA2_CURR_X_COUNT              0xFFC00CB0
#define DMA2_CURR_Y_COUNT              0xFFC00CB8
#define DMA3_NEXT_DESC_PTR             0xFFC00CC0
#define DMA3_START_ADDR                0xFFC00CC4
#define DMA3_CONFIG                    0xFFC00CC8 /* DMA Channel 3 Configuration Register */
#define DMA3_X_COUNT                   0xFFC00CD0
#define DMA3_X_MODIFY                  0xFFC00CD4
#define DMA3_Y_COUNT                   0xFFC00CD8
#define DMA3_Y_MODIFY                  0xFFC00CDC
#define DMA3_CURR_DESC_PTR             0xFFC00CE0
#define DMA3_CURR_ADDR                 0xFFC00CE4
#define DMA3_IRQ_STATUS                0xFFC00CE8
#define DMA3_PERIPHERAL_MAP            0xFFC00CEC
#define DMA3_CURR_X_COUNT              0xFFC00CF0
#define DMA3_CURR_Y_COUNT              0xFFC00CF8
#define DMA4_NEXT_DESC_PTR             0xFFC00D00
#define DMA4_START_ADDR                0xFFC00D04
#define DMA4_CONFIG                    0xFFC00D08 /* DMA Channel 4 Configuration Register */
#define DMA4_X_COUNT                   0xFFC00D10
#define DMA4_X_MODIFY                  0xFFC00D14
#define DMA4_Y_COUNT                   0xFFC00D18
#define DMA4_Y_MODIFY                  0xFFC00D1C
#define DMA4_CURR_DESC_PTR             0xFFC00D20
#define DMA4_CURR_ADDR                 0xFFC00D24
#define DMA4_IRQ_STATUS                0xFFC00D28
#define DMA4_PERIPHERAL_MAP            0xFFC00D2C
#define DMA4_CURR_X_COUNT              0xFFC00D30
#define DMA4_CURR_Y_COUNT              0xFFC00D38
#define DMA5_NEXT_DESC_PTR             0xFFC00D40
#define DMA5_START_ADDR                0xFFC00D44
#define DMA5_CONFIG                    0xFFC00D48 /* DMA Channel 5 Configuration Register */
#define DMA5_X_COUNT                   0xFFC00D50
#define DMA5_X_MODIFY                  0xFFC00D54
#define DMA5_Y_COUNT                   0xFFC00D58
#define DMA5_Y_MODIFY                  0xFFC00D5C
#define DMA5_CURR_DESC_PTR             0xFFC00D60
#define DMA5_CURR_ADDR                 0xFFC00D64
#define DMA5_IRQ_STATUS                0xFFC00D68
#define DMA5_PERIPHERAL_MAP            0xFFC00D6C
#define DMA5_CURR_X_COUNT              0xFFC00D70
#define DMA5_CURR_Y_COUNT              0xFFC00D78
#define DMA6_NEXT_DESC_PTR             0xFFC00D80
#define DMA6_START_ADDR                0xFFC00D84
#define DMA6_CONFIG                    0xFFC00D88 /* DMA Channel 6 Configuration Register */
#define DMA6_X_COUNT                   0xFFC00D90
#define DMA6_X_MODIFY                  0xFFC00D94
#define DMA6_Y_COUNT                   0xFFC00D98
#define DMA6_Y_MODIFY                  0xFFC00D9C
#define DMA6_CURR_DESC_PTR             0xFFC00DA0
#define DMA6_CURR_ADDR                 0xFFC00DA4
#define DMA6_IRQ_STATUS                0xFFC00DA8
#define DMA6_PERIPHERAL_MAP            0xFFC00DAC
#define DMA6_CURR_X_COUNT              0xFFC00DB0
#define DMA6_CURR_Y_COUNT              0xFFC00DB8
#define DMA7_NEXT_DESC_PTR             0xFFC00DC0
#define DMA7_START_ADDR                0xFFC00DC4
#define DMA7_CONFIG                    0xFFC00DC8 /* DMA Channel 7 Configuration Register */
#define DMA7_X_COUNT                   0xFFC00DD0
#define DMA7_X_MODIFY                  0xFFC00DD4
#define DMA7_Y_COUNT                   0xFFC00DD8
#define DMA7_Y_MODIFY                  0xFFC00DDC
#define DMA7_CURR_DESC_PTR             0xFFC00DE0
#define DMA7_CURR_ADDR                 0xFFC00DE4
#define DMA7_IRQ_STATUS                0xFFC00DE8
#define DMA7_PERIPHERAL_MAP            0xFFC00DEC
#define DMA7_CURR_X_COUNT              0xFFC00DF0
#define DMA7_CURR_Y_COUNT              0xFFC00DF8
#define MDMA_D0_NEXT_DESC_PTR          0xFFC00E00
#define MDMA_D0_START_ADDR             0xFFC00E04
#define MDMA_D0_CONFIG                 0xFFC00E08
#define MDMA_D0_X_COUNT                0xFFC00E10
#define MDMA_D0_X_MODIFY               0xFFC00E14
#define MDMA_D0_Y_COUNT                0xFFC00E18
#define MDMA_D0_Y_MODIFY               0xFFC00E1C
#define MDMA_D0_CURR_DESC_PTR          0xFFC00E20
#define MDMA_D0_CURR_ADDR              0xFFC00E24
#define MDMA_D0_IRQ_STATUS             0xFFC00E28
#define MDMA_D0_PERIPHERAL_MAP         0xFFC00E2C
#define MDMA_D0_CURR_X_COUNT           0xFFC00E30
#define MDMA_D0_CURR_Y_COUNT           0xFFC00E38
#define MDMA_S0_NEXT_DESC_PTR          0xFFC00E40
#define MDMA_S0_START_ADDR             0xFFC00E44
#define MDMA_S0_CONFIG                 0xFFC00E48
#define MDMA_S0_X_COUNT                0xFFC00E50
#define MDMA_S0_X_MODIFY               0xFFC00E54
#define MDMA_S0_Y_COUNT                0xFFC00E58
#define MDMA_S0_Y_MODIFY               0xFFC00E5C
#define MDMA_S0_CURR_DESC_PTR          0xFFC00E60
#define MDMA_S0_CURR_ADDR              0xFFC00E64
#define MDMA_S0_IRQ_STATUS             0xFFC00E68
#define MDMA_S0_PERIPHERAL_MAP         0xFFC00E6C
#define MDMA_S0_CURR_X_COUNT           0xFFC00E70
#define MDMA_S0_CURR_Y_COUNT           0xFFC00E78
#define MDMA_D1_NEXT_DESC_PTR          0xFFC00E80
#define MDMA_D1_START_ADDR             0xFFC00E84
#define MDMA_D1_CONFIG                 0xFFC00E88 /* MemDMA Stream 1 Destination Configuration Register */
#define MDMA_D1_X_COUNT                0xFFC00E90
#define MDMA_D1_X_MODIFY               0xFFC00E94
#define MDMA_D1_Y_COUNT                0xFFC00E98
#define MDMA_D1_Y_MODIFY               0xFFC00E9C
#define MDMA_D1_CURR_DESC_PTR          0xFFC00EA0
#define MDMA_D1_CURR_ADDR              0xFFC00EA4
#define MDMA_D1_IRQ_STATUS             0xFFC00EA8
#define MDMA_D1_PERIPHERAL_MAP         0xFFC00EAC
#define MDMA_D1_CURR_X_COUNT           0xFFC00EB0
#define MDMA_D1_CURR_Y_COUNT           0xFFC00EB8
#define MDMA_S1_NEXT_DESC_PTR          0xFFC00EC0
#define MDMA_S1_START_ADDR             0xFFC00EC4
#define MDMA_S1_CONFIG                 0xFFC00EC8
#define MDMA_S1_X_COUNT                0xFFC00ED0
#define MDMA_S1_X_MODIFY               0xFFC00ED4
#define MDMA_S1_Y_COUNT                0xFFC00ED8
#define MDMA_S1_Y_MODIFY               0xFFC00EDC
#define MDMA_S1_CURR_DESC_PTR          0xFFC00EE0
#define MDMA_S1_CURR_ADDR              0xFFC00EE4
#define MDMA_S1_IRQ_STATUS             0xFFC00EE8
#define MDMA_S1_PERIPHERAL_MAP         0xFFC00EEC
#define MDMA_S1_CURR_X_COUNT           0xFFC00EF0
#define MDMA_S1_CURR_Y_COUNT           0xFFC00EF8
#define EBIU_AMGCTL                    0xFFC00A00
#define EBIU_AMBCTL0                   0xFFC00A04
#define EBIU_AMBCTL1                   0xFFC00A08
#define EBIU_SDGCTL                    0xFFC00A10
#define EBIU_SDBCTL                    0xFFC00A14
#define EBIU_SDRRC                     0xFFC00A18
#define EBIU_SDSTAT                    0xFFC00A1C
#define DMA_TC_CNT                     0xFFC00B0C
#define DMA_TC_PER                     0xFFC00B10

#endif /* __BFIN_DEF_ADSP_EDN_extended__ */