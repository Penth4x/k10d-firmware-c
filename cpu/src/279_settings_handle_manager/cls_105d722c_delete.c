/* @k10d cls_105d722c_delete @ 0x10520db2
 * name: verified (structural evidence: stores vtable 0x105d722c to *this; heap_free(this) under (param_2 & 1))
 * unit: 279_settings_handle_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105d722c (vtable 0x105d722c): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105d722c to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105d722c_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 0x20) = &DAT_105d722c/*ROM*/;
    cls_105b3d34_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
