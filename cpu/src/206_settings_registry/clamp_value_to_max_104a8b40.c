/* @k10d clamp_value_to_max_104a8b40 @ 0x104a8b40
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 206_settings_registry (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint clamp_value_to_max_104a8b40(uint param_1,uint param_2)

{
  if (param_2 <= param_1) {
    param_1 = param_2;
  }
  return param_1;
}
