/* @k10d init_object_with_pointer_and_virtual_call @ 0x10517f32
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_pointer_and_virtual_call(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  *(int **)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0xc) = *param_2;
  *(uint32_t *)(param_1 + 0x10) = *(uint32_t *)(*param_2 + 0x10);
  iVar1 = invoke_virtual_method_on_object_10517f8c(__frv_reg_unset(4));
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (**(code **)(*(int *)(param_1 + 0x1c) + 0x44))
                      (*(short *)(*(int *)(param_1 + 0x1c) + 0x40) + param_1);
  }
  return uVar2;
}
