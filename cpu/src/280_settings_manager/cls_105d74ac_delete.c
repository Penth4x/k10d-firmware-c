/* @k10d cls_105d74ac_delete @ 0x10521438
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor for class cls_105d74ac: resets the vtable and frees the object when
 *   the heap flag bit0 is set.
 * summary:
 *   Sets the object's first word to the vtable address 0x105d74ac (marking it deleted) and,
 *   if param_2 bit0 is set, calls heap_free on the object. It is virtual slot 1 of
 *   cls_105d74ac and is invoked by the deleting destructor of cls_105bb314, indicating it
 *   is a base-class subobject of that class. No other members are touched, consistent with
 *   the 0x4-byte object size.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d74ac_delete(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = 0x105d74ac/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
