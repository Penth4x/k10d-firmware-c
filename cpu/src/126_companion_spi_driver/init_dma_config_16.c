/* @k10d init_dma_config_16 @ 0x10439534
 * name: earlier (carried from an earlier Ghidra session, not re-verified; the model, reading only this decompile, proposed initialize_dma_control_registers)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Writes specific 32-bit values to a block of memory at 0x6b000000 and clears four low-
 *   address globals.
 * summary:
 *   The function sets four global variables at addresses 0x38-0x41 to zero. It then writes
 *   a sequence of seven 32-bit constants (0x7000000, 0x3000000, 0x1f000000) to consecutive
 *   4-byte offsets starting at 0x6b000000. The address 0x6b000000 is not listed in the Tier
 *   1 memory map, so the specific hardware block is unknown, but the pattern suggests
 *   initializing DMA or peripheral control registers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void init_dma_config_16(void)

{
                    /* Purpose: Initialize DMA config (variant 16). Sets up DMA buffer pointers and
                       control registers.
                       Returns: void. */
  DAT_00000041 = 0;
  DAT_00000040 = 0;
  DAT_00000039 = 0;
  DAT_00000038 = 0;
  _DAT_6b000000 = 0x7000000;
  _DAT_6b000004 = 0x3000000;
  _DAT_6b000008 = 0x3000000;
  _DAT_6b00000c = 0x7000000;
  _DAT_6b000010 = 0x1f000000;
  _DAT_6b000014 = 0x7000000;
  return;
}
