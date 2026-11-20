/* @k10d reset_state_if_active @ 0x104e0860
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks if the first field of the object is 1, and if so, calls two helper functions and
 *   sets the field to 0.
 * summary:
 *   The function reads the first integer of the object pointed to by param_1. If the value
 *   is 1, it calls init_two_pointers_via_helper with a second argument of 0, then calls
 *   call_subroutine_on_field_0x28, and finally sets the first field to 0. It returns true
 *   if the initial value was 1, false otherwise. The specific roles of the callees are
 *   unknown, but the pattern suggests a state transition or cleanup operation triggered by
 *   a specific state flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool reset_state_if_active(cls_105bce58 *param_1)

{
  bool bVar1;
  
  bVar1 = param_1->field_0x0 == 1;
  if (bVar1) {
    init_two_pointers_via_helper(param_1,0);
    call_subroutine_on_field_0x28(param_1);
    param_1->field_0x0 = 0;
  }
  return bVar1;
}
