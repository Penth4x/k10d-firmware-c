/* @k10d cls_105b7f20_delete @ 0x104b293a
 * name: verified (structural evidence: stores vtable 0x105b7f20 to *this; heap_free(this) under (param_2 & 1))
 * unit: 214_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b7f20 (vtable 0x105b7f20): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b7f20 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b7f20_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105b7f20/*ROM*/;
    zero_four_words_and_maybe_free((void *)&param_1[4],3);
    heap_free_2(param_1[3]);
    cls_105b7f08_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
