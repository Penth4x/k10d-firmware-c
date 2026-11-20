/* @k10d cls_105b703c_delete @ 0x104aaac4
 * name: verified (structural evidence: stores vtable 0x105b703c to *this; heap_free(this) under (param_2 & 1))
 * unit: 209_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b703c (vtable 0x105b703c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b703c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b703c_delete(cls_105b703c *param_1,uint param_2)

{
  if (param_1 != (cls_105b703c *)0x0) {
    param_1->field_0x10 = 0x105b703c/*ROM*/;
    cls_105b7448_delete((cls_105b7448 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
