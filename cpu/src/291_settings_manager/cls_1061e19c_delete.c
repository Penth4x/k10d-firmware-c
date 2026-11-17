/* @k10d cls_1061e19c_delete @ 0x10531920
 * name: verified (structural evidence: stores vtable 0x1061e19c to *this; heap_free(this) under (param_2 & 1))
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1061e19c (vtable 0x1061e19c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1061e19c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1061e19c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1061e19c;
    param_1[1] = 0x1061e1cc;
    cls_105a2af8_delete(param_1 + 3,2);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
