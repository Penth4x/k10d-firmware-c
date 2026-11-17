/* @k10d dispatch_slot_two_on_flag @ 0x104e080a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_slot_two_on_flag(int *param_1)

{
  if (*param_1 == 1) {
    call_subroutine_on_field_0x28(param_1);
  }
  *(uint32_t *)(param_1[5] + 8) = 0;
  invoke_virtual_then_call_helper_104e0c0e(param_1);
  return;
}
