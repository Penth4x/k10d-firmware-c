/* @k10d store_pointer_pair_at_offset @ 0x10393e32
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Writes param_2 to offset 0x74 of the object at param_1, and to offset 0x78 if param_2
 *   differs from param_1.
 * summary:
 *   The function stores the second argument into the first argument's memory at offset
 *   0x74. It conditionally stores the same value at offset 0x78 only if the two arguments
 *   are not equal. No callees are invoked, and the specific role of the object or the
 *   meaning of these offsets is not determinable from the provided pseudocode and brief.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_pointer_pair_at_offset(int param_1,int param_2)

{
  *(int *)(param_1 + 0x74) = param_2;
  if (param_2 != param_1) {
    *(int *)(param_1 + 0x78) = param_2;
  }
  return;
}
