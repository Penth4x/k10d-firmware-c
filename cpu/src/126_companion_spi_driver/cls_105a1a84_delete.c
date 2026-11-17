/* @k10d cls_105a1a84_delete @ 0x1044779e
 * name: verified (structural evidence: stores vtable 0x105a1a84 to *this; heap_free(this) under (param_2 & 1))
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105a1a84 (vtable 0x105a1a84): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105a1a84 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105a1a84_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x105a1a84/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x105a1b04/*ROM*/;
    free_heap_if_flagged_10447356(param_1 + 0x1b4,2);
    free_heap_if_flagged_10447066(param_1 + 0x1a4,2);
    free_heap_if_flagged_10446f50(param_1 + 0x194,2);
    free_heap_if_flagged_1044bac8(param_1 + 0x17d,2);
    free_heap_if_flagged_1044be66(param_1 + 0x175,2);
    free_heap_if_flagged_1044b9bc(param_1 + 0x165,2);
    free_heap_if_flagged_1044b898((void *)(param_1 + 0x161),2);
    cls_105c2120_delete(param_1 + 0x124,2);
    cls_105a1798_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
