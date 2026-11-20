/* @k10d cls_105b49ec_delete @ 0x10494720
 * name: verified (structural evidence: stores vtable 0x105b49ec to *this; heap_free(this) under (param_2 & 1))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b49ec (vtable 0x105b49ec): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b49ec to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b49ec_delete(cls_105b49ec *param_1,uint param_2)

{
  if (param_1 != (cls_105b49ec *)0x0) {
    param_1->field_0xc = (uint)(uint32_t *)&DAT_105b49ec/*ROM*/;
    cls_105b45e4_delete((cls_105b45e4 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
