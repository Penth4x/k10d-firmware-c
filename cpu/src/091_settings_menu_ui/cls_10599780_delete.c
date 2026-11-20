/* @k10d cls_10599780_delete @ 0x104086ce
 * name: verified (structural evidence: stores vtable 0x10599780 to *this; heap_free(this) under (param_2 & 1))
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10599780 (vtable 0x10599780): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10599780 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10599780_delete(cls_10599780 *param_1,uint param_2)

{
  if (param_1 != (cls_10599780 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_10599780/*ROM*/;
    *(uint32_t *)&param_1->field_0x4 = (uint32_t)&DAT_10599808/*ROM*/;
    *(uint32_t *)&param_1->field_0x8 = (uint32_t)&DAT_10599830/*ROM*/;
    cls_10559fc0_delete((cls_10559fc0 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
