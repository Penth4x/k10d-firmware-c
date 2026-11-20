/* @k10d cls_10599b14_delete @ 0x1040a1ba
 * name: verified (structural evidence: stores vtable 0x10599b14 to *this; heap_free(this) under (param_2 & 1))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10599b14 (vtable 0x10599b14): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10599b14 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10599b14_delete(cls_10599b14 *param_1,uint param_2)

{
  if (param_1 != (cls_10599b14 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x10599b14/*ROM*/);
    param_1->field_0x14 = 0x10599b34/*ROM*/;
    free_heap_if_flag_set_1047e380(param_1 + 1,2);
    cls_105a2af8_delete(&param_1->field_0x60,2);
    free_heap_if_flagged_104df482(&param_1->field_0x48,2);
    cls_105a2af8_delete(&param_1->field_0x18,2);
    cls_105a2c1c_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
