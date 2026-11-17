/* @k10d cls_105bc1c4_delete @ 0x104dfb78
 * name: verified (structural evidence: stores vtable 0x105bc1c4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 250_param_node_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bc1c4 (vtable 0x105bc1c4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bc1c4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bc1c4_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x40) = 0x105bc1c4/*ROM*/;
    if (*(int *)(param_1 + 0x50) != 0) {
      heap_free(*(int *)(param_1 + 0x50));
    }
    cls_105bbeb0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
