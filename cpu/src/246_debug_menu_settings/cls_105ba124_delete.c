/* @k10d cls_105ba124_delete @ 0x104d7fa4
 * name: verified (structural evidence: stores vtable 0x105ba124 to *this; heap_free(this) under (param_2 & 1))
 * unit: 246_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ba124 (vtable 0x105ba124): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ba124 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ba124_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x2b18) = 0x105ba124/*ROM*/;
    cls_105a2af8_delete((void *)(param_1 + 0x2b60),2);
    reset_vtable_and_free_if_flagged_104ddfe6((void *)(param_1 + 0x2b3c),2);
    reset_vtable_and_free_if_flagged_104ddfe6((void *)(param_1 + 0x2b1c),2);
    cls_105ba0cc_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
