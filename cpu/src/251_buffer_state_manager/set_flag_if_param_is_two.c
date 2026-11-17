/* @k10d set_flag_if_param_is_two @ 0x104e09f8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Calls a helper and sets the first word of param_1 to 1 when param_2 equals 2, returning
 *   true in that case.
 * summary:
 *   Checks if param_2 is 2. If so, calls invoke_virtual_on_nested_object with param_1 and
 *   writes 1 to the first element of the param_1 array. Returns a boolean indicating
 *   whether param_2 was 2. The role of invoke_virtual_on_nested_object is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool set_flag_if_param_is_two(uint32_t *param_1,int param_2)

{
  if (param_2 == 2) {
    invoke_virtual_on_nested_object(param_1);
    *param_1 = 1;
  }
  return param_2 == 2;
}
