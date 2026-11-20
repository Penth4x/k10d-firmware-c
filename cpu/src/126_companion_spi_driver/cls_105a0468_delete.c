/* @k10d cls_105a0468_delete @ 0x1043bb54
 * name: verified (structural evidence: stores vtable 0x105a0468 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0468 (vtable 0x105a0468): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0468 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0468_delete(cls_105a0468 *param_1,uint param_2)

{
  if (param_1 != (cls_105a0468 *)0x0) {
    param_1->field_0x0 = (uint32_t)((void *)0x105a0468/*ROM*/);
    destroy_member_objects_1043b954(param_1);
    cls_105a2be0_delete(&param_1->field_0x220,2);
    cls_105a2be0_delete(&param_1->field_0x218,2);
    cls_105a2be0_delete(&param_1->field_0x210,2);
    cls_105a2be0_delete(&param_1->field_0x208,2);
    cls_105a2be0_delete(&param_1->field_0x200,2);
    cls_105a2be0_delete(&param_1->field_0x1f8,2);
    cls_105a2be0_delete(&param_1->field_0x1f0,2);
    cls_105a2be0_delete(&param_1->field_0x1e8,2);
    cls_105a2be0_delete(&param_1->field_0x1e0,2);
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
