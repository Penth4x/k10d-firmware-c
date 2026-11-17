/* @k10d invoke_virtual_slot_5_104ad21e @ 0x104ad21e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_5_104ad21e(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((0 < param_2) && (param_2 <= param_1[1])) {
    uVar1 = (**(code **)(*param_1 + 0x2c))((int)*(short *)(*param_1 + 0x28) + (int)param_1);
    param_1[2] = param_2;
  }
  return uVar1;
}
