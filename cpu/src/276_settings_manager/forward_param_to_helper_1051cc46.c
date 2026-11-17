/* @k10d forward_param_to_helper_1051cc46 @ 0x1051cc46
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a value from param_3 to a single helper function.
 * summary:
 *   The function extracts a 32-bit value from the memory location at param_3 + 0x18 and
 *   calls write_to_dynamic_array with param_2, 0, and that extracted value. It acts as a
 *   thin wrapper or adapter for the callee. No other operations or side effects are visible
 *   in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1051cc46(uint32_t param_1,void *param_2,int param_3)

{
  write_to_dynamic_array((int)param_2,0,*(uint32_t *)(param_3 + 0x18));
  return;
}
