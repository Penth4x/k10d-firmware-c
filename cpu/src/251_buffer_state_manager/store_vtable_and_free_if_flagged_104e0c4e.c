/* @k10d store_vtable_and_free_if_flagged_104e0c4e @ 0x104e0c4e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer into the object and frees it if the low bit of param_2 is set.
 * summary:
 *   Checks that param_1 is non-NULL, stores the constant 0x105bce28 (a vtable pointer) into
 *   the first word of the object, and if bit 0 of param_2 is set, calls heap_free on the
 *   object. This matches the C++ operator delete idiom where the vtable is restored before
 *   freeing a heap block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_vtable_and_free_if_flagged_104e0c4e(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bce28/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
