/* @k10d cls_105b45e4_delete @ 0x10493d46
 * name: verified (structural evidence: stores vtable 0x105b45e4 to *this; heap_free(this) under (param_2 & 1))
 * unit: 198_event_dispatch (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b45e4 (vtable 0x105b45e4): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b45e4 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b45e4_delete(cls_105b45e4 *param_1,uint param_2)

{
  void *pvVar1;
  
  if (param_1 != (cls_105b45e4 *)0x0) {
    param_1->field_0xc = (uintptr_t)(&DAT_105b45e4/*ROM*/);
    pvVar1 = (void *)((uintptr_t)(param_1->field_0x0));
    if (pvVar1 != 0) {
      (((vtbl_entry*)(*(int *)((int)pvVar1 + 0x20)))[1].fn)
                ((int)*(short *)(*(int *)((int)pvVar1 + 0x20) + 8) + (int)pvVar1,3);
    }
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
