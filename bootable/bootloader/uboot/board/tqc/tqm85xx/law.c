

#include <common.h>
#include <asm/fsl_law.h>
#include <asm/mmu.h>


#ifdef CONFIG_TQM_BIGFLASH
#define LAW_3_SIZE LAW_SIZE_1G
#define LAW_5_SIZE LAW_SIZE_256M
#else
#define LAW_3_SIZE LAW_SIZE_128M
#define LAW_5_SIZE LAW_SIZE_512M
#endif

struct law_entry law_table[] = {
	SET_LAW(CONFIG_SYS_DDR_SDRAM_BASE, LAW_SIZE_2G, LAW_TRGT_IF_DDR),
	SET_LAW(CONFIG_SYS_PCI1_MEM_PHYS, LAW_SIZE_512M, LAW_TRGT_IF_PCI),
	SET_LAW(CONFIG_SYS_LBC_FLASH_BASE, LAW_3_SIZE, LAW_TRGT_IF_LBC),
	SET_LAW(CONFIG_SYS_PCI1_IO_PHYS, LAW_SIZE_16M, LAW_TRGT_IF_PCI),
#ifdef CONFIG_PCIE1
	SET_LAW(CONFIG_SYS_PCIE1_MEM_BASE, LAW_5_SIZE, LAW_TRGT_IF_PCIE_1),
#else /* !CONFIG_PCIE1 */
	SET_LAW(CONFIG_SYS_RIO_MEM_BASE, LAW_5_SIZE, LAW_TRGT_IF_RIO),
#endif /* CONFIG_PCIE1 */
#if defined(CONFIG_CAN_DRIVER) || defined(CONFIG_NAND)
	SET_LAW(CONFIG_SYS_CAN_BASE, LAW_SIZE_16M, LAW_TRGT_IF_LBC),
#endif /* CONFIG_CAN_DRIVER || CONFIG_NAND */
#ifdef CONFIG_PCIE1
	SET_LAW(CONFIG_SYS_PCIE1_IO_BASE, LAW_SIZE_16M, LAW_TRGT_IF_PCIE_1),
#endif /* CONFIG_PCIE */
};

int num_law_entries = ARRAY_SIZE (law_table);