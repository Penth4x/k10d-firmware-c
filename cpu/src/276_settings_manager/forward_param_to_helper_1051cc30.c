/* @k10d forward_param_to_helper_1051cc30 @ 0x1051cc30
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a value from param_3+0x30 to a helper function.
 * summary:
 *   The function calls write_to_dynamic_array with param_2 as the first argument, 0 as the
 *   second, and the 4-byte value at offset 0x30 of param_3 as the third. It acts as a thin
 *   wrapper or thunk that extracts a specific field from a structure pointed to by param_3
 *   and forwards it along with param_2 to the callee. No other operations or side effects
 *   are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_1051cc30(uint32_t param_1,void *param_2,int param_3)

{
  write_to_dynamic_array((int)param_2,0,*(uint32_t *)(param_3 + 0x30));
  return;
}
