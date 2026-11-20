/* @k10d cls_105b609c_delete @ 0x104a1808
 * name: verified (structural evidence: stores vtable 0x105b609c to *this; heap_free(this) under (param_2 & 1))
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b609c (vtable 0x105b609c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b609c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b609c_delete(cls_105b609c *param_1,uint param_2)

{
  if (param_1 != (cls_105b609c *)0x0) {
    param_1->field_0x0 = 0x105b609c/*ROM*/;
    cls_105b5d94_delete((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
