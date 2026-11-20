/* @k10d cls_105b6858_delete @ 0x104a72c2
 * name: verified (structural evidence: stores vtable 0x105b6858 to *this; heap_free(this) under (param_2 & 1))
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b6858 (vtable 0x105b6858): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b6858 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b6858_delete(cls_105b6858 *param_1,uint param_2)

{
  if (param_1 != (cls_105b6858 *)0x0) {
    param_1->field_0x1c = 0x105b6858/*ROM*/;
    cls_105b6358_delete((int)(param_1),(uint)(0));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
