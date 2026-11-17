/* @k10d cls_105d8b38_delete @ 0x1052220c
 * name: verified (structural evidence: stores vtable 0x105d8b38 to *this; heap_free(this) under (param_2 & 1))
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d8b38 (vtable 0x105d8b38): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d8b38 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d8b38_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d8b38/*ROM*/;
    param_1[1] = 0x105d8b58/*ROM*/;
    heap_free_2(param_1[6]);
    param_1[6] = 0;
    cls_10621c28_delete(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
