/* @k10d cls_105b5410_delete @ 0x104969b8
 * name: verified (structural evidence: stores vtable 0x105b5410 to *this; heap_free(this) under (param_2 & 1))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b5410 (vtable 0x105b5410): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b5410 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5410_delete(cls_105b5410 *param_1,uint param_2)

{
  if (param_1 != (cls_105b5410 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b5410/*ROM*/);
    cls_105a8a1c_delete(&param_1->field_0x4,2);
    cls_105f9ac8_delete((cls_105f9ac8 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
