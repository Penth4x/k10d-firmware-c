/* @k10d cls_105a1718_delete @ 0x10445d32
 * name: verified (structural evidence: stores vtable 0x105a1718 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a1718 (vtable 0x105a1718): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a1718 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a1718_delete(cls_105a1718 *param_1,uint param_2)

{
  if (param_1 != (cls_105a1718 *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105a1718/*ROM*/;
    release_two_member_objects_10445c76(param_1);
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
