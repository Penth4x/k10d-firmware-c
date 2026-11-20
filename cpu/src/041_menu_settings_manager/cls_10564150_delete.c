/* @k10d cls_10564150_delete @ 0x1039d7de
 * name: verified (structural evidence: stores vtable 0x10564150 to *this; heap_free(this) under (param_2 & 1))
 * unit: 041_menu_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10564150 (vtable 0x10564150): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10564150 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10564150_delete(cls_10564150 *param_1,uint param_2)

{
  if (param_1 != (cls_10564150 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x10564150/*ROM*/);
    param_1->field_0x14 = 0x105641c0/*ROM*/;
    param_1->field_0x18 = 0x105641d8/*ROM*/;
    param_1->field_0x1c = 0x105641f8/*ROM*/;
    param_1->field_0x24 = 0x10564210/*ROM*/;
    param_1->field_0x28 = 0x10564228/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0xcc,2);
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x28,0);
    cls_105a2a8c_delete(&param_1->field_0x20,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x1c,0);
    reset_vtable_and_free_if_owned_104281c2(&param_1->field_0x18,0);
    cls_105a2c1c_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
