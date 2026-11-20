/* @k10d cls_1056482c_delete @ 0x103a0764
 * name: verified (structural evidence: stores vtable 0x1056482c to *this; heap_free(this) under (param_2 & 1))
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1056482c (vtable 0x1056482c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1056482c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1056482c_delete(cls_1056482c *param_1,uint param_2)

{
  if (param_1 != (cls_1056482c *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105643d0/*ROM*/);
    cls_105b4254_delete((cls_105b4254 *)&param_1->field5_0x8,2);
    reset_vtable_and_free_if_flagged_104968f2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
