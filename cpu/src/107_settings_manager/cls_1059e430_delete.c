/* @k10d cls_1059e430_delete @ 0x10427de6
 * name: verified (structural evidence: stores vtable 0x1059e430 to *this; heap_free(this) under (param_2 & 1))
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e430 (vtable 0x1059e430): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e430 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e430_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059e430/*ROM*/;
    cls_1059e3e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
