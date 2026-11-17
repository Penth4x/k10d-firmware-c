/* @k10d cls_10557a18_delete @ 0x103687b0
 * name: verified (structural evidence: stores vtable 0x10557a18 to *this; heap_free(this) under (param_2 & 1))
 * unit: 012_capture_context_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557a18 (vtable 0x10557a18): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557a18 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557a18_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_10557a18/*ROM*/;
    cls_105aae94_delete(param_1 + 0x46,2);
    cls_10558e74_delete(param_1 + 0x1b,2);
    free_heap_if_flagged_1051e8ae(param_1 + 7,2);
    cls_10557c88_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
