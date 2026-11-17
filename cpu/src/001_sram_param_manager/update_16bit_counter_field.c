/* @k10d update_16bit_counter_field @ 0x100f0f50
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Updates a 16-bit counter field in DAT_800480bc by incrementing a value derived from
 *   DAT_800480a0 and DAT_800480a4.
 * summary:
 *   The function reads two 32-bit globals (DAT_800480a0 and DAT_800480a4), extracts
 *   specific bit fields, combines them into a 16-bit value, increments it, and stores the
 *   result in DAT_800480bc. The bit manipulation involves shifting the lower 2 bits of
 *   DAT_800480a0 left by 10, ORing with the upper 10 bits of DAT_800480a4 (bits 22-31), and
 *   adding 1. The shift amount for the final addition is derived from bits 13-15 of
 *   DAT_800480a4. No callees are present, and the specific camera subsystem role is not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_16bit_counter_field(void)

{
  _DAT_800480bc/*SDRAM*/ =
       ((_DAT_800480a0/*SDRAM*/ & 3) << 10 | _DAT_800480a4/*SDRAM*/ >> 0x16) + 1 <<
       (byte)((_DAT_800480a4/*SDRAM*/ << 0x16) >> 0x1d) + 2;
  return;
}
