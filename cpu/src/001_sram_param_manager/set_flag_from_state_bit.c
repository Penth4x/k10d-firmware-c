/* @k10d set_flag_from_state_bit @ 0x100f1078
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_flag_from_state_bit(void)

{
  DAT_800480cc/*SDRAM*/ = 2;
  if (((_DAT_800480c4/*SDRAM*/ & 0xfffff) >> 0x10 & 4) == 0) {
    DAT_800480cc/*SDRAM*/ = 0;
  }
  return;
}
