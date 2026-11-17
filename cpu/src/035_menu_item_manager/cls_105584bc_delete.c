/* @k10d cls_105584bc_delete @ 0x103734e6
 * name: verified (structural evidence: stores vtable 0x105584bc to *this; heap_free(this) under (param_2 & 1))
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105584bc (vtable 0x105584bc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105584bc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105584bc_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105584bc/*ROM*/;
    cls_1055a234_delete(param_1 + 0x119,2);
    cls_105b9458_delete(param_1 + 0x94,2);
    cls_105b9458_delete(param_1 + 0xf,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
