


#include <common.h>
#include <asm/io.h>
#include <asm/i8259.h>
#include <asm/ibmpc.h>
#include <asm/interrupt.h>

#if CONFIG_SYS_NUM_IRQS != 16
#error "CONFIG_SYS_NUM_IRQS must equal 16 if CONFIG_SYS_NUM_IRQS is defined"
#endif

int interrupt_init(void)
{
	u8 i;

	disable_interrupts();

	/* Mask all interrupts */
	outb(0xff, MASTER_PIC + IMR);
	outb(0xff, SLAVE_PIC + IMR);

	/* Master PIC */
	/* Place master PIC interrupts at INT20 */
	/* ICW3, One slave PIC is present */
	outb(ICW1_SEL|ICW1_EICW4, MASTER_PIC + ICW1);
	outb(0x20, MASTER_PIC + ICW2);
	outb(IR2, MASTER_PIC + ICW3);
	outb(ICW4_PM, MASTER_PIC + ICW4);

	for (i = 0; i < 8; i++)
		outb(OCW2_SEOI | i, MASTER_PIC + OCW2);

	/* Slave PIC */
	/* Place slave PIC interrupts at INT28 */
	/* Slave ID */
	outb(ICW1_SEL|ICW1_EICW4, SLAVE_PIC + ICW1);
	outb(0x28, SLAVE_PIC + ICW2);
	outb(0x02, SLAVE_PIC + ICW3);
	outb(ICW4_PM, SLAVE_PIC + ICW4);

	for (i = 0; i < 8; i++)
		outb(OCW2_SEOI | i, SLAVE_PIC + OCW2);

	/*
	 * Enable cascaded interrupts by unmasking the cascade IRQ pin of
	 * the master PIC
	 */
	unmask_irq (2);

	enable_interrupts();

	return 0;
}

void mask_irq(int irq)
{
	int imr_port;

	if (irq >= CONFIG_SYS_NUM_IRQS)
		return;

	if (irq > 7)
		imr_port = SLAVE_PIC + IMR;
	else
		imr_port = MASTER_PIC + IMR;

	outb(inb(imr_port) | (1 << (irq & 7)), imr_port);
}

void unmask_irq(int irq)
{
	int imr_port;

	if (irq >= CONFIG_SYS_NUM_IRQS)
		return;

	if (irq > 7)
		imr_port = SLAVE_PIC + IMR;
	else
		imr_port = MASTER_PIC + IMR;

	outb(inb(imr_port) & ~(1 << (irq & 7)), imr_port);
}

void specific_eoi(int irq)
{
	if (irq >= CONFIG_SYS_NUM_IRQS)
		return;

	if (irq > 7) {
		/*
		 *  IRQ is on the slave - Issue a corresponding EOI to the
		 *  slave PIC and an EOI for IRQ2 (the cascade interrupt)
		 *  on the master PIC
		 */
		outb(OCW2_SEOI | (irq & 7), SLAVE_PIC + OCW2);
		irq = SEOI_IR2;
	}

	outb(OCW2_SEOI | irq, MASTER_PIC + OCW2);
}
