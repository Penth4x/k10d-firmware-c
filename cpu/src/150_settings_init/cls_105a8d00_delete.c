/* @k10d cls_105a8d00_delete @ 0x1046c0a0
 * name: verified (structural evidence: stores vtable 0x105a8d00 to *this; heap_free(this) under (param_2 & 1))
 * unit: 150_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a8d00 (vtable 0x105a8d00): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a8d00 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a8d00_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a8d00/*ROM*/;
    param_1[5] = 0x105a8d48/*ROM*/;
    param_1[8] = 0x105a8d68/*ROM*/;
    param_1[9] = 0x105a8d80/*ROM*/;
    cls_105a2af8_delete(param_1 + 0x30,2);
    cls_105a2bf8_delete(param_1 + 0x2e,2);
    reset_vtable_and_free_if_flagged_10428202(param_1 + 9,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 8,0);
    cls_105a2b50_delete((void *)(param_1 + 1),0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
