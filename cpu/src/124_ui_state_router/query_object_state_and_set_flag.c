/* @k10d query_object_state_and_set_flag @ 0x1043529a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 124_ui_state_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t query_object_state_and_set_flag(int param_1,int *param_2)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (param_2 != (int *)0x0) {
    call_kernel_with_short_id((uint32_t *)(param_1 + 0x48));
    iVar1 = (**(code **)(*param_2 + 0x24))((int)*(short *)(*param_2 + 0x20) + (int)param_2,5);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_2 + 0x2c))((int)*(short *)(*param_2 + 0x28) + (int)param_2,5);
      if (iVar1 != 0) {
        *(uint32_t *)(param_1 + 0x44) = 1;
        uVar2 = 1;
      }
    }
    else {
      *(uint32_t *)(param_1 + 0x44) = 2;
      uVar2 = 1;
    }
    check_kernel_call_success_10459d88((uint32_t *)(param_1 + 0x48));
  }
  return uVar2;
}
