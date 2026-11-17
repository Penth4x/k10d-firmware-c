/* @k10d cls_10563dd8_delete @ 0x1039c494
 * name: verified (structural evidence: stores vtable 0x10563dd8 to *this; heap_free(this) under (param_2 & 1))
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10563dd8 (vtable 0x10563dd8): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10563dd8 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10563dd8_delete(uint32_t *param_1,uint param_2)

{
  if (param_1 != (uint32_t *)0x0) {
    *param_1 = (uint32_t)&DAT_10563dd8/*ROM*/;
    param_1[1] = (uint32_t)&DAT_10563e48/*ROM*/;
    param_1[2] = (uint32_t)&DAT_10563e70/*ROM*/;
    call_single_helper_1039c502((int)param_1);
    cls_105b4254_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
