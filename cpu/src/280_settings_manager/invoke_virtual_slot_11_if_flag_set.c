/* @k10d invoke_virtual_slot_11_if_flag_set @ 0x10521d10
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t invoke_virtual_slot_11_if_flag_set(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1[1] == 1) || (param_1[1] == 3)) {
    param_1[1] = 3;
    uVar1 = (**(code **)(param_1[3] + 0x5c))((int)*(short *)(param_1[3] + 0x58) + (int)param_1);
    *param_1 = uVar1;
  }
  return *param_1;
}
