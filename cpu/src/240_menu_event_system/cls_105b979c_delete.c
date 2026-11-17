/* @k10d cls_105b979c_delete @ 0x104cefec
 * name: verified (structural evidence: stores vtable 0x105b979c to *this; heap_free(this) under (param_2 & 1))
 * unit: 240_menu_event_system (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b979c (vtable 0x105b979c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b979c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b979c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105b979c/*ROM*/;
    param_1[5] = 0x105b97cc/*ROM*/;
    cls_1059e288_delete(param_1 + 8,2);
    cls_105a2af8_delete(param_1 + 6,2);
    cls_105a2c1c_delete(param_1 + 1,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
