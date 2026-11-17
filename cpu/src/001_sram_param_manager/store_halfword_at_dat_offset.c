/* @k10d store_halfword_at_dat_offset @ 0x100f1fac
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_halfword_at_dat_offset(uint16_t param_1)

{
  *(uint16_t *)(_DAT_800482d4/*SDRAM*/ + 0x32) = param_1;
  return;
}
