/* @k10d cls_1061e470_delete @ 0x1053406a
 * name: verified (structural evidence: stores vtable 0x1061e470 to *this; heap_free(this) under (param_2 & 1))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1061e470 (vtable 0x1061e470): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1061e470 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1061e470_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x1061e470;
    reset_vtable_and_free_if_owned_104a90ee(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
