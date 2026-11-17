/* @k10d set_bit_2_in_dat_800482d4_100f1d40 @ 0x100f1d40
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 2 of a 16-bit field at offset 0x2c in DAT_800482d4 based on the low
 *   bit of param_1.
 * summary:
 *   The function reads a 16-bit value from DAT_800482d4 + 0x2c, masks out bit 2, and sets
 *   it if the least significant bit of param_1 is 1. It then writes the modified value back
 *   to the same location. No other memory locations are accessed and no callees are
 *   invoked. The role of DAT_800482d4 is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_2_in_dat_800482d4_100f1d40(ushort param_1)

{
  *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) =
       *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) & 0xfffb | (param_1 & 1) << 2;
  return;
}
