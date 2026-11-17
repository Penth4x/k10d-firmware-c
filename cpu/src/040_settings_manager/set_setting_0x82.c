/* @k10d set_setting_0x82 @ 0x1039d3b2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 040_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_setting_0x82(int *param_1,uint32_t param_2)

{
  setting_set(*param_1,0x82,param_2);
  return;
}
