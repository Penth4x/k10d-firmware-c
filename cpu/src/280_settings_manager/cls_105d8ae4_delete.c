/* @k10d cls_105d8ae4_delete @ 0x1052214e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105d8ae4: resets the vtable and frees the object when
 *   the heap flag bit0 is set.
 * summary:
 *   Sets the object's first word to its own vtable address 0x105d8ae4, then calls heap_free
 *   on the object if param_2 bit0 is set. This matches the standard Cfront deleting-
 *   destructor idiom (store vtable, free if heap-allocated). It is virtual slot 1 of
 *   cls_105d8ae4 and is invoked by the deleting destructor of cls_105b7994, indicating
 *   cls_105d8ae4 is a base class of cls_105b7994.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d8ae4_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d8ae4/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
