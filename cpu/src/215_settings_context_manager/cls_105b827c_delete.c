/* @k10d cls_105b827c_delete @ 0x104b4776
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b827c: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Sets the object's first word (vtable pointer) to 0x105b827c, then calls heap_free on
 *   the object if param_2 has bit 0 set. This matches the Cfront deleting-destructor idiom
 *   where the vtable is restored before deallocation. It is virtual slot 15 of cls_105b827c
 *   and is invoked by the verified deleting destructor of cls_105b7994.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b827c_delete(cls_105b827c *param_1,uint param_2)

{
  if ((param_1 != (cls_105b827c *)0x0) && (param_1->field_0x0 = 0x105b827c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
