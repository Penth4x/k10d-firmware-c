/* @k10d cls_105bfd6c_delete @ 0x104e332c
 * name: verified (structural evidence: stores vtable 0x105bfd6c to *this; heap_free(this) under (param_2 & 1))
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bfd6c (vtable 0x105bfd6c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bfd6c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bfd6c_delete(cls_105bfd6c *param_1,uint param_2)

{
  if (param_1 != (cls_105bfd6c *)0x0) {
    param_1->field_0x8 = (uintptr_t)((void *)0x105bfd6c/*ROM*/);
    cls_105bde1c_delete((cls_105bde1c *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
