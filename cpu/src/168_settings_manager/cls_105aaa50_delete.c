/* @k10d cls_105aaa50_delete @ 0x1047cb2a
 * name: verified (structural evidence: stores vtable 0x105aaa50 to *this; heap_free(this) under (param_2 & 1))
 * unit: 168_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aaa50 (vtable 0x105aaa50): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aaa50 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaa50_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aaa50/*ROM*/;
    param_1[1] = 0x105aaac0/*ROM*/;
    param_1[6] = 0x105aab98/*ROM*/;
    destroy_and_maybe_free_object(param_1 + 0x13,2);
    free_heap_if_flag_set_1047e5d2(param_1 + 0x11,2);
    free_heap_if_flagged_10482f3c(param_1 + 0xb,2);
    cls_105a2b50_delete(param_1 + 2,0);
    cls_105aacd8_delete(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428202(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
