/* @k10d cls_105b7458_delete @ 0x104ad096
 * name: verified (structural evidence: stores vtable 0x105b7458 to *this; heap_free(this) under (param_2 & 1))
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7458 (vtable 0x105b7458): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7458 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7458_delete(cls_105b7458 *param_1,uint param_2)

{
  if (param_1 != (cls_105b7458 *)0x0) {
    param_1->field_0x0 = 0x105b7458/*ROM*/;
    heap_free_2(param_1->field_0xc);
    param_1->field_0xc = 0;
    cls_105b74d8_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
