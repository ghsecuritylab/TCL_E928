

#include <config.h>
#include <version.h>
#include <asm/arch/cpu.h>
#include <asm/arch/power.h>


_TEXT_BASE:
	.word	TEXT_BASE

	.globl lowlevel_init
lowlevel_init:
	mov	r9, lr

	/* r5 has always zero */
	mov	r5, #0

	ldr	r8, =S5PC100_GPIO_BASE

	/* Disable Watchdog */
	ldr	r0, =S5PC100_WATCHDOG_BASE		@0xEA200000
	orr	r0, r0, #0x0
	str	r5, [r0]

#ifndef CONFIG_ONENAND_IPL
	/* setting SRAM */
	ldr	r0, =S5PC100_SROMC_BASE
	ldr	r1, =0x9
	str	r1, [r0]
#endif

	/* S5PC100 has 3 groups of interrupt sources */
	ldr	r0, =S5PC100_VIC0_BASE			@0xE4000000
	ldr	r1, =S5PC100_VIC1_BASE			@0xE4000000
	ldr	r2, =S5PC100_VIC2_BASE			@0xE4000000

	/* Disable all interrupts (VIC0, VIC1 and VIC2) */
	mvn	r3, #0x0
	str	r3, [r0, #0x14]				@INTENCLEAR
	str	r3, [r1, #0x14]				@INTENCLEAR
	str	r3, [r2, #0x14]				@INTENCLEAR

#ifndef CONFIG_ONENAND_IPL
	/* Set all interrupts as IRQ */
	str	r5, [r0, #0xc]				@INTSELECT
	str	r5, [r1, #0xc]				@INTSELECT
	str	r5, [r2, #0xc]				@INTSELECT

	/* Pending Interrupt Clear */
	str	r5, [r0, #0xf00]			@INTADDRESS
	str	r5, [r1, #0xf00]			@INTADDRESS
	str	r5, [r2, #0xf00]			@INTADDRESS
#endif

#ifndef CONFIG_ONENAND_IPL
	/* for UART */
	bl uart_asm_init

	/* for TZPC */
	bl tzpc_asm_init
#endif

#ifdef CONFIG_ONENAND_IPL
	/* init system clock */
	bl	system_clock_init

	bl	mem_ctrl_asm_init

	/* Wakeup support. Don't know if it's going to be used, untested. */
	ldr	r0, =S5PC100_RST_STAT
	ldr	r1, [r0]
	bic	r1, r1, #0xfffffff7
	cmp	r1, #0x8
	beq	wakeup_reset
#endif

1:
	mov	lr, r9
	mov	pc, lr

#ifdef CONFIG_ONENAND_IPL
wakeup_reset:

	/* Clear wakeup status register */
	ldr	r0, =S5PC100_WAKEUP_STAT
	ldr	r1, [r0]
	str	r1, [r0]

	/* Load return address and jump to kernel */
	ldr	r0, =S5PC100_INFORM0

	/* r1 = physical address of s5pc100_cpu_resume function */
	ldr	r1, [r0]

	/* Jump to kernel (sleep.S) */
	mov	pc, r1
	nop
	nop
#endif

system_clock_init:
	ldr	r8, =S5PC1XX_CLOCK_BASE		@ 0xE0100000

	/* Set Clock divider */
	ldr	r1, =0x00011110
	str	r1, [r8, #0x304]
	ldr	r1, =0x1
	str	r1, [r8, #0x308]
	ldr	r1, =0x00011301
	str	r1, [r8, #0x300]

	/* Set Lock Time */
	ldr	r1, =0xe10			@ Locktime : 0xe10 = 3600
	str	r1, [r8, #0x000]		@ APLL_LOCK
	str	r1, [r8, #0x004]		@ MPLL_LOCK
	str	r1, [r8, #0x008]		@ EPLL_LOCK
	str	r1, [r8, #0x00C]		@ HPLL_LOCK

	/* APLL_CON */
	ldr	r1, =0x81bc0400		@ SDIV 0, PDIV 4, MDIV 444 (1332MHz)
	str	r1, [r8, #0x100]
	/* MPLL_CON */
	ldr	r1, =0x80590201		@ SDIV 1, PDIV 2, MDIV 89 (267MHz)
	str	r1, [r8, #0x104]
	/* EPLL_CON */
	ldr	r1, =0x80870303		@ SDIV 3, PDIV 3, MDIV 135 (67.5MHz)
	str	r1, [r8, #0x108]
	/* HPLL_CON */
	ldr	r1, =0x80600603
	str	r1, [r8, #0x10C]

	/* Set Source Clock */
	ldr	r1, =0x1111			@ A, M, E, HPLL Muxing
	str	r1, [r8, #0x200]		@ CLK_SRC0

	ldr	r1, =0x1000001			@ Uart Clock & CLK48M Muxing
	str	r1, [r8, #0x204]		@ CLK_SRC1

	ldr	r1, =0x9000			@ ARMCLK/4
	str	r1, [r8, #0x400]		@ CLK_OUT

	/* wait at least 200us to stablize all clock */
	mov	r2, #0x10000
1:	subs	r2, r2, #1
	bne	1b

	mov	pc, lr

#ifndef CONFIG_ONENAND_IPL
uart_asm_init:
	mov	r0, r8
	ldr	r1, =0x22222222
	str	r1, [r0, #0x0]			@ GPA0_CON
	ldr	r1, =0x00022222
	str	r1, [r0, #0x20]			@ GPA1_CON

	mov	pc, lr

tzpc_asm_init:
	ldr	r0, =0xE3800000
	mov	r1, #0x0
	str	r1, [r0]
	mov	r1, #0xff
	str	r1, [r0, #0x804]
	str	r1, [r0, #0x810]

	ldr	r0, =0xE2800000
	str	r1, [r0, #0x804]
	str	r1, [r0, #0x810]
	str	r1, [r0, #0x81C]

	ldr	r0, =0xE2900000
	str	r1, [r0, #0x804]
	str	r1, [r0, #0x810]

	mov	pc, lr
#endif
