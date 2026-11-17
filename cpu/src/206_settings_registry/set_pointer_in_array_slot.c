/* @k10d set_pointer_in_array_slot @ 0x104a2a66
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Stores a pointer into a 4-element array at a validated index.
 * summary:
 *   Checks that param_2 is between 0 and 3 inclusive. If valid, writes param_3 to the
 *   memory location at param_1 + 8 + param_2 * 4. No callees are invoked. The role of the
 *   specific array or pointer type is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_pointer_in_array_slot(int param_1,int param_2,void *param_3)

{
  if ((-1 < param_2) && (param_2 < 4)) {
    *(void **)(param_1 + 8 + param_2 * 4) = param_3;
  }
  return;
}
