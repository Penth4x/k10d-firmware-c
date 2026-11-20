/* @k10d dispatch_virtual_method_on_object_1045efc2 @ 0x1045efc2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 131_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_virtual_method_on_object_1045efc2(int param_1,uint32_t param_2)

{
  int iVar1;
  
  call_kernel_with_short_id((uint32_t *)(param_1 + 0xa4));
  iVar1 = **(int **)(param_1 + 0x88);
  (((vtbl_entry*)(iVar1))[8].fn)
            ((int)*(int **)(param_1 + 0x88) + (int)((vtbl_entry*)(iVar1))[8].adj,param_2);
  check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0xa4));
  return;
}
