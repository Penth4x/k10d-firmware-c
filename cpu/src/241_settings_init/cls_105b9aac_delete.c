/* @k10d cls_105b9aac_delete @ 0x104cfa68
 * name: verified (structural evidence: stores vtable 0x105b9aac to *this; heap_free(this) under (param_2 & 1))
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9aac (vtable 0x105b9aac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9aac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9aac_delete(cls_105b9aac *param_1,uint param_2)

{
  if (param_1 != (cls_105b9aac *)0x0) {
    param_1->field_0x0 = 0x105b9aac/*ROM*/;
    cls_105b99ec_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
