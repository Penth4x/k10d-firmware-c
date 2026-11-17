/* @k10d init_dma_status_regs @ 0x10439612
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed write_three_mmio_registers)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes specific constant values to three distinct MMIO addresses.
 * summary:
 *   The function performs three direct memory writes to addresses 0x40040000, 0x400403f2,
 *   and 0x40060000. It sets 0x40040000 to 0x8000, 0x400403f2 to 0, and 0x40060000 to 0. No
 *   other operations or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_dma_status_regs(void)

{
                    /* Purpose: Initialize DMA status registers. Sets 0x40040000=0x8000 (status
                       flag), clears others.
                       Returns: void. */
  _DAT_40040000 = 0x8000;
  _DAT_400403f2 = 0;
  _DAT_40060000/*KEYPAD*/ = 0;
  return;
}
