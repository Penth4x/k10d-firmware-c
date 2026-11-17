/* @k10d cls_105c2e90_delete @ 0x104ef8ce
 * name: verified (structural evidence: stores vtable 0x105c2e90 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2e90 (vtable 0x105c2e90): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2e90 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2e90_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105c2e90/*ROM*/;
    param_1[1] = 0x105c2ec0/*ROM*/;
    free_heap_if_flag_set_1047e5d2(param_1 + 0xd,2);
    cls_105a2af8_delete(param_1 + 10,2);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
