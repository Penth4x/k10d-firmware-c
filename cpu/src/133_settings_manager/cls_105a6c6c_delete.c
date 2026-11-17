/* @k10d cls_105a6c6c_delete @ 0x1045fa1a
 * name: verified (structural evidence: stores vtable 0x105a6c6c to *this; heap_free(this) under (param_2 & 1))
 * unit: 133_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a6c6c (vtable 0x105a6c6c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a6c6c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a6c6c_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105a6c6c/*ROM*/;
    reset_vtable_and_free_if_flagged_10496932(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
