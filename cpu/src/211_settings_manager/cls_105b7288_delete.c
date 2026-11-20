/* @k10d cls_105b7288_delete @ 0x104ac07a
 * name: verified (structural evidence: stores vtable 0x105b7288 to *this; heap_free(this) under (param_2 & 1))
 * unit: 211_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7288 (vtable 0x105b7288): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7288 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7288_delete(cls_105b7288 *param_1,uint param_2)

{
  if (param_1 != (cls_105b7288 *)0x0) {
    param_1->field_0x0 = 0x105b7288/*ROM*/;
    cls_105b7458_delete((cls_105b7458 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
