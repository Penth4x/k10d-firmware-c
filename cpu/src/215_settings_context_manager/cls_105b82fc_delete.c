/* @k10d cls_105b82fc_delete @ 0x104b47b6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105b82fc: resets the vtable and frees the object when
 *   the heap flag bit 0 is set.
 * summary:
 *   Sets the object's first word to its own vtable address 0x105b82fc, then calls heap_free
 *   on the object if param_2 bit 0 is set. This matches the standard C++ deleting-
 *   destructor idiom (store vtable, free if heap-allocated). It is virtual slot 10 of
 *   cls_105b82fc and is invoked by the deleting destructor of cls_105b7f68.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b82fc_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b82fc/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
