/* @k10d cls_10597bf0_new @ 0x103f20c8
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x10597bf0; returns param_1)
 * unit: 088_capture_settings_menu (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10597bf0 (vtable 0x10597bf0, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x10597bf0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10597bf0_new(cls_10597bf0 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_10597bf0 *)0x0) ||
     (param_1 = (cls_10597bf0 *)heap_alloc((void *)0x24), param_1 != (cls_10597bf0 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x10597bf0/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    (*pcRam10597c04)((int)&param_1->field_0x0 + (int)sRam10597c00);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    build_object_hierarchy_103f1bbc(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
