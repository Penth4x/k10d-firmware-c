/* @k10d dispatch_virtual_method_on_subobject_1045ec00 @ 0x1045ec00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_subobject_1045ec00(int param_1,uint32_t param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = **(int **)(param_1 + 0x4c);
  (**(code **)(iVar1 + 0x44))
            ((int)*(int **)(param_1 + 0x4c) + (int)*(short *)(iVar1 + 0x40),param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
