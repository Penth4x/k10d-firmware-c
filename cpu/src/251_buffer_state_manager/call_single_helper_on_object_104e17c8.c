/* @k10d call_single_helper_on_object_104e17c8 @ 0x104e17c8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function using the first argument as its parameter.
 * summary:
 *   This function is a thin wrapper that passes its sole argument directly to
 *   copy_field_and_clear_offset and returns. It is identified as a virtual method shared by
 *   four vtable slots, likely serving as a default or inherited implementation. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_single_helper_on_object_104e17c8(uint32_t *param_1)

{
  copy_field_and_clear_offset(*param_1);
  return;
}
