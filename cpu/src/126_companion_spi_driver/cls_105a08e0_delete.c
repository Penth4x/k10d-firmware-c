/* @k10d cls_105a08e0_delete @ 0x1043e394
 * name: verified (structural evidence: stores vtable 0x105a08e0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a08e0 (vtable 0x105a08e0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a08e0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a08e0_delete(cls_105a08e0 *param_1,uint param_2)

{
  if (param_1 != (cls_105a08e0 *)0x0) {
    *(void **)&param_1->field_0x0 = (void *)0x105a08e0/*ROM*/;
    destroy_member_objects_1043e07e(param_1);
    cls_105a2be0_delete(&param_1->field_0x3c,2);
    cls_105a2be0_delete(&param_1->field_0x34,2);
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
