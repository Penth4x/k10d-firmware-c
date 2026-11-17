/* @k10d cls_105b44b4_delete @ 0x10493524
 * name: verified (structural evidence: stores vtable 0x105b44b4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b44b4 (vtable 0x105b44b4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b44b4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b44b4_delete(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105b44b4/*ROM*/;
    piVar1 = (int *)param_1[0x12];
    if (piVar1 != (int *)param_1[0x13]) {
      do {
        heap_free(*piVar1);
        piVar1 = piVar1 + 1;
      } while (piVar1 != (int *)param_1[0x13]);
    }
    cls_105a5c2c_delete(param_1 + 0x12,2);
    cls_105b48dc_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
