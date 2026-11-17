/* @k10d cls_1059efac_delete @ 0x1042f5a0
 * name: verified (structural evidence: stores vtable 0x1059efac to *this; heap_free(this) under (param_2 & 1))
 * unit: 112_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059efac (vtable 0x1059efac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059efac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059efac_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059efac/*ROM*/;
    param_1[5] = 0x1059efdc/*ROM*/;
    param_1[0x32] = 0x1059ef9c/*ROM*/;
    param_1[0x2d] = 0x1059ef9c/*ROM*/;
    param_1[0x28] = 0x1059ef9c/*ROM*/;
    param_1[0x1f] = 0x1059ef9c/*ROM*/;
    param_1[0x1a] = 0x1059ef9c/*ROM*/;
    param_1[0x15] = 0x1059ef9c/*ROM*/;
    cls_105a2bf8_delete(param_1 + 10,2);
    cls_105a2bf8_delete(param_1 + 8,2);
    cls_105a2b50_delete(param_1 + 1,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
