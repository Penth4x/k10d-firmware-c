/* @k10d cls_105575b0_delete @ 0x10363c9c
 * name: verified (structural evidence: stores vtable 0x105575b0 to *this; heap_free(this) under (param_2 & 1))
 * unit: 002_settings_context (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105575b0 (vtable 0x105575b0): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105575b0 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105575b0_delete(cls_105575b0 *param_1,uint param_2)

{
  if (param_1 != (cls_105575b0 *)0x0) {
    param_1->field_0x0 = (uintptr_t)(&DAT_105575b0/*ROM*/);
    destroy_five_member_objects(&param_1->field_0x23c,2);
    cls_105aae94_delete((cls_105aae94 *)&param_1->field_0x224,2);
    cls_10558a60_delete((cls_10558a60 *)&param_1->field_0x1dc,2);
    cls_10559218_delete((cls_10559218 *)&param_1->field_0x1b4,2);
    cls_10558568_delete((cls_10558568 *)&param_1->field_0x144,2);
    cls_10558830_delete((cls_10558830 *)&param_1->field_0xd8,2);
    cls_105586cc_delete((cls_105586cc *)&param_1->field_0x74,2);
    free_heap_if_flagged_1051e492(&param_1->field_0x1c,2);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
