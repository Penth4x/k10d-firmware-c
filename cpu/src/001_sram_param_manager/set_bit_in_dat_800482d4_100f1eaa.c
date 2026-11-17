/* @k10d set_bit_in_dat_800482d4_100f1eaa @ 0x100f1eaa
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 0 of the byte at offset 0x2f in the DAT_800482d4 structure.
 * summary:
 *   The function performs a read-modify-write on a single byte located at _DAT_800482d4 +
 *   0x2f. It masks out bit 0 and ORs in the least significant bit of param_1, effectively
 *   setting or clearing that specific flag. No other memory locations are accessed and no
 *   callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_in_dat_800482d4_100f1eaa(byte param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) & 0xfe | param_1 & 1;
  return;
}
