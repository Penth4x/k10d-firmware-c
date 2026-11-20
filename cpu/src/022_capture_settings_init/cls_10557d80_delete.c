/* @k10d cls_10557d80_delete @ 0x1036d0c4
 * name: verified (structural evidence: stores vtable 0x10557d80 to *this; heap_free(this) under (param_2 & 1))
 * unit: 022_capture_settings_init (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10557d80 (vtable 0x10557d80): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10557d80 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_10557d80_delete(cls_10557d80 *param_1,uint param_2)

{
  if (param_1 != (cls_10557d80 *)0x0) {
    param_1->field_0x0 = (uint)&DAT_10557d80/*ROM*/;
    cls_1056b154_delete((cls_1056b154 *)&param_1->field_0x21c,2);
    cls_105590b8_delete((cls_105590b8 *)&param_1->field_0x170,2);
    cls_10559448_delete((cls_10559448 *)&param_1->field_0xe4,2);
    cls_105592e8_delete((cls_105592e8 *)&param_1->field_0x74,2);
    free_heap_if_flagged_1051e492(&param_1->field_0x1c,2);
    cls_10557c88_delete((cls_10557c88 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
