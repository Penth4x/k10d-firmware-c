/* @k10d deallocate_object_if_flagged_104e04fe @ 0x104e04fe
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Stores the class vtable pointer into the object and frees it if the low bit of the
 *   second argument is set.
 * summary:
 *   This is virtual slot 1 of cls_105bca58. It first checks that the object pointer is non-
 *   null, then writes the vtable address 0x105bca58 into the object's first word. If bit 0
 *   of param_2 is set, it calls heap_free on the object. This matches the C++ deleting
 *   destructor idiom where the vtable is restored before freeing the block.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void deallocate_object_if_flagged_104e04fe(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105bca58/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
