/* @k10d cls_105a7ea0_delete @ 0x104670ce
 * name: verified (structural evidence: stores vtable 0x105a7ea0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 143_ui_task5_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a7ea0 (vtable 0x105a7ea0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a7ea0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a7ea0_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a7ea0/*ROM*/;
    param_1[1] = 0x105a7ef0/*ROM*/;
    param_1[2] = 0x105a7f08/*ROM*/;
    param_1[7] = 0x105a7f28/*ROM*/;
    param_1[8] = 0x105a7f40/*ROM*/;
    release_object_and_free_heap(param_1 + 0xf,2);
    cls_105a2af8_delete(param_1 + 10,2);
    cls_1059e408_delete(param_1 + 8,0);
    cls_105a2c1c_delete(param_1 + 3,0);
    reset_vtable_and_free_if_owned_10428142(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
