/* @k10d init_object_with_pointer_and_vcall_104a159c @ 0x104a159c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 205_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_pointer_and_vcall_104a159c(int param_1,int *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  *(int **)(param_1 + 4) = param_2;
  iVar2 = *param_2;
  *(int *)(param_1 + 0xc) = iVar2;
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(iVar2 + 0x10);
  iVar2 = invoke_virtual_method_on_object_104a15f8(__frv_reg_unset(4));
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x44))
                      (*(short *)(*(int *)(param_1 + 0x1c) + 0x40) + param_1);
  }
  return uVar1;
}
