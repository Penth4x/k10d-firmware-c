/* @k10d cls_105b81b0_delete @ 0x104b433c
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for cls_105b81b0: resets vtable and frees the object when the heap
 *   flag is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105b81b0 (its own class vtable) to mark it as
 *   being destroyed. If param_2 bit 0 is set, calls heap_free to release the object. Called
 *   by deleting destructors of several other classes, consistent with a base-class cleanup
 *   pattern.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b81b0_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b81b0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
