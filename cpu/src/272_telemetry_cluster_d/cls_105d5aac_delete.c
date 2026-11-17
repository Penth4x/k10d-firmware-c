/* @k10d cls_105d5aac_delete @ 0x10513068
 * name: verified (structural evidence: stores vtable 0x105d5aac to *this; heap_free(this) under (param_2 & 1))
 * unit: 272_telemetry_cluster_d (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d5aac (vtable 0x105d5aac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d5aac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d5aac_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105d5aac/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x105d5c1c/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
