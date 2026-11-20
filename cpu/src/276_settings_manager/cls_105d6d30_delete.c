/* @k10d cls_105d6d30_delete @ 0x1051d16c
 * name: verified (structural evidence: stores vtable 0x105d6d30 to *this; heap_free(this) under (param_2 & 1))
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6d30 (vtable 0x105d6d30): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6d30 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6d30_delete(cls_105d6d30 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6d30 *)0x0) {
    param_1->field_0x8 = 0x105d6d30/*ROM*/;
    cls_105b7e2c_delete((cls_105b7e2c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
