/* @k10d cls_105a2728_delete @ 0x10453c06
 * name: verified (structural evidence: stores vtable 0x105a2728 to *this; heap_free(this) under (param_2 & 1))
 * unit: 127_rtos_kernel_services (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a2728 (vtable 0x105a2728): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a2728 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a2728_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105a2728/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x105a2758/*ROM*/;
    free_heap_if_flag_set_10454526(param_1 + 0x4c,2);
    free_heap_if_flag_set_10454526(param_1 + 0x30,2);
    free_heap_if_flag_set_10454526(param_1 + 0x14,2);
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
