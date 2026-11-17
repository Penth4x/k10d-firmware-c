/* @k10d cls_105a9068_delete @ 0x1046d4f2
 * name: verified (structural evidence: stores vtable 0x105a9068 to *this; heap_free(this) under (param_2 & 1))
 * unit: 156_settings_context_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a9068 (vtable 0x105a9068): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a9068 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a9068_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a9068/*ROM*/;
    param_1[1] = 0x105a90a0/*ROM*/;
    param_1[2] = 0x105a90b8/*ROM*/;
    cls_105a2af8_delete(param_1 + 0x11,2);
    cls_1059e408_delete(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
