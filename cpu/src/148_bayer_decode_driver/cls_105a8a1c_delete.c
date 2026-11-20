/* @k10d cls_105a8a1c_delete @ 0x1046b120
 * name: verified (structural evidence: stores vtable 0x105a8a1c to *this; heap_free(this) under (param_2 & 1))
 * unit: 148_bayer_decode_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a8a1c (vtable 0x105a8a1c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a8a1c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a8a1c_delete(cls_105a8a1c *param_1,uint param_2)

{
  if (param_1 != (cls_105a8a1c *)0x0) {
    *(uint32_t *)&param_1->field_0x0 = (uint32_t)&DAT_105a8a1c/*ROM*/;
    reset_vtable_and_free_if_flagged_10491534((void *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
