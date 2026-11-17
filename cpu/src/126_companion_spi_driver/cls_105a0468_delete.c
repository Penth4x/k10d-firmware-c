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

void cls_105a0468_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a0468/*ROM*/;
    destroy_member_objects_1043b954(param_1);
    cls_105a2be0_delete(param_1 + 0x88,2);
    cls_105a2be0_delete(param_1 + 0x86,2);
    cls_105a2be0_delete(param_1 + 0x84,2);
    cls_105a2be0_delete(param_1 + 0x82,2);
    cls_105a2be0_delete(param_1 + 0x80,2);
    cls_105a2be0_delete(param_1 + 0x7e,2);
    cls_105a2be0_delete(param_1 + 0x7c,2);
    cls_105a2be0_delete(param_1 + 0x7a,2);
    cls_105a2be0_delete(param_1 + 0x78,2);
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
