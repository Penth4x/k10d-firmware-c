/* @k10d cls_1055a4c4_delete @ 0x10390de4
 * name: verified (structural evidence: stores vtable 0x1055a4c4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1055a4c4 (vtable 0x1055a4c4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1055a4c4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1055a4c4_delete(void *param_1,uint param_2)

{
  if (param_1 != (void *)0x0) {
    *(uint32_t *)((int)param_1 + 0x14) = 0x1055a4c4/*ROM*/;
    cls_105a2be0_delete((void *)((int)param_1 + 0xc),2);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
