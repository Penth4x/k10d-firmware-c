/* @k10d cls_105d7118_delete @ 0x10520456
 * name: verified (structural evidence: stores vtable 0x105d7118 to *this; heap_free(this) under (param_2 & 1))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d7118 (vtable 0x105d7118): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d7118 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d7118_delete(cls_105d7118 *param_1,uint param_2)

{
  if (param_1 != (cls_105d7118 *)0x0) {
    param_1->field_0x0 = 0x105d7118/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    cls_105b81b0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
