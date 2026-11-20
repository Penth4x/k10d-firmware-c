/* @k10d cls_105b9274_delete @ 0x104b790a
 * name: verified (structural evidence: stores vtable 0x105b9274 to *this; heap_free(this) under (param_2 & 1))
 * unit: 221_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9274 (vtable 0x105b9274): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9274 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9274_delete(cls_105b9274 *param_1,uint param_2)

{
  if (param_1 != (cls_105b9274 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b9274/*ROM*/);
    param_1->field_0x4 = 0x105b92b4/*ROM*/;
    param_1->field_0x8 = 0x105b92cc/*ROM*/;
    cls_1059e288_delete(&param_1->field_0x2c,2);
    cls_105a2af8_delete(&param_1->field_0x24,2);
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
