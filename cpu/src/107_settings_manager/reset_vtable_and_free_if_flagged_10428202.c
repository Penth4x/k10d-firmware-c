/* @k10d reset_vtable_and_free_if_flagged_10428202 @ 0x10428202
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Nulls the object's vtable pointer and frees the heap block if the low bit of the flags
 *   argument is set.
 * summary:
 *   This is virtual slot 1 of class cls_1059e4b0, a 4-byte object whose sole member is the
 *   vtable pointer. It writes the class vtable address 0x1059e4b0 into the object, then
 *   calls heap_free on the object when param_2 & 1 is true. All callers are verified
 *   deleting destructors of other classes that invoke this as a base-class cleanup step.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_10428202(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x1059e4b0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
