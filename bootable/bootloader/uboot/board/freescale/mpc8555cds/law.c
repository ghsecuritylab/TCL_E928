

#include <common.h>
#include <asm/fsl_law.h>
#include <asm/mmu.h>


struct law_entry law_table[] = {
	SET_LAW(CONFIG_SYS_PCI1_MEM_PHYS, LAW_SIZE_512M, LAW_TRGT_IF_PCI),
	SET_LAW(CONFIG_SYS_PCI2_MEM_PHYS, LAW_SIZE_512M, LAW_TRGT_IF_PCI_2),
	SET_LAW(CONFIG_SYS_PCI1_IO_PHYS, LAW_SIZE_1M, LAW_TRGT_IF_PCI),
	SET_LAW(CONFIG_SYS_PCI2_IO_PHYS, LAW_SIZE_1M, LAW_TRGT_IF_PCI_2),
	/* LBC window - maps 256M 0xf0000000 -> 0xffffffff */
	SET_LAW(CONFIG_SYS_LBC_SDRAM_BASE, LAW_SIZE_256M, LAW_TRGT_IF_LBC),
};

int num_law_entries = ARRAY_SIZE(law_table);
