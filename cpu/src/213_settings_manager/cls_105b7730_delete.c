/* @k10d cls_105b7730_delete @ 0x104ae1f4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b7730: resets the vtable and frees the object when
 *   the heap flag bit0 is set.
 * summary:
 *   Sets the object's vtable pointer (first word) to 0x105b7730, then calls heap_free on
 *   the object if param_2 bit0 is set. This matches the Cfront deleting-destructor idiom
 *   (store vtable, free if flags&1). It is virtual slot 1 of cls_105b7730 and is invoked by
 *   the deleting destructor of cls_105b76e8, indicating it is a base-class deleting
 *   destructor.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7730_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b7730/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
