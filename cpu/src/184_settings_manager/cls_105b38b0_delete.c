/* @k10d cls_105b38b0_delete @ 0x104897c2
 * name: verified (structural evidence: stores vtable 0x105b38b0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b38b0 (vtable 0x105b38b0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b38b0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b38b0_delete(cls_105b38b0 *param_1,uint param_2)

{
  if (param_1 != (cls_105b38b0 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b38b0/*ROM*/);
    reset_vtable_and_free_if_owned_1048951e(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
