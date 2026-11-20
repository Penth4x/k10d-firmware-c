/* @k10d cls_105c26f0_delete @ 0x104eb75c
 * name: verified (structural evidence: stores vtable 0x105c26f0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c26f0 (vtable 0x105c26f0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c26f0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c26f0_delete(cls_105c26f0 *param_1,uint param_2)

{
  if (param_1 != (cls_105c26f0 *)0x0) {
    *(void **)&param_1->field_0x0 = (void *)0x105c26f0/*ROM*/;
    reset_vtable_and_free_if_owned_1042792a((void *)&param_1->field_0x0,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
