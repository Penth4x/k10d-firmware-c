/* @k10d cls_105b57f4_delete @ 0x1049b36c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b57f4: resets the vtable and frees the object when
 *   the flag bit is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105b57f4 (its own class vtable) to mark it as
 *   being destroyed. If param_2 has bit 0 set, it calls heap_free on the object pointer.
 *   This is virtual slot 1 of cls_105b57f4, which has a 4-byte object size (just the vtable
 *   pointer).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b57f4_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b57f4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
