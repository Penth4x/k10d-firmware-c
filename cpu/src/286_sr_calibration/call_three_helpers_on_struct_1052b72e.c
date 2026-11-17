/* @k10d call_three_helpers_on_struct_1052b72e @ 0x1052b72e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and its fields, then returns 1.
 * summary:
 *   The function takes a pointer param_1 and two scalar arguments. It calls
 *   call_kernel_with_short_id with param_1+1, then set_parameter_and_value with *param_1,
 *   param_2, the constant 1, and param_3, followed by check_kernel_call_success_10459d88
 *   with param_1+1. It unconditionally returns 1. The callees are not named, so the
 *   specific subsystem role is not determinable from this code alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_three_helpers_on_struct_1052b72e(uint32_t *param_1,uint32_t param_2,uint32_t param_3)

{
  call_kernel_with_short_id(param_1 + 1);
  set_parameter_and_value(*param_1,param_2,1,param_3);
  check_kernel_call_success_10459d88(param_1 + 1);
  return 1;
}
