/* @k10d reset_vtable_and_free_if_flagged_104b2852 @ 0x104b2852
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Overwrites the object's vtable pointer with 0x105b7ee0 and frees the object when the
 *   low bit of param_2 is set.
 * summary:
 *   This is virtual slot 1 of class cls_105b7ee0. It null-checks param_1, writes the class
 *   vtable address 0x105b7ee0 into the object's first word, and calls heap_free on the
 *   object if (param_2 & 1) is non-zero. It is invoked by the deleting destructors of
 *   several unrelated classes, suggesting it is a shared base-class cleanup routine that
 *   resets the vtable before conditional deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_flagged_104b2852(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105b7ee0/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
