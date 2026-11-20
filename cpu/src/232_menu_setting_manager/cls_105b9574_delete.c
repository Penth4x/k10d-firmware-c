/* @k10d cls_105b9574_delete @ 0x104c438a
 * name: verified (structural evidence: stores vtable 0x105b9574 to *this; heap_free(this) under (param_2 & 1))
 * unit: 232_menu_setting_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9574 (vtable 0x105b9574): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9574 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9574_delete(cls_105b9574 *param_1,uint param_2)

{
  if (param_1 != (cls_105b9574 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b9574/*ROM*/);
    param_1->field_0x14 = 0x105b95ac/*ROM*/;
    param_1->field_0x18 = 0x105b95c4/*ROM*/;
    free_heap_if_flagged_1045c402(&param_1->field_0x1e8,2);
    free_heap_if_flagged_1045c402(&param_1->field_0xc4,2);
    free_heap_if_flagged_1045c402(&param_1->field_0x54,2);
    cls_105a2af8_delete(&param_1->field_0x34,2);
    cls_1059e288_delete(&param_1->field_0x1c,2);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x18,0);
    cls_105a2c1c_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
