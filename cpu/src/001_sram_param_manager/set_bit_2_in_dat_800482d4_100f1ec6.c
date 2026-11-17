/* @k10d set_bit_2_in_dat_800482d4_100f1ec6 @ 0x100f1ec6
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 2 of the byte at offset 0x2f in DAT_800482d4 based on param_1.
 * summary:
 *   The function performs a read-modify-write on a single byte in SDRAM (0x800482d4 +
 *   0x2f). It masks out bit 2 (0x04) and then sets it if param_1 is non-zero. No other bits
 *   in the byte are modified. The role of DAT_800482d4 is unknown, so the specific
 *   subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_2_in_dat_800482d4_100f1ec6(int param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) & 0xfb | (param_1 != 0) << 2;
  return;
}
