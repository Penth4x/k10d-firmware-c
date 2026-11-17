/* @k10d read_word_at_dat_offset_100f1f9e @ 0x100f1f9e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t read_word_at_dat_offset_100f1f9e(void)

{
  return *(uint16_t *)(_DAT_800482d4/*SDRAM*/ + 0x32);
}
