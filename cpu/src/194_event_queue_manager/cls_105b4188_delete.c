/* @k10d cls_105b4188_delete @ 0x10491d1c
 * name: verified (structural evidence: stores vtable 0x105b4188 to *this; heap_free(this) under (param_2 & 1))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b4188 (vtable 0x105b4188): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b4188 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b4188_delete(int param_1,uint param_2)

{
  int *piVar1;
  
  if (param_1 != 0) {
    *(void **)(param_1 + 8) = &DAT_105b4188/*ROM*/;
    piVar1 = *(int **)(param_1 + 0xc);
    if (piVar1 != *(int **)(param_1 + 0x10)) {
      do {
        heap_free(*piVar1);
        piVar1 = piVar1 + 1;
      } while (piVar1 != *(int **)(param_1 + 0x10));
    }
    cls_105a5c2c_delete((uint32_t *)(param_1 + 0xc),2);
    cls_105b41d0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
