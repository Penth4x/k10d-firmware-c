/* @k10d invoke_virtual_slot_10_on_state @ 0x10521cca
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 280_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_virtual_slot_10_on_state(int *param_1,int param_2)

{
  int iVar1;
  
  if ((((param_1[1] == 1) || (param_1[1] == 2)) && ((*param_1 == param_2 || (*param_1 == 0)))) &&
     (iVar1 = (**(code **)(param_1[3] + 0x54))
                        ((int)*(short *)(param_1[3] + 0x50) + (int)param_1,param_2), iVar1 != 0)) {
    *param_1 = param_2;
    param_1[1] = 3;
  }
  return;
}
