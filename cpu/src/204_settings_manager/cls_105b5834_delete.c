/* @k10d cls_105b5834_delete @ 0x1049b780
 * name: verified (structural evidence: stores vtable 0x105b5834 to *this; heap_free(this) under (param_2 & 1))
 * unit: 204_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b5834 (vtable 0x105b5834): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b5834 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5834_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105b5834/*ROM*/;
    param_1[2] = 0x105b5864/*ROM*/;
    reset_vtable_and_free_if_flagged_104cee74(param_1 + 1,0);
    cls_105b57dc_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
