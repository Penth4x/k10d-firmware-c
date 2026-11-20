/* @k10d cls_105b3658_delete @ 0x10488fdc
 * name: verified (structural evidence: stores vtable 0x105b3658 to *this; heap_free(this) under (param_2 & 1))
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3658 (vtable 0x105b3658): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3658 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3658_delete(cls_105b3658 *param_1,uint param_2)

{
  if (param_1 != (cls_105b3658 *)0x0) {
    param_1->field_0x48 = (uint32_t)&DAT_105b3658/*ROM*/;
    classic_menu_reg((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
