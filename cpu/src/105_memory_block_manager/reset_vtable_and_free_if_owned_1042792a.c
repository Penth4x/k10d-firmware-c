/* @k10d reset_vtable_and_free_if_owned_1042792a @ 0x1042792a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 105_memory_block_manager (unit names are model-proposed)
 * purpose:
 *   Resets the object's vtable pointer to 0x1059e380 and frees the heap block when the low
 *   flag bit is set.
 * summary:
 *   This is virtual slot 1 of class cls_1059e380. It nulls/overwrites the first word
 *   (vtable pointer) with the class vtable address 0x1059e380, then calls heap_free on the
 *   object if param_2 & 1 is set. It is invoked by the deleting destructors of several
 *   unrelated classes as a common teardown step for a base/member object of type
 *   cls_1059e380.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_1042792a(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_1059e380/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
