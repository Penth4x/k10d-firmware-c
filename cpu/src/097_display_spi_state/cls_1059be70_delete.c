/* @k10d cls_1059be70_delete @ 0x1040f944
 * name: verified (structural evidence: stores vtable 0x1059be70 to *this; heap_free(this) under (param_2 & 1))
 * unit: 097_display_spi_state (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059be70 (vtable 0x1059be70): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059be70 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059be70_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x1059be70/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x1059bfe8/*ROM*/;
    cls_105a2af8_delete((void *)(param_1 + 0x74),2);
    free_heap_if_flagged_1040f6ae(param_1 + 0x24,2);
    *(uint32_t *)(param_1 + 4) = 0x1059bcc8/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x1059be38/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
