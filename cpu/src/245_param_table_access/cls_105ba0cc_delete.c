/* @k10d cls_105ba0cc_delete @ 0x104d66b8
 * name: verified (structural evidence: stores vtable 0x105ba0cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ba0cc (vtable 0x105ba0cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ba0cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ba0cc_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 0x2b18) = 0x105ba0cc/*ROM*/;
    free_heap_if_flagged_104d60a6(param_1 + 0x2374,2);
    free_heap_if_flagged_104d79ba(param_1 + 0x2264,2);
    free_heap_if_flagged_104d51d8(param_1 + 0x2254,2);
    destroy_class_members_104d89dc(param_1 + 0x1990,2);
    free_heap_if_flagged_104d7e8e(param_1 + 0x1968,2);
    free_heap_if_flagged_104d7e8e(param_1 + 0x1940,2);
    free_heap_if_flagged_104d7a8e(param_1 + 0x1824,2);
    destroy_class_members_104d78aa(param_1 + 0x1740,2);
    destroy_class_members_104d64de(param_1 + 0xe98,2);
    destroy_class_members_104d64de(param_1 + 0x5f0,2);
    free_heap_if_flagged_104d7c40(param_1 + 0x2f8,2);
    free_heap_if_flagged_104d7c40(param_1,2);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
