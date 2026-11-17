/* @k10d cls_1059dec8_delete @ 0x1042604e
 * name: verified (structural evidence: stores vtable 0x1059dec8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 101_parameter_event_handler (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059dec8 (vtable 0x1059dec8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059dec8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059dec8_delete(int *param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != (int *)0x0) {
    param_1[4] = 0x1059dec8/*ROM*/;
    (*pcRam1059deec)((int)sRam1059dee8 + (int)param_1);
    piVar1 = (int *)*param_1;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xc))((int)*(short *)(*piVar1 + 8) + (int)piVar1,3);
    }
    reset_vtable_and_free_if_flagged_103c71c8(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
