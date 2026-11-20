/* @k10d cls_105a0b64_delete @ 0x10440c62
 * name: verified (structural evidence: stores vtable 0x105a0b64 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0b64 (vtable 0x105a0b64): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0b64 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0b64_delete(cls_105a0b64 *param_1,uint param_2)

{
  if (param_1 != (cls_105a0b64 *)0x0) {
    param_1->field_0x0 = (uint32_t)0x105a0b64/*ROM*/;
    release_three_member_objects(param_1);
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
