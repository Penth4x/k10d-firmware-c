/* @k10d cls_105b9a6c_delete @ 0x104cf86a
 * name: verified (structural evidence: stores vtable 0x105b9a6c to *this; heap_free(this) under (param_2 & 1))
 * unit: 241_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9a6c (vtable 0x105b9a6c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9a6c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9a6c_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x28) = 0x105b9a6c/*ROM*/;
    cls_105b9664_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
