/* @k10d cls_105c3a34_delete @ 0x104f3c20
 * name: verified (structural evidence: stores vtable 0x105c3a34 to *this; heap_free(this) under (param_2 & 1))
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c3a34 (vtable 0x105c3a34): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c3a34 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c3a34": ignoring multiple overlapping fields */

void cls_105c3a34_delete(cls_105c3a34 *param_1,uint param_2)

{
  if (param_1 != (cls_105c3a34 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c3a34/*ROM*/);
    ((uint32_t *)&(param_1->field_0x4))[0] = (uint32_t)((void *)0x105c3a64/*ROM*/);
    cls_1059e288_delete(&param_1->field_0x18,2);
    cls_1059e408_delete(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
