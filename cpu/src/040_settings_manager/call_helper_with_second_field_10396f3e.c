/* @k10d call_helper_with_second_field_10396f3e @ 0x10396f3e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_1 and its second pointer field to forward_params_via_helper_10394686 with
 *   a constant third argument of 1.
 * summary:
 *   The function dereferences the pointer at offset 4 of param_1 and forwards both values,
 *   plus the literal 1, to forward_params_via_helper_10394686. No other side effects or
 *   state changes are visible in the pseudocode. The caller is
 *   init_object_and_dispatch_10396e8c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_helper_with_second_field_10396f3e(void *param_1)

{
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
