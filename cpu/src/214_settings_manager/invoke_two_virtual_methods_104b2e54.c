/* @k10d invoke_two_virtual_methods_104b2e54 @ 0x104b2e54
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 214_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void invoke_two_virtual_methods_104b2e54(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x14))((int)*(short *)(*param_1 + 0x10) + (int)param_1);
  iVar1 = *(int *)param_1[1];
  (**(code **)(iVar1 + 0x4c))(param_1[1] + (int)*(short *)(iVar1 + 0x48),param_1[4],param_1[5]);
  return;
}
