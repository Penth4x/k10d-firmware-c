/* @k10d cls_1055a304_delete @ 0x103904b2
 * name: verified (structural evidence: stores vtable 0x1055a304 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1055a304 (vtable 0x1055a304): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1055a304 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_1059e128": ignoring overlapping field "field_0x8" */

void cls_1055a304_delete(cls_1055a304 *param_1,uint param_2)

{
  if (param_1 != (cls_1055a304 *)0x0) {
    param_1->field_0x0 = (uint32_t)((void *)0x1055a304/*ROM*/);
    param_1->field_0x4 = (uint32_t)((void *)0x1055a3cc/*ROM*/);
    param_1->field_0x18 = (uint32_t)((void *)0x1055a3ec/*ROM*/);
    param_1->field_0x2c = (uint32_t)((void *)0x1055a41c/*ROM*/);
    param_1->field_0x30 = (uint32_t)((void *)0x1055a434/*ROM*/);
    param_1->field_0x34 = (uint32_t)((void *)0x1055a454/*ROM*/);
    param_1->field_0x40 = 0x1055a494/*ROM*/;
    param_1->field_0x48 = 0x1055a4ac/*ROM*/;
    cls_1055a4c4_delete((cls_1055a4c4 *)&param_1->field_0x68,2);
    cls_105a2af8_delete(&param_1->field_0x4c,2);
    cls_105a2a8c_delete(&param_1->field_0x44,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x40,0);
    cls_1059e128_delete((cls_1059e128 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
