/* @k10d cls_1059ebd0_delete @ 0x1042e0dc
 * name: verified (structural evidence: stores vtable 0x1059ebd0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059ebd0 (vtable 0x1059ebd0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059ebd0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059ebd0_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_1059ebd0/*ROM*/;
    release_virtual_members(param_1);
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
