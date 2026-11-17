/* @k10d cls_105c1610_delete @ 0x104e7f8a
 * name: verified (structural evidence: stores vtable 0x105c1610 to *this; heap_free(this) under (param_2 & 1))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c1610 (vtable 0x105c1610): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c1610 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c1610_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105c1610/*ROM*/;
    param_1[1] = 0x105c1668/*ROM*/;
    param_1[2] = 0x105c1680/*ROM*/;
    param_1[3] = 0x105c16a0/*ROM*/;
    param_1[8] = 0x105c16c0/*ROM*/;
    cls_105a2af8_delete(param_1 + 0x62,2);
    free_heap_if_flag_set_10513bb2(param_1 + 0xf,2);
    cls_105a2b50_delete(param_1 + 4,0);
    reset_vtable_and_free_if_flagged_10428202(param_1 + 3,0);
    reset_vtable_and_free_if_owned_10428142(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
