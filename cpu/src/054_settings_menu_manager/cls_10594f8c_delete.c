/* @k10d cls_10594f8c_delete @ 0x103c0f0c
 * name: verified (structural evidence: stores vtable 0x10594f8c to *this; heap_free(this) under (param_2 & 1))
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10594f8c (vtable 0x10594f8c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10594f8c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10594f8c_delete(cls_10594f8c *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (cls_10594f8c *)0x0) {
    param_1->field_0x10 = (uintptr_t)((void *)0x10594f8c/*ROM*/);
    param_1->field_0x14 = 0x1059501c/*ROM*/;
    (*pcRam10594fb0)((int)&param_1->field_0x0 + (int)sRam10594fac);
    piVar1 = (int *)((uintptr_t)(param_1->field_0x0));
    if (piVar1 != (int *)0x0) {
      (((vtbl_entry*)(*piVar1))[1].fn)((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    free_heap_if_flag_set_1047e5d2(&param_1->field_0x24,2);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x14,0);
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
