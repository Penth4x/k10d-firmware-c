/* @k10d cls_105aa8bc_delete @ 0x1047aa2e
 * name: verified (structural evidence: stores vtable 0x105aa8bc to *this; heap_free(this) under (param_2 & 1))
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aa8bc (vtable 0x105aa8bc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aa8bc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aa8bc_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa8bc/*ROM*/;
    param_1[5] = 0x105aa9a4/*ROM*/;
    param_1[8] = 0x105aa9c4/*ROM*/;
    cls_105aae7c_delete(param_1 + 0x22,2);
    destroy_and_maybe_free_object(param_1 + 0x1d,2);
    free_heap_if_flag_set_1047e5d2(param_1 + 0x12,2);
    free_heap_if_flagged_10482f3c(param_1 + 0xd,2);
    cls_105a2af8_delete(param_1 + 0xb,2);
    cls_105a2af8_delete(param_1 + 9,2);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 8,0);
    cls_105a2b50_delete(param_1 + 1,0);
    cls_105aacd8_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
