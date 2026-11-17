/* @k10d call_three_helpers_on_struct_1052b9e4 @ 0x1052b9e4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and its second field.
 * summary:
 *   The function takes a pointer to a structure, passes the second field (param_1 + 1) to
 *   call_kernel_with_short_id, passes the first field (*param_1) to
 *   set_display_layer_b_frame_1048f96e, and then passes the second field again to
 *   check_kernel_call_success_10459d88. The specific roles of the helpers and the structure
 *   are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_struct_1052b9e4(int *param_1, uint32_t param_x1)

{
  call_kernel_with_short_id(param_1 + 1);
  set_display_layer_b_frame_1048f96e(*param_1);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
