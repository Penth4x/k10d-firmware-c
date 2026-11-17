/* @k10d cls_105b34ec_delete @ 0x10488960
 * name: verified (structural evidence: stores vtable 0x105b34ec to *this; heap_free(this) under (param_2 & 1))
 * unit: 184_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b34ec (vtable 0x105b34ec): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b34ec to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b34ec_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x48) = &DAT_105b34ec/*ROM*/;
    classic_menu_reg(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
