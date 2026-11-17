/* @k10d handle_state_transition_request @ 0x104af910
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 213_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t handle_state_transition_request(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (param_2 == 0) {
    *param_1 = 0;
    uVar1 = 3;
  }
  else if (param_2 == 2) {
    if (*param_1 == 1) {
      invoke_virtual_update_callback(param_1[3]);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  else if (param_2 == 0x40) {
    if (*param_1 == 1) {
      invoke_virtual_update_callback(param_1[3]);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}
