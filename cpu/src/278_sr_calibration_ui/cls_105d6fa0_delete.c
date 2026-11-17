/* @k10d cls_105d6fa0_delete @ 0x1051f682
 * name: verified (structural evidence: stores vtable 0x105d6fa0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d6fa0 (vtable 0x105d6fa0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d6fa0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d6fa0_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x48) = 0x105d6fa0/*ROM*/;
    classic_menu_reg(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
