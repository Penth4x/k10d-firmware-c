/* @k10d cls_10558c04_delete @ 0x1037c2e8
 * name: verified (structural evidence: stores vtable 0x10558c04 to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10558c04 (vtable 0x10558c04): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10558c04 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10558c04_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_10558c04/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10558c8c/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10558cb4/*ROM*/;
    cls_10559fc0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
