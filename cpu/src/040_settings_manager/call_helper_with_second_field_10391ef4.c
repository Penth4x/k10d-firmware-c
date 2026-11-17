/* @k10d call_helper_with_second_field_10391ef4 @ 0x10391ef4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 and its second pointer field to forward_params_via_helper_10394686 with
 *   a constant third argument of 1.
 * summary:
 *   The function dereferences the pointer at offset 4 of param_1 and forwards both values,
 *   plus the constant 1, to forward_params_via_helper_10394686. It performs no other
 *   operations and returns void. The role of forward_params_via_helper_10394686 is unknown,
 *   so the specific subsystem cannot be determined.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_10391ef4(void *param_1)

{
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
