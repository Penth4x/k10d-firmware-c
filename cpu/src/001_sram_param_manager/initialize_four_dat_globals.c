/* @k10d initialize_four_dat_globals @ 0x100f022c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 001_sram_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void initialize_four_dat_globals(void)

{
  _DAT_00000518 = 0x20000000;
  _DAT_0000051c = 0x1fc0000;
  _DAT_00000520 = 0x1f000000;
  _DAT_00000530 = 0x73200000;
  return;
}
