/* @k10d cls_1059e508_delete @ 0x104298cc
 * name: verified (structural evidence: stores vtable 0x1059e508 to *this; heap_free(this) under (param_2 & 1))
 * unit: 107_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059e508 (vtable 0x1059e508): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059e508 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059e508_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_1059e508/*ROM*/;
    reset_vtable_and_free_heap(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
