/* @k10d cls_105b7dfc_delete @ 0x104b06d4
 * name: verified (structural evidence: stores vtable 0x105b7dfc to *this; heap_free(this) under (param_2 & 1))
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7dfc (vtable 0x105b7dfc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7dfc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7dfc_delete(cls_105b7dfc *param_1,uint param_2)

{
  if (param_1 != (cls_105b7dfc *)0x0) {
    param_1->field_0x8 = 0x105b7dfc/*ROM*/;
    cls_105b7e2c_delete((cls_105b7e2c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
