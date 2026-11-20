/* @k10d cls_105b5cbc_delete @ 0x104a1394
 * name: verified (structural evidence: stores vtable 0x105b5cbc to *this; heap_free(this) under (param_2 & 1))
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b5cbc (vtable 0x105b5cbc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b5cbc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5cbc_delete(cls_105b5cbc *param_1,uint param_2)

{
  if (param_1 != (cls_105b5cbc *)0x0) {
    param_1->field_0x4 = 0x105b5cbc/*ROM*/;
    cls_105b6174_delete((cls_105b6174 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
