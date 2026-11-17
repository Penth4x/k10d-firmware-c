/* @k10d cls_1059f3b4_delete @ 0x10433a60
 * name: verified (structural evidence: stores vtable 0x1059f3b4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 119_event_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059f3b4 (vtable 0x1059f3b4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059f3b4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059f3b4_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059f3b4/*ROM*/;
    param_1[1] = 0x1059f3f4/*ROM*/;
    param_1[2] = 0x1059f40c/*ROM*/;
    cls_105a2be0_delete(param_1 + 0x12,2);
    cls_105a2af8_delete(param_1 + 0xe,2);
    reset_vtable_and_free_if_owned_10428142(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_owned_10426e76(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
