/* @k10d compute_two_derived_values @ 0x1046d19a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 155_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void compute_two_derived_values(void)

{
  uint uVar1;
  
  _DAT_80048764/*SDRAM*/ = _DAT_105a5c18/*ROM*/ - 1;
  uVar1 = _DAT_105a5c18/*ROM*/ - 0x7d2;
  _DAT_80048768/*SDRAM*/ = (uVar1 >> 2) - uVar1 / 100;
  return;
}
