/* @k10d cls_10596f7c_delete @ 0x103e4938
 * name: verified (structural evidence: stores vtable 0x10596f7c to *this; heap_free(this) under (param_2 & 1))
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10596f7c (vtable 0x10596f7c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10596f7c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10596f7c_delete(cls_10596f7c *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10596f7c *)0x0) {
    param_1->field_0x10 = (uintptr_t)((void *)0x10596f7c/*ROM*/);
    param_1->field_0x14 = 0x10597014/*ROM*/;
    param_1->field_0x1c = 0x1059702c/*ROM*/;
    (*pcRam10596fa0)((int)&param_1->field_0x0 + (int)sRam10596f9c);
    piVar1 = (int *)((uintptr_t)(param_1->field_0x0));
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    free_heap_if_flag_set_1047e5d2(&param_1->field_0x37,2);
    cls_105a2af8_delete(&param_1->field_0x20,2);
    cls_105a2a8c_delete(&param_1->field_0x18,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x14,0);
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
