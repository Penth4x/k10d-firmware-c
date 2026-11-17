/* @k10d cls_105fa6fc_delete @ 0x1052cacc
 * name: verified (structural evidence: stores vtable 0x105fa6fc to *this; heap_free(this) under (param_2 & 1))
 * unit: 288_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105fa6fc (vtable 0x105fa6fc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105fa6fc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105fa6fc_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105fa6fc/*ROM*/;
    reset_two_object_fields(param_1);
    zero_four_words_and_maybe_free((uint32_t *)&param_1[4],3);
    heap_free_2(param_1[3]);
    reset_vtable_and_free_if_flagged_104b2852(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
