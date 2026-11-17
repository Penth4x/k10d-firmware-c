/* @k10d test_bit_1_of_dat_800482d4 @ 0x100f1e90
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 1 of the integer at DAT_800482d4+0x24 is set.
 * summary:
 *   Reads a 32-bit value from SDRAM at offset 0x24 from DAT_800482d4 and tests bit 1 using
 *   the Ghidra sign-bit idiom (<< 0x1e). No callees are invoked. The role of the underlying
 *   state flag is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool test_bit_1_of_dat_800482d4(void)

{
  return *(int *)(_DAT_800482d4/*SDRAM*/ + 0x24) << 0x1e < 0;
}
