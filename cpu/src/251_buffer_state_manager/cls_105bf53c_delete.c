/* @k10d cls_105bf53c_delete @ 0x104e2d7e
 * name: verified (structural evidence: stores vtable 0x105bf53c to *this; heap_free(this) under (param_2 & 1))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bf53c (vtable 0x105bf53c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bf53c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bf53c_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x14) = 0x105bf53c/*ROM*/;
    if (*(int *)(param_1 + 0x18) != 0) {
      heap_free(*(int *)(param_1 + 0x18));
    }
    reset_vtable_and_free_if_owned_104df8f6(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
