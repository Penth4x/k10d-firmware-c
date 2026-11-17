/* @k10d initialize_object_if_null @ 0x104e082e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Checks if the first field of the object is zero and, if so, calls a helper to set it,
 *   then invokes two other methods before returning a value from a fourth call.
 * summary:
 *   The function takes a pointer to an object and checks if the first integer field is 0.
 *   If it is, it calls call_helper_on_field_0x28_104e0bfc with the object pointer; if that
 *   returns non-zero, it calls init_two_pointers_via_helper with the object and 1, then
 *   invoke_virtual_then_call_helper_104e0c0e with the object, and finally returns the
 *   result of dispatch_state_handler called with the object, 2, and 0. If the initial check
 *   fails or the helper returns 0, it returns 0. This appears to be a lazy initialization
 *   or state transition routine for a class object.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_if_null(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if ((*param_1 == 0) && (iVar1 = call_helper_on_field_0x28_104e0bfc((int)param_1), iVar1 != 0)) {
    init_two_pointers_via_helper(param_1,1);
    invoke_virtual_then_call_helper_104e0c0e(param_1);
    uVar2 = dispatch_state_handler(param_1,2,0);
  }
  return uVar2;
}
