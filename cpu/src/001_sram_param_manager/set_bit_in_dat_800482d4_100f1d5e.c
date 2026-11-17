/* @k10d set_bit_in_dat_800482d4_100f1d5e @ 0x100f1d5e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_bit_in_dat_800482d4_100f1d5e(byte param_1)

{
  *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x29) = *(byte *)(_DAT_800482d4/*SDRAM*/ + 0x29) & 0xfe | param_1 & 1;
  return;
}
