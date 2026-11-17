/* @k10d init_object_with_four_calls_10397562 @ 0x10397562
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by calling four helper functions with offsets and parameters
 *   derived from the object pointer.
 * summary:
 *   The function takes a void pointer param_1 and performs a sequence of initialization
 *   steps. It calls init_object_with_two_ids_103975e4 with no arguments, then calls
 *   call_two_helpers_with_struct_fields_1039c416 and a function at 0x1039c3f6 with param_1
 *   + 8. Finally, it calls forward_params_via_helper_10394686 with param_1, the value at
 *   param_1 + 4, and the constant 1. The specific roles of the callees are unknown, but the
 *   pattern suggests object setup or state configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_object_with_four_calls_10397562(void *param_1)

{
  init_object_with_two_ids_103975e4(__frv_reg_unset(4));
  call_two_helpers_with_struct_fields_1039c416((int)param_1 + 8);
  (*(code *)0x1039c3f6/*ROM*/)((int)param_1 + 8,0);
  forward_params_via_helper_10394686(param_1,*(int **)((int)param_1 + 4),1);
  return;
}
