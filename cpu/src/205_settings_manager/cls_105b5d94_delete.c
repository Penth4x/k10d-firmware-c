/* @k10d cls_105b5d94_delete @ 0x104a173c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b5d94: resets the vtable pointer and frees the
 *   object when the heap flag is set.
 * summary:
 *   Sets the object's first word to vtable 0x105b5d94, then calls heap_free on the object
 *   if param_2 bit 0 is set. Matches the standard Cfront deleting-destructor idiom (store
 *   vtable, free if flags&1). Called by the deleting destructors of cls_105b5f18 and
 *   cls_105b609c, consistent with cls_105b5d94 being a base class.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5d94_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b5d94/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
