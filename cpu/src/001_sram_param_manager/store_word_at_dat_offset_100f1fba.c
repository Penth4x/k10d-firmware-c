/* @k10d store_word_at_dat_offset_100f1fba @ 0x100f1fba
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void store_word_at_dat_offset_100f1fba(uint16_t param_1)

{
  *(uint16_t *)(_DAT_800482d4/*SDRAM*/ + 0x36) = param_1;
  return;
}
