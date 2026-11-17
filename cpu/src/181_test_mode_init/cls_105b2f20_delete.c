/* @k10d cls_105b2f20_delete @ 0x10486d68
 * name: verified (structural evidence: stores vtable 0x105b2f20 to *this; heap_free(this) under (param_2 & 1))
 * unit: 181_test_mode_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b2f20 (vtable 0x105b2f20): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b2f20 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b2f20_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x48) = &DAT_105b2f20/*ROM*/;
    *(void **)(param_1 + 0x50) = &DAT_105b2f50/*ROM*/;
    cls_105a2a8c_delete((void *)(param_1 + 0x4c),0);
    classic_menu_reg(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
