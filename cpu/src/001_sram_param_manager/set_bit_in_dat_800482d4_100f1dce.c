/* @k10d set_bit_in_dat_800482d4_100f1dce @ 0x100f1dce
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 0 of the 16-bit value at DAT_800482d4+0x2c based on param_1.
 * summary:
 *   The function performs a read-modify-write on a 16-bit field in SDRAM (0x800482d4+0x2c).
 *   It masks out bit 0 and ORs in the least significant bit of param_1, leaving all other
 *   bits unchanged. No other memory locations are accessed and no callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_in_dat_800482d4_100f1dce(ushort param_1)

{
  *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) = *(ushort *)(_DAT_800482d4/*SDRAM*/ + 0x2c) & 0xfffe | param_1 & 1;
  return;
}
