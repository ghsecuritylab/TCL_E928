

#ifndef _LEON3_ASI_H
#define _LEON3_ASI_H

#define ASI_CACHEMISS		0x01	/* Force D-Cache miss on load (lda) */
#define ASI_M_FLUSH_PROBE	0x03	/* MMU Flush/Probe */
#define ASI_IFLUSH		0x10	/* Flush I-Cache */
#define ASI_DFLUSH		0x11	/* Flush D-Cache */
#define ASI_BYPASS		0x1c	/* Bypass MMU (Physical address) */
#define ASI_MMUFLUSH		0x18	/* FLUSH TLB */
#define ASI_M_MMUREGS		0x19	/* READ/Write MMU Registers */

#endif	/* _LEON3_ASI_H */
