/* @k10d forward_param_to_helper_104a482e @ 0x104a482e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a value loaded from an object field to a helper function.
 * summary:
 *   The function loads a 32-bit value from the memory address at offset 0x30 of the object
 *   pointed to by *(param_1 + 8). It then calls write_to_dynamic_array with param_2, 0, and
 *   the loaded value. No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_104a482e(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(param_1 + 8) + 0x30));
  return;
}
