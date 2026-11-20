/* @k10d cls_105a0e78_delete @ 0x1044341e
 * name: verified (structural evidence: stores vtable 0x105a0e78 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0e78 (vtable 0x105a0e78): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0e78 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0e78_delete(cls_105a0e78 *param_1,uint param_2)

{
  if (param_1 != (cls_105a0e78 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105a0e78/*ROM*/);
    invoke_virtual_slot_3_on_members_104432d6((uint32_t)(param_1));
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
