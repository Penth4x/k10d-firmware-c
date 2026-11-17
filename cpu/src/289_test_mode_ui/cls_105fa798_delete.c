/* @k10d cls_105fa798_delete @ 0x1052e63e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 289_test_mode_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105fa798: resets vtable and frees the object when the
 *   heap flag is set.
 * summary:
 *   Sets the object's vtable pointer to 0x105fa798 (its own class vtable) to mark it as
 *   deleted. If the low bit of param_2 is set, calls heap_free on the object. This is
 *   virtual slot 1 of cls_105fa798, a 4-byte object, and is called by cls_105b6aa0_delete
 *   as part of destroying a member or base subobject.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa798_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105fa798/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
