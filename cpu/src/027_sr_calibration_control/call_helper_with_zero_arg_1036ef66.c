/* @k10d call_helper_with_zero_arg_1036ef66 @ 0x1036ef66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function, passing the input pointer and a zero constant.
 * summary:
 *   This function is a thin wrapper that calls handle_object_state_transition with param_1
 *   as the first argument and 0 as the second argument. It is called as virtual method slot
 *   3 of class cls_10557f3c. No other operations or side effects are visible in this
 *   function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_zero_arg_1036ef66(int *param_1)

{
  handle_object_state_transition(param_1,0);
  return;
}
