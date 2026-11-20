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

void cls_105ba124_delete(cls_105ba124 *param_1,uint param_2)

{
  if (param_1 != (cls_105ba124 *)0x0) {
    *(uint32_t *)&param_1[2].field_0xde0 = 0x105ba124/*ROM*/;
    cls_105a2af8_delete(&param_1[2].field_0xe28,2);
    reset_vtable_and_free_if_flagged_104ddfe6(&param_1[2].field_0xe04,2);
    reset_vtable_and_free_if_flagged_104ddfe6(&param_1[2].field_0xde4,2);
    cls_105ba0cc_delete((cls_105ba0cc *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
