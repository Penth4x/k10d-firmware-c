/* @k10d cls_105b7f08_delete @ 0x104b2892
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b7f08: resets the vtable pointer and frees the
 *   object when the heap flag bit 0 is set.
 * summary:
 *   Sets the first word of the object to the vtable address 0x105b7f08 (marking it
 *   deleted). If param_2 bit 0 is set, calls heap_free on the object. Called by the
 *   deleting destructors of cls_105b7f20, cls_105b7f38, and cls_105b7f50, indicating
 *   cls_105b7f08 is a base class. The object is 4 bytes (just the vtable pointer).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7f08_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b7f08/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
