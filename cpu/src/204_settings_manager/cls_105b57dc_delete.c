/* @k10d cls_105b57dc_delete @ 0x1049b32c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b57dc: resets the vtable and frees the object when
 *   the heap flag bit0 is set.
 * summary:
 *   Writes the vtable pointer 0x105b57dc back into the object header (param_1) to mark it
 *   deleted. If param_2 bit0 is set, calls heap_free on the object. Called by the deleting
 *   destructors of cls_105b5834 and cls_1061e22c, indicating it is the base-class deleting
 *   destructor for cls_105b57dc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b57dc_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b57dc/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
