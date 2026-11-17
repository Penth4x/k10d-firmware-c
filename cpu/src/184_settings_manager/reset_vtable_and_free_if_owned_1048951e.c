/* @k10d reset_vtable_and_free_if_owned_1048951e @ 0x1048951e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Nulls the object's vtable pointer and frees the heap block if the ownership flag is
 *   set.
 * summary:
 *   Takes an object pointer and a flags word. If the pointer is non-NULL, it overwrites the
 *   first word (the vtable pointer) with the address 0x105b3830. If bit 0 of the flags word
 *   is set, it calls heap_free on the object. This is the virtual method at slot 1 of class
 *   cls_105b3830 and is called by the deleting destructors of several derived classes to
 *   finalize the object before deallocation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void reset_vtable_and_free_if_owned_1048951e(uint32_t *param_1,uint param_2)

{
  if ((param_1 != (uint32_t *)0x0) && (*param_1 = (uint32_t)&DAT_105b3830/*ROM*/, (param_2 & 1) != 0)) {
    heap_free((int)param_1);
  }
  return;
}
