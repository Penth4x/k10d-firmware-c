/* @k10d set_vtable_and_free_if_flagged @ 0x104e1032
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Writes a fixed vtable pointer into the object and frees it when the low bit of param_2
 *   is set.
 * summary:
 *   If param_1 is non-NULL, stores the constant 0x105bd168 (a vtable pointer) into the
 *   object's first word. If the low bit of param_2 is set, calls heap_free on the object.
 *   This matches the C++ deleting-destructor idiom of storing a vtable then freeing when
 *   the flag indicates a heap allocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void set_vtable_and_free_if_flagged(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bd168/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
