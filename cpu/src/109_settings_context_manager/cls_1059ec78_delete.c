/* @k10d cls_1059ec78_delete @ 0x1042e18a
 * name: verified (structural evidence: stores vtable 0x1059ec78 to *this; heap_free(this) under (param_2 & 1))
 * unit: 109_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059ec78 (vtable 0x1059ec78): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059ec78 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059ec78_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059ec78/*ROM*/;
    param_1[2] = 0x1059ecb0/*ROM*/;
    cls_105a2af8_delete(param_1 + 0xb,2);
    free_heap_if_flag_set_1047e0e6(param_1 + 5,2);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 2,0);
    cls_1059e87c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
