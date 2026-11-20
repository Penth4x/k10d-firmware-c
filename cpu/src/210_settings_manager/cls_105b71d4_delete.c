/* @k10d cls_105b71d4_delete @ 0x104ab40c
 * name: verified (structural evidence: stores vtable 0x105b71d4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 210_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b71d4 (vtable 0x105b71d4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b71d4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b71d4_delete(cls_105b71d4 *param_1,uint param_2)

{
  if (param_1 != (cls_105b71d4 *)0x0) {
    param_1->field_0x4 = 0x105b71d4/*ROM*/;
    param_1->field_0x8 = 0x105b7224/*ROM*/;
    cls_105b73a8_delete((cls_105b73a8 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
