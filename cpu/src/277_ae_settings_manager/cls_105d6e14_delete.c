/* @k10d cls_105d6e14_delete @ 0x1051f0e4
 * name: verified (structural evidence: stores vtable 0x105d6e14 to *this; heap_free(this) under (param_2 & 1))
 * unit: 277_ae_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6e14 (vtable 0x105d6e14): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6e14 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6e14_delete(cls_105d6e14 *param_1,uint param_2)

{
  if (param_1 != (cls_105d6e14 *)0x0) {
    *(uint32_t *)&param_1->field_0x48 = (uint32_t)&DAT_105d6e14/*ROM*/;
    classic_menu_reg((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
