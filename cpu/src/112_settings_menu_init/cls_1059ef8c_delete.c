/* @k10d cls_1059ef8c_delete @ 0x1042f42c
 * name: verified (structural evidence: stores vtable 0x1059ef8c to *this; heap_free(this) under (param_2 & 1))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059ef8c (vtable 0x1059ef8c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059ef8c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059ef8c_delete(cls_1059ef8c *param_1,uint param_2)

{
  if (param_1 != (cls_1059ef8c *)0x0) {
    param_1->field_0x10 = 0x1059ef8c/*ROM*/;
    cls_1059ef7c_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
