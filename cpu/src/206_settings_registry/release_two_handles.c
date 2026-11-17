/* @k10d release_two_handles @ 0x104a38cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Calls a single helper twice on two consecutive pointer fields of a struct.
 * summary:
 *   Reads the 32-bit values at offsets 0x68 and 0x6c of the object pointed to by param_1
 *   and passes each to heap_free_2. The helper's role is unknown, so the operation is
 *   described mechanically as two sequential calls on adjacent fields. No other side
 *   effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void release_two_handles(int param_1)

{
  heap_free_2(*(int *)(param_1 + 0x68));
  heap_free_2(*(int *)(param_1 + 0x6c));
  return;
}
