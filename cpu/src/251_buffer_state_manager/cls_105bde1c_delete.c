/* @k10d cls_105bde1c_delete @ 0x104e1790
 * name: verified (structural evidence: stores vtable 0x105bde1c to *this; heap_free(this) under (param_2 & 1))
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105bde1c (vtable 0x105bde1c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105bde1c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105bde1c_delete(cls_105bde1c *param_1,uint param_2)

{
  if (param_1 != (cls_105bde1c *)0x0) {
    param_1->field_0x8 = (uintptr_t)(&DAT_105bde1c/*ROM*/);
    cls_105bd93c_delete((int)(param_1),(uint)(0));
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
