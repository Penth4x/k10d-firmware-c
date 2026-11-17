/* @k10d call_three_helpers_on_struct_1052b7f2 @ 0x1052b7f2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and a second parameter in a fixed
 *   sequence.
 * summary:
 *   The function takes a pointer to a 4-byte-aligned struct (param_1) and an undefined4
 *   value (param_2). It calls call_kernel_with_short_id with param_1+1, then
 *   call_helper_with_offset_c_1048f6fa with *param_1 and param_2, and finally
 *   check_kernel_call_success_10459d88 with param_1+1. The specific roles of the callees
 *   are unknown, so the operation is described mechanically as a sequence of three calls on
 *   the provided arguments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_struct_1052b7f2(uint32_t *param_1,uint32_t param_2)

{
  call_kernel_with_short_id(param_1 + 1);
  call_helper_with_offset_c_1048f6fa(*param_1,param_2);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
