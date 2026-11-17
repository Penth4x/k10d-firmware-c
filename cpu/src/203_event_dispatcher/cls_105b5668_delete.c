/* @k10d cls_105b5668_delete @ 0x104995be
 * name: verified (structural evidence: stores vtable 0x105b5668 to *this; heap_free(this) under (param_2 & 1))
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b5668 (vtable 0x105b5668): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b5668 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b5668_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 4) = 0x105b5668/*ROM*/;
    cls_105d6dc8_delete((void *)((int)param_1 + 0x18),2);
    reset_vtable_and_free_if_flagged_104cee74(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
