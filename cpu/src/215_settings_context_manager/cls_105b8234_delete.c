/* @k10d cls_105b8234_delete @ 0x104b4736
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b8234: resets the vtable pointer and frees the
 *   object when the flag bit is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105b8234 (its own class vtable) to mark it as
 *   deleted. If param_2 has bit 0 set, it calls heap_free on the object. This is virtual
 *   slot 8 of cls_105b8234, which has an object size of 0x4 bytes (just the vtable
 *   pointer).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b8234_delete(cls_105b8234 *param_1,uint param_2)

{
  if ((param_1 != (cls_105b8234 *)0x0) && (param_1->field_0x0 = 0x105b8234/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
