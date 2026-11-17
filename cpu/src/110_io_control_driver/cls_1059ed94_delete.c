/* @k10d cls_1059ed94_delete @ 0x1042e654
 * name: verified (structural evidence: stores vtable 0x1059ed94 to *this; heap_free(this) under (param_2 & 1))
 * unit: 110_io_control_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059ed94 (vtable 0x1059ed94): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059ed94 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059ed94_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1059ed94/*ROM*/;
    cls_1059e87c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
