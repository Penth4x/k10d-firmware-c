/* @k10d dispatch_virtual_method_on_subobject_103b9334 @ 0x103b9334
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 053_settings_context_mgr (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_subobject_103b9334(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
  iVar2 = (**(code **)(iVar2 + 0x84))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x80));
  if (iVar2 == 0) {
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
    uVar1 = (**(code **)(iVar2 + 100))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x60));
    iVar2 = *(int *)(*(int *)(param_1 + 0x50) + 0x10);
    (**(code **)(iVar2 + 0x6c))(*(int *)(param_1 + 0x50) + (int)*(short *)(iVar2 + 0x68),0);
    uVar1 = lookup_value_by_code(param_1,uVar1);
    call_helper_with_0x50000(param_1,uVar1);
  }
  return;
}
