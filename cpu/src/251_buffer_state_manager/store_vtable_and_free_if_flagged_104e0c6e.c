/* @k10d store_vtable_and_free_if_flagged_104e0c6e @ 0x104e0c6e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a vtable pointer into the object and frees it if the low bit of the second
 *   argument is set.
 * summary:
 *   If param_1 is non-NULL, stores the constant 0x105bce40 (a vtable pointer) into the
 *   first word of the object. If the low bit of param_2 is set, it then calls heap_free on
 *   param_1. This matches the C++ operator delete idiom where the vtable is restored before
 *   freeing a heap block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_vtable_and_free_if_flagged_104e0c6e(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bce40/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
