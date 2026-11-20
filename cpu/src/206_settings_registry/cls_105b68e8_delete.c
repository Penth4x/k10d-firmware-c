/* @k10d cls_105b68e8_delete @ 0x104a746e
 * name: verified (structural evidence: stores vtable 0x105b68e8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b68e8 (vtable 0x105b68e8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b68e8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b68e8_delete(cls_105b68e8 *param_1,uint param_2)

{
  if (param_1 != (cls_105b68e8 *)0x0) {
    param_1->field_0x0 = 0x105b68e8/*ROM*/;
    cls_105b99ec_delete((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
