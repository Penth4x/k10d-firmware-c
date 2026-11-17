/* @k10d forward_param_to_helper_104a4848 @ 0x104a4848
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Passes param_2 and a value loaded from an object field to write_to_dynamic_array.
 * summary:
 *   The function dereferences param_1 + 0x58, then adds 0x4d4 to that pointer to read a
 *   32-bit value. It calls write_to_dynamic_array with param_2, 0, and the loaded value as
 *   arguments. No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_param_to_helper_104a4848(int param_1,int param_2)

{
  write_to_dynamic_array(param_2,0,*(uint32_t *)(*(int *)(param_1 + 0x58) + 0x4d4));
  return;
}
