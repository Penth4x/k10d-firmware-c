/* @k10d cls_105aa568_delete @ 0x10477cac
 * name: verified (structural evidence: stores vtable 0x105aa568 to *this; heap_free(this) under (param_2 & 1))
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aa568 (vtable 0x105aa568): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aa568 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aa568_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa568/*ROM*/;
    param_1[1] = 0x105aa598/*ROM*/;
    free_heap_if_flagged_10482f3c(param_1 + 0x1d,2);
    free_heap_if_flag_set_1047740c(param_1 + 10,2);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
