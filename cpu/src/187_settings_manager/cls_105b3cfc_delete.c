/* @k10d cls_105b3cfc_delete @ 0x1048cd48
 * name: verified (structural evidence: stores vtable 0x105b3cfc to *this; heap_free(this) under (param_2 & 1))
 * unit: 187_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b3cfc (vtable 0x105b3cfc): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b3cfc to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b3cfc_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x20) = &DAT_105b3cfc/*ROM*/;
    cls_105b3d9c_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
