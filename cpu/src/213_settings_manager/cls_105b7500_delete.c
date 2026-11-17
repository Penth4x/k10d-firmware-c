/* @k10d cls_105b7500_delete @ 0x104ad758
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b7500: resets the vtable and frees the object when
 *   the heap flag is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105b7500 (the class's own vtable) to mark it as
 *   deleted. If the low bit of param_2 is set, calls heap_free to release the object. This
 *   is virtual slot 1 of cls_105b7500, consistent with the Cfront deleting destructor
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7500_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b7500/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
