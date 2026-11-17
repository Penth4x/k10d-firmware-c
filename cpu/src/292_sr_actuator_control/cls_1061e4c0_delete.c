/* @k10d cls_1061e4c0_delete @ 0x105340e2
 * name: verified (structural evidence: stores vtable 0x1061e4c0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1061e4c0 (vtable 0x1061e4c0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1061e4c0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1061e4c0_delete(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_1061e4c0;
    iVar1 = param_1[4];
    if (iVar1 != 0) {
      (**(code **)(*(int *)(iVar1 + 0xc) + 0x34))
                (*(short *)(*(int *)(iVar1 + 0xc) + 0x30) + iVar1,3);
    }
    cls_105b49ec_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
