/* @k10d cls_105b6320_delete @ 0x104a2980
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b6320: resets the vtable pointer and frees the
 *   object if the heap flag is set.
 * summary:
 *   Sets the object's vtable pointer (offset 4) to 0x105b6320 to mark it as deleted. If
 *   param_1 is non-null and the low bit of param_2 is set, it calls heap_free to release
 *   the object. It is the virtual slot 1 (deleting destructor) of class cls_105b6320 and is
 *   called by the deleting destructors of derived classes cls_105b6174, cls_105b6554, and
 *   cls_105d6c2c.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b6320_delete(int param_1,uint param_2)

{
  if ((param_1 != 0) && (*(uint32_t *)(param_1 + 4) = 0x105b6320/*ROM*/, (param_2 & 1) != 0)) {
    heap_free(param_1);
  }
  return;
}
