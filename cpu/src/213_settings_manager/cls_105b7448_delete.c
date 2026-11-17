/* @k10d cls_105b7448_delete @ 0x104acfce
 * name: verified (structural evidence: stores vtable 0x105b7448 to *this; heap_free(this) under (param_2 & 1))
 * unit: 213_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7448 (vtable 0x105b7448): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7448 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7448_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    param_1[4] = 0x105b7448/*ROM*/;
    *(uint32_t *)*param_1 = param_1[1];
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
