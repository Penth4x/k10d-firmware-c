/* @k10d cls_105ba0ac_delete @ 0x104d6ffe
 * name: verified (structural evidence: stores vtable 0x105ba0ac to *this; heap_free(this) under (param_2 & 1))
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105ba0ac (vtable 0x105ba0ac): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105ba0ac to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105ba0ac_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x1c) = 0x105ba0ac/*ROM*/;
    reset_vtable_and_free_if_flagged_104ddfe6(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
