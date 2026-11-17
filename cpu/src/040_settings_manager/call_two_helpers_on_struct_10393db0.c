/* @k10d call_two_helpers_on_struct_10393db0 @ 0x10393db0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Invokes two helper functions using fields at offsets 8 and 4 of the structure pointed
 *   to by param_1.
 * summary:
 *   The function takes a pointer to a structure and calls
 *   call_two_helpers_with_struct_fields_1039a016 with the value at offset 8. It then calls
 *   forward_params_via_helper_10394686 with the structure pointer, the value at offset 4,
 *   and the constant 1. No other operations are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void call_two_helpers_on_struct_10393db0(int param_1)

{
  call_two_helpers_with_struct_fields_1039a016(param_1 + 8);
  forward_params_via_helper_10394686((void *)param_1,*(int **)(param_1 + 4),1);
  return;
}
