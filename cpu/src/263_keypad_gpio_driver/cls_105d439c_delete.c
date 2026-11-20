/* @k10d cls_105d439c_delete @ 0x104fcaa6
 * name: verified (structural evidence: stores vtable 0x105d439c to *this; heap_free(this) under (param_2 & 1))
 * unit: 263_keypad_gpio_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d439c (vtable 0x105d439c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d439c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d439c_delete(cls_1059e2e0 *param_1,uint param_2)

{
  if (param_1 != (cls_1059e2e0 *)0x0) {
    param_1->field_0x4 = 0x105d439c/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105d450c/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
