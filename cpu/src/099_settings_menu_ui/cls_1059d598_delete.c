/* @k10d cls_1059d598_delete @ 0x104227ca
 * name: verified (structural evidence: stores vtable 0x1059d598 to *this; heap_free(this) under (param_2 & 1))
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_1059d598 (vtable 0x1059d598): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x1059d598 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_1059d598_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(uint32_t *)(param_1 + 4) = 0x1059d598/*ROM*/;
    *(uint32_t *)(param_1 + 8) = 0x1059d708/*ROM*/;
    cls_1059e2e0_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
