/* @k10d cls_105b9a7c_delete @ 0x104cf8d6
 * name: verified (structural evidence: stores vtable 0x105b9a7c to *this; heap_free(this) under (param_2 & 1))
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9a7c (vtable 0x105b9a7c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9a7c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9a7c_delete(cls_105b9a7c *param_1,uint param_2)

{
  if (param_1 != (cls_105b9a7c *)0x0) {
    param_1->field_0x0 = 0x105b9a7c/*ROM*/;
    cls_105b9a3c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
