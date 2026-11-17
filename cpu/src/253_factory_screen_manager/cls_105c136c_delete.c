/* @k10d cls_105c136c_delete @ 0x104e7a4c
 * name: verified (structural evidence: stores vtable 0x105c136c to *this; heap_free(this) under (param_2 & 1))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c136c (vtable 0x105c136c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c136c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c136c_delete(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105c136c/*ROM*/;
    free_heap_if_flagged_1045c402(param_1 + 0x10,2);
    cls_105b4bbc_delete(param_1 + 0xc,2);
    cls_105b4bbc_delete(param_1 + 8,2);
    cls_105b989c_delete(param_1 + 4,2);
    cls_105b49ec_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
