/* @k10d check_bit0_of_dat_800482f0 @ 0x100f1e76
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Returns true if bit 0 of the 32-bit value at DAT_800482d4+0x24 is set.
 * summary:
 *   Reads a 32-bit word from the SDRAM address DAT_800482d4 + 0x24 and tests its least
 *   significant bit. Returns a boolean indicating whether that bit is 1. No other side
 *   effects or callees are involved.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool check_bit0_of_dat_800482f0(void)

{
  return (*(uint *)(_DAT_800482d4/*SDRAM*/ + 0x24) & 1) == 1;
}
