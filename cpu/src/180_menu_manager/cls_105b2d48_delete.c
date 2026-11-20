/* @k10d cls_105b2d48_delete @ 0x10486698
 * name: verified (structural evidence: stores vtable 0x105b2d48 to *this; heap_free(this) under (param_2 & 1))
 * unit: 180_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2d48 (vtable 0x105b2d48): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2d48 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b2d48_delete(cls_105b2d48 *param_1,uint param_2)

{
  if (param_1 != (cls_105b2d48 *)0x0) {
    param_1->field_0x0 = (uint32_t)&DAT_105b2d48/*ROM*/;
    destroy_member_object(param_1);
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
