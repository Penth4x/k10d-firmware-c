/* @k10d cls_105b9410_delete @ 0x104c3cc4
 * name: verified (structural evidence: stores vtable 0x105b9410 to *this; heap_free(this) under (param_2 & 1))
 * unit: 230_menu_init_signal (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9410 (vtable 0x105b9410): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9410 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9410_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105b9410/*ROM*/;
    free_heap_if_flagged_1045c402(param_1 + 0x24,2);
    free_heap_if_flagged_1045c402(param_1 + 0x22,2);
    cls_105a2af8_delete(param_1 + 0x1e,2);
    destroy_five_member_objects(param_1 + 7,2);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
