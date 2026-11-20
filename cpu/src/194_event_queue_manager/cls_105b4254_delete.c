/* @k10d cls_105b4254_delete @ 0x10492192
 * name: verified (structural evidence: stores vtable 0x105b4254 to *this; heap_free(this) under (param_2 & 1))
 * unit: 194_event_queue_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105b4254 (vtable 0x105b4254): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105b4254 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105b4254_delete(cls_105b4254 *param_1,uint param_2)

{
  int iVar1;
  
  if (param_1 != (cls_105b4254 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105b4254/*ROM*/);
    param_1->field_0x4 = (uintptr_t)(&DAT_105b42b4/*ROM*/);
    param_1->field_0x8 = (uintptr_t)(&DAT_105b42dc/*ROM*/);
    iVar1 = param_1->field_0x10;
    if (iVar1 != 0) {
      (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].fn)
                (((vtbl_entry*)(*(int *)(iVar1 + 0xc)))[6].adj + iVar1,3);
    }
    reset_vtable_and_free_if_owned_10428142(&param_1->field_0x8,0);
    reset_vtable_and_free_if_flagged_10428264(&param_1->field_0x4,0);
    cls_105b51ec_delete((cls_105b51ec *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
