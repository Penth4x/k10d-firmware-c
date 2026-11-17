/* @k10d cls_105d70f0_delete @ 0x1052038a
 * name: verified (structural evidence: stores vtable 0x105d70f0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d70f0 (vtable 0x105d70f0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d70f0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d70f0_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d70f0/*ROM*/;
    clear_member_at_offset_4(param_1);
    reset_vtable_and_free_if_flagged_104b2852(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
