/* @k10d cls_1055a164_delete @ 0x1038ece8
 * name: verified (structural evidence: stores vtable 0x1055a164 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1055a164 (vtable 0x1055a164): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1055a164 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1055a164_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_1055a164/*ROM*/;
    param_1[1] = (uint32_t)&DAT_1055a1ec/*ROM*/;
    param_1[2] = (uint32_t)&DAT_1055a214/*ROM*/;
    cls_10559fc0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
