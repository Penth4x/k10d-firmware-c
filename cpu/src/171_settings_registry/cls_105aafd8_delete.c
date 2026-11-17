/* @k10d cls_105aafd8_delete @ 0x1047fa3a
 * name: verified (structural evidence: stores vtable 0x105aafd8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aafd8 (vtable 0x105aafd8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aafd8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aafd8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105aafd8/*ROM*/;
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
