/* @k10d cls_105d49dc_delete @ 0x104ff37a
 * name: verified (structural evidence: stores vtable 0x105d49dc to *this; heap_free(this) under (param_2 & 1))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d49dc (vtable 0x105d49dc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d49dc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d49dc_delete(cls_105d49dc *param_1,uint param_2)

{
  if (param_1 != (cls_105d49dc *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105d49dc/*ROM*/);
    param_1->field_0x4 = 0x105d4a14/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[4] = (uint32_t)((void *)0x105d4a2c/*ROM*/);
    cls_105a2af8_delete(&param_1->field_0x3c,2);
    cls_105a2b50_delete(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
