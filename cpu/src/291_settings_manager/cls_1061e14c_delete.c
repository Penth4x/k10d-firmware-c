/* @k10d cls_1061e14c_delete @ 0x1053167c
 * name: verified (structural evidence: stores vtable 0x1061e14c to *this; heap_free(this) under (param_2 & 1))
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1061e14c (vtable 0x1061e14c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1061e14c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1061e14c_delete(cls_1061e14c *param_1,uint param_2)

{
  if (param_1 != (cls_1061e14c *)0x0) {
    param_1->field_0x0 = 0x1061e14c;
    zero_four_words_and_maybe_free((uint32_t *)(param_1->field_0x18),(uint)(3));
    param_1->field_0x4 = 0;
    param_1->field_0x1c = 0;
    cls_105b81b0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
