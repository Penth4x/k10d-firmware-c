/* @k10d cls_105aa324_delete @ 0x10473348
 * name: verified (structural evidence: stores vtable 0x105aa324 to *this; heap_free(this) under (param_2 & 1))
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aa324 (vtable 0x105aa324): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aa324 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aa324_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa324/*ROM*/;
    free_heap_if_flag_set_1047740c(param_1 + 5,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
