/* @k10d cls_105aaf90_delete @ 0x1047f810
 * name: verified (structural evidence: stores vtable 0x105aaf90 to *this; heap_free(this) under (param_2 & 1))
 * unit: 171_settings_registry (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_105aaf90 (vtable 0x105aaf90): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x105aaf90 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105aaf90_delete(cls_105aaf90 *param_1,uint param_2)

{
  if (param_1 != (cls_105aaf90 *)0x0) {
    param_1->field_0x4 = 0x105aaf90/*ROM*/;
    initialize_object_header((cls_105aaf60 *)param_1);
    cls_105aaf60_delete((int)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
