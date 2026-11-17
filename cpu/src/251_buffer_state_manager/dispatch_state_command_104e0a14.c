/* @k10d dispatch_state_command_104e0a14 @ 0x104e0a14
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_command_104e0a14(int *param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 3) {
    *param_1 = 0;
    return 1;
  }
  if (param_2 == 4) {
    if (*param_1 == 1) {
      invoke_virtual_on_nested_object(param_1);
      invoke_virtual_then_call_helper_104e0c0e(param_1);
      return 1;
    }
  }
  else {
    if (param_2 != 5) {
      if (param_2 != 6) {
        return 0;
      }
      uVar1 = init_struct_and_call_helpers((int)param_1);
      return uVar1;
    }
    if (*param_1 == 1) {
      invoke_virtual_on_nested_object(param_1);
      return 1;
    }
  }
  return 0;
}
