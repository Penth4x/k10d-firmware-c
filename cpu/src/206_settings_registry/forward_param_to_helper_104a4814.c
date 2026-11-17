/* @k10d forward_param_to_helper_104a4814 @ 0x104a4814
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a value from param_1's structure to write_to_dynamic_array.
 * summary:
 *   The function extracts a 32-bit value from the object pointed to by param_1 (at offset
 *   0x18 of the pointer stored at offset 8) and passes it along with param_2 to
 *   write_to_dynamic_array. It acts as a thin wrapper or adapter for the callee. No other
 *   operations or side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_104a4814(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(param_1 + 8) + 0x18));
  return;
}
