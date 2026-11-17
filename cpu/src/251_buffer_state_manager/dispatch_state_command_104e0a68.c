/* @k10d dispatch_state_command_104e0a68 @ 0x104e0a68
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_state_command_104e0a68(int *param_1,uint32_t param_2)

{
  uint32_t uVar1;
  
  uVar1 = 2;
  switch(param_2) {
  case 3:
    *param_1 = 0;
    break;
  case 4:
    if (*param_1 == 1) {
      invoke_virtual_on_nested_object(param_1);
      invoke_virtual_then_call_helper_104e0c0e(param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 5:
    if (*param_1 == 1) {
      invoke_virtual_on_nested_object(param_1);
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
    break;
  case 6:
  case 7:
    uVar1 = invoke_virtual_method_and_branch(param_1);
    break;
  case 8:
  case 9:
    uVar1 = invoke_callback_at_offset_0x18(param_1);
  }
  return uVar1;
}
