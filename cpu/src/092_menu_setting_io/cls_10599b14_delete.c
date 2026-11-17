/* @k10d cls_10599b14_delete @ 0x1040a1ba
 * name: verified (structural evidence: stores vtable 0x10599b14 to *this; heap_free(this) under (param_2 & 1))
 * unit: 092_menu_setting_io (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10599b14 (vtable 0x10599b14): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10599b14 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10599b14_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x10599b14/*ROM*/;
    param_1[5] = 0x10599b34/*ROM*/;
    free_heap_if_flag_set_1047e380((void *)((int)param_1 + 0x6e),2);
    cls_105a2af8_delete(param_1 + 0x18,2);
    free_heap_if_flagged_104df482(param_1 + 0x12,2);
    cls_105a2af8_delete(param_1 + 6,2);
    cls_105a2c1c_delete(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428182(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
