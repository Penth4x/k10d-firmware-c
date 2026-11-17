/* @k10d cls_105c14c8_delete @ 0x104e7e1e
 * name: verified (structural evidence: stores vtable 0x105c14c8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105c14c8 (vtable 0x105c14c8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105c14c8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c14c8_delete(uint32_t *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_105c14c8/*ROM*/;
    piVar1 = (int *)param_1[1];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    piVar1 = (int *)param_1[2];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    reset_vtable_and_free_if_owned_1042792a(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
