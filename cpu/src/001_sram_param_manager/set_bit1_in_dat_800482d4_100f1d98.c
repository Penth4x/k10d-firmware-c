/* @k10d set_bit1_in_dat_800482d4_100f1d98 @ 0x100f1d98
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 1 of the byte at offset 0x28 in the structure at DAT_800482d4 based
 *   on param_1.
 * summary:
 *   The function performs a read-modify-write on a single byte in SDRAM. It clears bit 1
 *   (mask 0xfd) and sets it if the least significant bit of param_1 is 1. No other bits in
 *   the byte are modified. The role of the structure at DAT_800482d4 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit1_in_dat_800482d4_100f1d98(byte param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x28) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x28) & 0xfd | (param_1 & 1) << 1;
  return;
}
