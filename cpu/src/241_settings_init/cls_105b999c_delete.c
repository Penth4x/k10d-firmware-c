/* @k10d cls_105b999c_delete @ 0x104cf772
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b999c: resets the vtable and frees the object when
 *   the heap flag is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105b999c (its own class vtable) to mark it as
 *   deleted. If the low bit of param_2 is set, calls heap_free to release the object. This
 *   is virtual slot 1 of cls_105b999c, matching the standard C++ deleting destructor
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b999c_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b999c/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
