/* @k10d cls_105aa4f0_delete @ 0x10476a7c
 * name: verified (structural evidence: stores vtable 0x105aa4f0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 167_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aa4f0 (vtable 0x105aa4f0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aa4f0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aa4f0_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aa4f0/*ROM*/;
    delete_object_with_flag_10477248(param_1 + 3,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
