/* @k10d cls_105b3e68_delete @ 0x1048dc64
 * name: verified (structural evidence: stores vtable 0x105b3e68 to *this; heap_free(this) under (param_2 & 1))
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3e68 (vtable 0x105b3e68): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3e68 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3e68_delete(cls_105b3e68 *param_1,uint param_2)

{
  if (param_1 != (cls_105b3e68 *)0x0) {
    *(uint32_t *)&param_1->field_0x20 = (uint32_t)&DAT_105b3e68/*ROM*/;
    cls_105b3d9c_delete((cls_105b3d9c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
