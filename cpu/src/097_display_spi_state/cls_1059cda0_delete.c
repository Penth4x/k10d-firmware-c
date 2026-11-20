/* @k10d cls_1059cda0_delete @ 0x1041b7ac
 * name: verified (structural evidence: stores vtable 0x1059cda0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059cda0 (vtable 0x1059cda0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059cda0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059cda0_delete(cls_1059e2e0 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e2e0 *)0x0) {
    param_1->field_0x4 = 0x1059cda0/*ROM*/;
    param_1->field_0x8 = 0x1059cf10/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
