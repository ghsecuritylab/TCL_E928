

#include <config.h>
#include <version.h>
#ifdef CONFIG_ENABLE_MMU
#include <asm/proc/domain.h>
#endif
#ifdef CONFIG_S3C64XX
#include <asm/arch/s3c6400.h>
#endif

#if !defined(CONFIG_ENABLE_MMU) && !defined(CONFIG_SYS_PHY_UBOOT_BASE)
//#define CONFIG_SYS_PHY_UBOOT_BASE	CONFIG_SYS_UBOOT_BASE
#endif


.globl _start
_start: b	reset
#ifndef CONFIG_NAND_SPL
	ldr	pc, _undefined_instruction
	ldr	pc, _software_interrupt
	ldr	pc, _prefetch_abort
	ldr	pc, _data_abort
	ldr	pc, _not_used
	ldr	pc, _irq
	ldr	pc, _fiq

_undefined_instruction:
	.word undefined_instruction
_software_interrupt:
	.word software_interrupt
_prefetch_abort:
	.word prefetch_abort
_data_abort:
	.word data_abort
_not_used:
	.word not_used
_irq:
	.word irq
_fiq:
	.word fiq
_pad:
	.word 0x12345678 /* now 16*4=64 */
#else
	. = _start + 64
#endif

.global _end_vect
_end_vect:
	.balignl 16,0xdeadbeef

_TEXT_BASE:
	.word	TEXT_BASE

_TEXT_PHY_BASE:
	.word	CONFIG_SYS_PHY_UBOOT_BASE

.globl _armboot_start
_armboot_start:
	.word _start

.globl _bss_start
_bss_start:
	.word __bss_start

.globl _bss_end
_bss_end:
	.word _end


reset:
	/*
	 * set the cpu to SVC32 mode
	 */
	mrs	r0, cpsr
	bic	r0, r0, #0x3f
	orr	r0, r0, #0xd3
	msr	cpsr, r0

	/*
	 * we do sys-critical inits only at reboot,
	 * not when booting from ram!
	 */
cpu_init_crit:
	/*
	 * When booting from NAND - it has definitely been a reset, so, no need
	 * to flush caches and disable the MMU
	 */
#ifndef CONFIG_NAND_SPL
	/*
	 * flush v4 I/D caches
	 */
	mov	r0, #0
	mcr	p15, 0, r0, c7, c7, 0	/* flush v3/v4 cache */
	mcr	p15, 0, r0, c8, c7, 0	/* flush v4 TLB */

	/*
	 * disable MMU stuff and caches
	 */
	mrc	p15, 0, r0, c1, c0, 0
	bic	r0, r0, #0x00002300	@ clear bits 13, 9:8 (--V- --RS)
	bic	r0, r0, #0x00000087	@ clear bits 7, 2:0 (B--- -CAM)
	orr	r0, r0, #0x00000002	@ set bit 2 (A) Align
	orr	r0, r0, #0x00001000	@ set bit 12 (I) I-Cache
	/* Prepare to disable the MMU */
	adr	r1, mmu_disable_phys
	/* We presume we're within the first 1024 bytes */
	and	r1, r1, #0x3fc
	ldr	r2, _TEXT_PHY_BASE
	ldr	r3, =0xfff00000
	and	r2, r2, r3
	orr	r2, r2, r1
	b	mmu_disable

	.align 5
	/* Run in a single cache-line */
mmu_disable:
	mcr	p15, 0, r0, c1, c0, 0
	nop
	nop
	mov	pc, r2
#endif

mmu_disable_phys:
#ifdef CONFIG_S3C64XX
	/* Peri port setup */
	ldr	r0, =0x70000000
	orr	r0, r0, #0x13
	mcr	p15,0,r0,c15,c2,4       @ 256M (0x70000000 - 0x7fffffff)
#endif

	/*
	 * Go setup Memory and board specific bits prior to relocation.
	 */
	bl	lowlevel_init		/* go setup pll,mux,memory */

after_copy:
#ifdef CONFIG_ENABLE_MMU
enable_mmu:
	/* enable domain access */
	ldr	r5, =0x0000ffff
	mcr	p15, 0, r5, c3, c0, 0	/* load domain access register */

	/* Set the TTB register */
	ldr	r0, _mmu_table_base
	ldr	r1, =CONFIG_SYS_PHY_UBOOT_BASE
	ldr	r2, =0xfff00000
	bic	r0, r0, r2
	orr	r1, r0, r1
	mcr	p15, 0, r1, c2, c0, 0

	/* Enable the MMU */
	mrc	p15, 0, r0, c1, c0, 0
	orr	r0, r0, #1		/* Set CR_M to enable MMU */

	/* Prepare to enable the MMU */
	adr	r1, skip_hw_init
	and	r1, r1, #0x3fc
	ldr	r2, _TEXT_BASE
	ldr	r3, =0xfff00000
	and	r2, r2, r3
	orr	r2, r2, r1
	b	mmu_enable

	.align 5
	/* Run in a single cache-line */
mmu_enable:

	mcr	p15, 0, r0, c1, c0, 0
	nop
	nop
	mov	pc, r2
#endif

skip_hw_init:
	/* Set up the stack						    */
stack_setup:
	ldr	r0, _TEXT_BASE	/* base of copy in DRAM	    */
	sub	r0, r0, #CONFIG_SYS_MALLOC_LEN	/* malloc area                      */
	sub	r0, r0, #CONFIG_SYS_GBL_DATA_SIZE /* bdinfo                        */
	sub	sp, r0, #12		/* leave 3 words for abort-stack    */

clear_bss:
	ldr	r0, _bss_start		/* find start of bss segment        */
	ldr	r1, _bss_end		/* stop here                        */
	mov 	r2, #0			/* clear                            */

clbss_l:
	str	r2, [r0]		/* clear loop...                    */
	add	r0, r0, #4
	cmp	r0, r1
	ble	clbss_l

#ifndef CONFIG_NAND_SPL
	ldr	pc, _start_armboot

_start_armboot:
	.word start_armboot
#else
	b	nand_boot
/*	.word nand_boot*/
#endif

#ifdef CONFIG_ENABLE_MMU
_mmu_table_base:
	.word mmu_table
#endif

#ifndef CONFIG_NAND_SPL
#ifdef CONFIG_ENABLE_MMU
	.globl theLastJump
theLastJump:
	mov	r9, r0
	ldr	r3, =0xfff00000
	ldr	r4, _TEXT_PHY_BASE
	adr	r5, phy_last_jump
	bic	r5, r5, r3
	orr	r5, r5, r4
	mov	pc, r5
phy_last_jump:
	/*
	 * disable MMU stuff
	 */
	mrc	p15, 0, r0, c1, c0, 0
	bic	r0, r0, #0x00002300	/* clear bits 13, 9:8 (--V- --RS) */
	bic	r0, r0, #0x00000087	/* clear bits 7, 2:0 (B--- -CAM) */
	orr	r0, r0, #0x00000002	/* set bit 2 (A) Align */
	orr	r0, r0, #0x00001000	/* set bit 12 (I) I-Cache */
	mcr	p15, 0, r0, c1, c0, 0

	mcr	p15, 0, r0, c8, c7, 0	/* flush v4 TLB */

	mov	r0, #0
	mov	pc, r9
#endif
@
@ IRQ stack frame.
@
#define S_FRAME_SIZE	72

#define S_OLD_R0	68
#define S_PSR		64
#define S_PC		60
#define S_LR		56
#define S_SP		52

#define S_IP		48
#define S_FP		44
#define S_R10		40
#define S_R9		36
#define S_R8		32
#define S_R7		28
#define S_R6		24
#define S_R5		20
#define S_R4		16
#define S_R3		12
#define S_R2		8
#define S_R1		4
#define S_R0		0

#define MODE_SVC 0x13
#define I_BIT	 0x80


	.macro	bad_save_user_regs
	/* carve out a frame on current user stack */
	sub	sp, sp, #S_FRAME_SIZE
	/* Save user registers (now in svc mode) r0-r12 */
	stmia	sp, {r0 - r12}

	ldr	r2, _armboot_start
	sub	r2, r2, #(CONFIG_SYS_MALLOC_LEN)
	/* set base 2 words into abort stack */
	sub	r2, r2, #(CONFIG_SYS_GBL_DATA_SIZE+8)
	/* get values for "aborted" pc and cpsr (into parm regs) */
	ldmia	r2, {r2 - r3}
	/* grab pointer to old stack */
	add	r0, sp, #S_FRAME_SIZE

	add	r5, sp, #S_SP
	mov	r1, lr
	/* save sp_SVC, lr_SVC, pc, cpsr */
	stmia	r5, {r0 - r3}
	/* save current stack into r0 (param register) */
	mov	r0, sp
	.endm

	.macro get_bad_stack
	/* setup our mode stack (enter in banked mode) */
	ldr	r13, _armboot_start
	/* move past malloc pool */
	sub	r13, r13, #(CONFIG_SYS_MALLOC_LEN)
	/* move to reserved a couple spots for abort stack */
	sub	r13, r13, #(CONFIG_SYS_GBL_DATA_SIZE + 8)

	/* save caller lr in position 0 of saved stack */
	str	lr, [r13]
	/* get the spsr */
	mrs	lr, spsr
	/* save spsr in position 1 of saved stack */
	str	lr, [r13, #4]

	/* prepare SVC-Mode */
	mov	r13, #MODE_SVC
	@ msr	spsr_c, r13
	/* switch modes, make sure moves will execute */
	msr	spsr, r13
	/* capture return pc */
	mov	lr, pc
	/* jump to next instruction & switch modes. */
	movs	pc, lr
	.endm

	.macro get_bad_stack_swi
	/* space on current stack for scratch reg. */
	sub	r13, r13, #4
	/* save R0's value. */
	str	r0, [r13]
	/* get data regions start */
	ldr	r0, _armboot_start
	/* move past malloc pool */
	sub	r0, r0, #(CONFIG_SYS_MALLOC_LEN)
	/* move past gbl and a couple spots for abort stack */
	sub	r0, r0, #(CONFIG_SYS_GBL_DATA_SIZE + 8)
	/* save caller lr in position 0 of saved stack */
	str	lr, [r0]
	/* get the spsr */
	mrs	r0, spsr
	/* save spsr in position 1 of saved stack */
	str	lr, [r0, #4]
	/* restore r0 */
	ldr	r0, [r13]
	/* pop stack entry */
	add	r13, r13, #4
	.endm

	.align	5
undefined_instruction:
	get_bad_stack
	bad_save_user_regs
	bl	do_undefined_instruction

	.align	5
software_interrupt:
	get_bad_stack_swi
	bad_save_user_regs
	bl	do_software_interrupt

	.align	5
prefetch_abort:
	get_bad_stack
	bad_save_user_regs
	bl	do_prefetch_abort

	.align	5
data_abort:
	get_bad_stack
	bad_save_user_regs
	bl	do_data_abort

	.align	5
not_used:
	get_bad_stack
	bad_save_user_regs
	bl	do_not_used

	.align	5
irq:
	get_bad_stack
	bad_save_user_regs
	bl	do_irq

	.align	5
fiq:
	get_bad_stack
	bad_save_user_regs
	bl	do_fiq
#endif /* CONFIG_NAND_SPL */

.globl jump
jump:      
      mov	pc, r0		/* do image check */
      mov	pc, lr		/* back to my caller */
