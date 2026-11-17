/* @k10d cls_105ab6a0_delete @ 0x1048227c
 * name: verified (structural evidence: stores vtable 0x105ab6a0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 176_key_screen_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ab6a0 (vtable 0x105ab6a0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ab6a0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ab6a0_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x30) = 0x105ab6a0/*ROM*/;
    reset_vtable_and_free_if_flagged_1047e708(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
