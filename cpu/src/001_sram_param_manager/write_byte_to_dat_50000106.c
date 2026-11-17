/* @k10d write_byte_to_dat_50000106 @ 0x100f09e8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Writes the constant 0x80 to the global variable DAT_50000106.
 * summary:
 *   The function performs a single store operation, setting DAT_50000106 to 0x80. No other
 *   memory locations are accessed and no functions are called. The role of DAT_50000106 is
 *   not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x100f0a04) */

void write_byte_to_dat_50000106(void)

{
  DAT_50000106 = 0x80;
  return;
}
