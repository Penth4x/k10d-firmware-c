/* @k10d cls_10621600_delete @ 0x10535bac
 * name: verified (structural evidence: stores vtable 0x10621600 to *this; heap_free(this) under (param_2 & 1))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10621600 (vtable 0x10621600): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10621600 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10621600_delete(cls_10621600 *param_1,uint param_2)

{
  if (param_1 != (cls_10621600 *)0x0) {
    param_1->field_0x8 = (uint8_t)&DAT_10621600;
    cls_105bde1c_delete((cls_105bde1c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
