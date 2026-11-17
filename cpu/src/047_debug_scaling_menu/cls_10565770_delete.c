/* @k10d cls_10565770_delete @ 0x103aa4f8
 * name: verified (structural evidence: stores vtable 0x10565770 to *this; heap_free(this) under (param_2 & 1))
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10565770 (vtable 0x10565770): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10565770 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10565770_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x10565770/*ROM*/;
    param_1[0x11] = 0x10565810/*ROM*/;
    cls_105a2a8c_delete(param_1 + 0x10,0);
    *param_1 = 0x105643d0/*ROM*/;
    cls_105b4254_delete(param_1 + 2,2);
    reset_vtable_and_free_if_flagged_104968f2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
