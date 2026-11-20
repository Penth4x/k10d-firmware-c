/* @k10d cls_105ab5a8_delete @ 0x10481ed6
 * name: verified (structural evidence: stores vtable 0x105ab5a8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ab5a8 (vtable 0x105ab5a8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ab5a8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab5a8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105ab5a8/*ROM*/;
    param_1[1] = 0x105ab5d8/*ROM*/;
    cls_1059e408_delete((void *)(param_1 + 1),0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
