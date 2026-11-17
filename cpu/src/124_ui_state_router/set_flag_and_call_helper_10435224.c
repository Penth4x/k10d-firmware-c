/* @k10d set_flag_and_call_helper_10435224 @ 0x10435224
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 124_ui_state_router (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_flag_and_call_helper_10435224(int param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_2 == 0) {
    uVar1 = 2;
  }
  *(uint32_t *)(param_1 + 0x40) = uVar1;
  select_and_call_helper(*(int **)(param_1 + 0x5c),param_2,2);
  return;
}
