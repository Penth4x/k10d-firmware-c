/* @k10d cls_105b55bc_delete @ 0x104986a2
 * name: verified (structural evidence: stores vtable 0x105b55bc to *this; heap_free(this) under (param_2 & 1))
 * unit: 200_menu_event_router (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b55bc (vtable 0x105b55bc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b55bc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b55bc_delete(cls_105b55bc *param_1,uint param_2)

{
  if (param_1 != (cls_105b55bc *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105b55bc/*ROM*/);
    cls_105a2bf8_delete(&param_1->field_0x18,2);
    cls_105a2bf8_delete(&param_1->field_0x10,2);
    cls_105a2af8_delete(&param_1->field_0x8,2);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
