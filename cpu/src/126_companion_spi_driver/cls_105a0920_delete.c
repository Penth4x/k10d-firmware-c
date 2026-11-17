/* @k10d cls_105a0920_delete @ 0x1043e43a
 * name: verified (structural evidence: stores vtable 0x105a0920 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a0920 (vtable 0x105a0920): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a0920 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a0920_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105a0920/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x105a0950/*ROM*/;
    cls_105a2be0_delete((void *)(param_1 + 0x10c),2);
    cls_1059e330_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
