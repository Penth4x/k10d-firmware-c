/* @k10d cls_10562400_delete @ 0x103911a4
 * name: verified (structural evidence: stores vtable 0x10562400 to *this; heap_free(this) under (param_2 & 1))
 * unit: 038_settings_manager (unit names are model-proposed)
 * purpose:
 *   Deleting destructor of class cls_10562400 (vtable 0x10562400): resets the vtable,
 *   destroys members/base, frees the object when flags&1.
 * summary:
 *   VERIFIED: stores vtable 0x10562400 to *this; heap_free(this) under (param_2 & 1)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105bb314": ignoring overlapping field "field_0x8" */

void cls_10562400_delete(cls_10562400 *param_1,uint param_2)

{
  if (param_1 != (cls_10562400 *)0x0) {
    param_1->field_0x0 = 0x10562400/*ROM*/;
    param_1->field_0x4 = 0x10562540/*ROM*/;
    param_1->field_0x18 = 0x10562560/*ROM*/;
    param_1->field_0x2c = 0x10562590/*ROM*/;
    param_1->field_0x30 = 0x105625a8/*ROM*/;
    param_1->field_0x34 = 0x105625c8/*ROM*/;
    param_1->field_0x40 = 0x10562608/*ROM*/;
    param_1->field_0x98 = 0x10562650/*ROM*/;
    param_1[0x46].field_0x5c = 0x10;
    param_1[0x46].field_0x5d = 0x56;
    param_1[0x46].field_0x5e = 0x26;
    param_1[0x46].field_0x5f = 0x98;
    param_1[0x46].field_0x64 = 0x105626b0/*ROM*/;
    cls_105626c8_delete((cls_105626c8 *)&param_1[0x46].field_0x90,2);
    cls_105a2a8c_delete(&param_1[0x46].field_0x60,0);
    reset_vtable_and_free_if_flagged_10428182(&param_1[0x46].field_0x5c,0);
    cls_105bb314_delete((cls_105bb314 *)param_1,0);
    if ((param_2 & 1) != 0) {
      heap_free((int)param_1);
    }
  }
  return;
}
