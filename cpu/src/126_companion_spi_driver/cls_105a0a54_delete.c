/* @k10d cls_105a0a54_delete @ 0x1043fa98
 * name: verified (structural evidence: stores vtable 0x105a0a54 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0a54 (vtable 0x105a0a54): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0a54 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0a54_delete(cls_105a0a54 *param_1,uint param_2)

{
  if (param_1 != (cls_105a0a54 *)0x0) {
    param_1->field_0x0 = (uint32_t)0x105a0a54/*ROM*/;
    destroy_member_objects_1043f9b0(param_1);
    cls_105a2be0_delete(&param_1->field_0x48,2);
    cls_105a2be0_delete(&param_1->field_0x40,2);
    cls_105a2be0_delete(&param_1->field_0x38,2);
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
