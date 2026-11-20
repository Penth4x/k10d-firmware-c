/* @k10d cls_1059f664_delete @ 0x10435a40
 * name: verified (structural evidence: stores vtable 0x1059f664 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059f664 (vtable 0x1059f664): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059f664 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059f664_delete(cls_1059f664 *param_1,uint param_2)

{
  if (param_1 != (cls_1059f664 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_1059f664/*ROM*/);
    reset_vtable_and_free_heap(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
