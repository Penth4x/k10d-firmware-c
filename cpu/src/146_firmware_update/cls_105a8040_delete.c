/* @k10d cls_105a8040_delete @ 0x104679d8
 * name: verified (structural evidence: stores vtable 0x105a8040 to *this; heap_free(this) under (param_2 & 1))
 * unit: 146_firmware_update (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a8040 (vtable 0x105a8040): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a8040 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a8040_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105a8040/*ROM*/;
    free_heap_if_flagged_10467326(param_1 + 0x84,2);
    free_heap_block_if_flagged_10467726((int)param_1 + 0x205,2);
    heap_free_if_flagged(param_1 + 0x81,2);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
