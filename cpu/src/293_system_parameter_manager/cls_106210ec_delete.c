/* @k10d cls_106210ec_delete @ 0x10534cc6
 * name: verified (structural evidence: stores vtable 0x106210ec to *this; heap_free(this) under (param_2 & 1))
 * unit: 293_system_parameter_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_106210ec (vtable 0x106210ec): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x106210ec to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_106210ec_delete(cls_106210ec *param_1,uint param_2)

{
  if (param_1 != (cls_106210ec *)0x0) {
    param_1->field_0x0 = 0x106210ec;
    cls_105b7458_delete((cls_105b7458 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
