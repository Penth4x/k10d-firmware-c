/* @k10d cls_105b43cc_delete @ 0x104930ee
 * name: verified (structural evidence: stores vtable 0x105b43cc to *this; heap_free(this) under (param_2 & 1))
 * unit: 197_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b43cc (vtable 0x105b43cc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b43cc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b43cc_delete(int *param_1,uint param_2)

{
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&DAT_105b43cc/*ROM*/;
    cls_105a5c2c_delete(param_1 + 6,2);
    free_heap_block_if_flagged_1045bc54(param_1 + 4,2);
    cls_105b49ec_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
