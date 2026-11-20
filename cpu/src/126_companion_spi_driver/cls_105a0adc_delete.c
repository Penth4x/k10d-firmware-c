/* @k10d cls_105a0adc_delete @ 0x10440324
 * name: verified (structural evidence: stores vtable 0x105a0adc to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0adc (vtable 0x105a0adc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0adc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0adc_delete(cls_105a0adc *param_1,uint param_2)

{
  if (param_1 != (cls_105a0adc *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105a0adc/*ROM*/);
    release_member_and_clear(param_1);
    reset_vtable_and_free_if_owned_1042792a(&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
