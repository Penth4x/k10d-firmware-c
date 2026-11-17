/* @k10d cls_105586cc_delete @ 0x103766ba
 * name: verified (structural evidence: stores vtable 0x105586cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105586cc (vtable 0x105586cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105586cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105586cc_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105586cc/*ROM*/;
    param_1[1] = (uint32_t)&DAT_105587e4/*ROM*/;
    param_1[2] = (uint32_t)&DAT_1055880c/*ROM*/;
    cls_10559c4c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
