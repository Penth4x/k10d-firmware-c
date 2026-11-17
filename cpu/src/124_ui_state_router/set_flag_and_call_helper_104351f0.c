/* @k10d set_flag_and_call_helper_104351f0 @ 0x104351f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 124_ui_state_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_104351f0(void *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  *(uint32_t *)((int)param_1 + 0x40) = uVar1;
  call_helper_with_flag(*(int **)((int)param_1 + 0x5c),param_2,2);
  return;
}
