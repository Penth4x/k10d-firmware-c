/* @k10d cls_105b45e4_delete @ 0x10493d46
 * name: verified (structural evidence: stores vtable 0x105b45e4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b45e4 (vtable 0x105b45e4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b45e4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b45e4_delete(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105b45e4/*ROM*/;
    iVar1 = *param_1;
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0x20) + 0xc))(*(short *)(*(int *)(iVar1 + 0x20) + 8) + iVar1,3);
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
