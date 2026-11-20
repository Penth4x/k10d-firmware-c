/* @k10d cls_105b8160_delete @ 0x104b3c3e
 * name: verified (structural evidence: stores vtable 0x105b8160 to *this; heap_free(this) under (param_2 & 1))
 * unit: 215_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b8160 (vtable 0x105b8160): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b8160 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b8160_delete(cls_105b8160 *param_1,uint param_2)

{
  if (param_1 != (cls_105b8160 *)0x0) {
    param_1->field_0x0 = 0x105b8160/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0x4 = 0;
    cls_105b81b0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
