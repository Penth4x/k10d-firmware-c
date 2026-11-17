/* @k10d update_min_max_bounds @ 0x1045bbcc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int update_min_max_bounds(int param_1)

{
  int iVar1;
  
  param_1 = param_1 + _DAT_8000fe44/*SDRAM*/;
  if ((param_1 < 0x19001) && (-1 < param_1)) {
    iVar1 = _DAT_8000fe44/*SDRAM*/ + -0x7ffd0f6c;
    _DAT_8000fe44/*SDRAM*/ = param_1;
    if (_DAT_8000fe48/*SDRAM*/ < param_1) {
      _DAT_8000fe48/*SDRAM*/ = param_1;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}
