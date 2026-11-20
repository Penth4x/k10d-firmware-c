/* @k10d cls_10597e5c_delete @ 0x103fdc12
 * name: verified (structural evidence: stores vtable 0x10597e5c to *this; heap_free(this) under (param_2 & 1))
 * unit: 089_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10597e5c (vtable 0x10597e5c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10597e5c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10597e5c_delete(cls_10597e5c *param_1,uint param_2)

{
  if (param_1 != (cls_10597e5c *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x10597e5c/*ROM*/);
    cls_105d6d48_delete((cls_105d6d48 *)&param_1->field_0x4,2);
    reset_vtable_and_free_if_owned_10428142(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
