/* @k10d set_bit1_in_dat_800482d4_100f1eec @ 0x100f1eec
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * purpose:
 *   Sets or clears bit 1 of the byte at offset 0x2f in DAT_800482d4 based on param_1.
 * summary:
 *   The function reads the byte at _DAT_800482d4 + 0x2f, masks out bit 1 (0x02), and sets
 *   it if param_1 is non-zero. It then writes the result back to the same location. No
 *   other side effects or callees are present. The role of DAT_800482d4 is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit1_in_dat_800482d4_100f1eec(int param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x2f) & 0xfd | (param_1 != 0) << 1;
  return;
}
