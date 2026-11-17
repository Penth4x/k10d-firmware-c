/* @k10d dispatch_virtual_then_conditional_call_104a1268 @ 0x104a1268
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_then_conditional_call_104a1268(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  (**(code **)(param_1[1] + 0x3c))((int)*(short *)(param_1[1] + 0x38) + (int)param_1);
  iVar1 = call_helper_and_branch_on_result(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(param_1[1] + 0x44))((int)*(short *)(param_1[1] + 0x40) + (int)param_1);
  }
  return uVar2;
}
