/* @k10d cls_105b9724_delete @ 0x104cee00
 * name: verified (structural evidence: stores vtable 0x105b9724 to *this; heap_free(this) under (param_2 & 1))
 * unit: 239_settings_entry_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b9724 (vtable 0x105b9724): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b9724 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b9724_delete(int param_1,uint param_2)

{
  if (param_1 != 0) {
    *(void **)(param_1 + 4) = &DAT_105b9724/*ROM*/;
    cls_105b9714_delete(param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free(param_1);
    }
  }
  return;
}
