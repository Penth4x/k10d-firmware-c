/* @k10d cls_1059cbf0_delete @ 0x1041ac7e
 * name: verified (structural evidence: stores vtable 0x1059cbf0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059cbf0 (vtable 0x1059cbf0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059cbf0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059cbf0_delete(cls_1059cbf0 *param_1,uint param_2)

{
  if (param_1 != (cls_1059cbf0 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x1059cbf0/*ROM*/);
    param_1->field_0x4 = 0x1059cce0/*ROM*/;
    param_1->field_0x8 = 0x1059cd00/*ROM*/;
    param_1->field_0x20 = 0x1059cd28/*ROM*/;
    cls_105a2af8_delete(&param_1->field_0x84,2);
    cls_105a2af8_delete(&param_1->field_0x7c,2);
    cls_105a2c1c_delete(&param_1->field_0x10,0);
    cls_1059e408_delete((cls_1059e408 *)&param_1->field_0x8,0);
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
