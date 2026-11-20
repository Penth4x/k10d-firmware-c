/* @k10d cls_105ba1b8_delete_4 @ 0x104d8e06
 * name: verified (structural evidence: stores vtable 0x105ba1b8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ba1b8 (vtable 0x105ba1b8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ba1b8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ba1b8_delete_4(void *param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)((int)param_1 + 0x1c) = 0x105ba1b8/*ROM*/;
    reset_vtable_and_free_if_flagged_104ddfe6(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
