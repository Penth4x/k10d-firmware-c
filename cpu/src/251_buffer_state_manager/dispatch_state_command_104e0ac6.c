/* @k10d dispatch_state_command_104e0ac6 @ 0x104e0ac6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_command_104e0ac6(int *param_1,int param_2)

{
  if (param_2 == 3) {
    *param_1 = 1;
    return 3;
  }
  if (param_2 == 7) {
    if (*param_1 != 1) {
      return 0;
    }
    dispatch_event_to_object_104e0e92(param_1[6]);
  }
  else if (param_2 == 4) {
    if (*param_1 != 1) {
      return 0;
    }
    invoke_virtual_then_call_helper_104e0c0e(param_1);
  }
  else {
    if (param_2 != 5) {
      return 1;
    }
    if (*param_1 != 1) {
      return 0;
    }
  }
  invoke_virtual_on_nested_object(param_1);
  return 1;
}
