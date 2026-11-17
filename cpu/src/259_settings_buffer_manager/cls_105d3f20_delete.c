/* @k10d cls_105d3f20_delete @ 0x104f4cbc
 * name: verified (structural evidence: stores vtable 0x105d3f20 to *this; heap_free(this) under (param_2 & 1))
 * unit: 259_settings_buffer_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d3f20 (vtable 0x105d3f20): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d3f20 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d3f20_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = 0x105d3f20/*ROM*/;
    param_1[1] = 0x105d3f58/*ROM*/;
    param_1[6] = 0x105d3f70/*ROM*/;
    cls_105a2af8_delete(param_1 + 0xe,2);
    cls_105a2b50_delete(param_1 + 2,0);
    reset_vtable_and_free_if_flagged_10428182(param_1 + 1,0);
    reset_vtable_and_free_if_flagged_10428264(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
