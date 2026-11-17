/* @k10d invoke_two_virtual_methods_104b31d8 @ 0x104b31d8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104b31d8(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1);
  iVar1 = *(int *)param_1[1];
  (**(code **)(iVar1 + 100))(param_1[1] + (int)*(short *)(iVar1 + 0x60),param_1[4],param_1[5]);
  return;
}
