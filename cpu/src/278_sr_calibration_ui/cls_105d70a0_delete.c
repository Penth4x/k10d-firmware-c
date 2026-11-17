/* @k10d cls_105d70a0_delete @ 0x105201ea
 * name: verified (structural evidence: stores vtable 0x105d70a0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d70a0 (vtable 0x105d70a0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d70a0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d70a0_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d70a0/*ROM*/;
    zero_four_words_and_maybe_free((void *)&param_1[4],3);
    param_1[1] = 0;
    param_1[2] = 0;
    reset_vtable_and_free_if_flagged_104b2852(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
