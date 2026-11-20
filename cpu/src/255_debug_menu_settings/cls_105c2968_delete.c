/* @k10d cls_105c2968_delete @ 0x104ebc40
 * name: verified (structural evidence: stores vtable 0x105c2968 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c2968 (vtable 0x105c2968): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c2968 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c2968_delete(cls_105c2968 *param_1,uint param_2)

{
  if (param_1 != (cls_105c2968 *)0x0) {
    param_1->field_0x0 = (uintptr_t)((void *)0x105c2968/*ROM*/);
    param_1->field_0x4 = 0x105c2998/*ROM*/;
    reset_vtable_and_free_if_owned_104ec364(&param_1->field_0x4,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
