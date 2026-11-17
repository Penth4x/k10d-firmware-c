/* @k10d cls_10564c80_delete @ 0x103a4350
 * name: verified (structural evidence: stores vtable 0x10564c80 to *this; heap_free(this) under (param_2 & 1))
 * unit: 045_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10564c80 (vtable 0x10564c80): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10564c80 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10564c80_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105643d0/*ROM*/;
    cls_105b4254_delete(param_1 + 2,2);
    reset_vtable_and_free_if_flagged_104968f2(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
