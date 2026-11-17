/* @k10d call_three_helpers_on_struct_1052b8d6 @ 0x1052b8d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Invokes three helper functions on a struct pointer and its second field.
 * summary:
 *   The function takes a pointer to a structure (param_1). It calls
 *   call_kernel_with_short_id with the second field (param_1 + 1), then calls
 *   update_sr_state_machine with the first field (*param_1), and finally calls
 *   check_kernel_call_success_10459d88 with the second field again. The specific roles of
 *   the helpers and the structure are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_three_helpers_on_struct_1052b8d6(uint32_t *param_1)

{
  call_kernel_with_short_id(param_1 + 1);
  update_sr_state_machine(*param_1);
  check_kernel_call_success_10459d88(param_1 + 1);
  return;
}
