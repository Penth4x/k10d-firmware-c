/* @k10d clamp_lower_bound @ 0x104732ea
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 167_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int clamp_lower_bound(int param_1,int param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}
