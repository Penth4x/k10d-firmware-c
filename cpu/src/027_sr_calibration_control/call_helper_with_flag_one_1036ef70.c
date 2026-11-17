/* @k10d call_helper_with_flag_one_1036ef70 @ 0x1036ef70
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 027_sr_calibration_control (unit names are model-proposed)
 * purpose:
 *   Invokes a single helper function, passing the input pointer and the constant 1.
 * summary:
 *   This function is a thin wrapper that calls handle_object_state_transition with the
 *   provided pointer argument and the integer literal 1. It is called as virtual method
 *   slot 3 of class cls_10557f3c. No other operations or side effects are visible in the
 *   pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_flag_one_1036ef70(int *param_1)

{
  handle_object_state_transition(param_1,1);
  return;
}
