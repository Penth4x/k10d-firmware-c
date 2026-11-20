/* @k10d cls_1059ddb0_new @ 0x104247d8
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x1059ddb0; returns param_1)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059ddb0 (vtable 0x1059ddb0, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x1059ddb0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059ddb0_new(cls_1059ddb0 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_1059ddb0 *)0x0) ||
     (param_1 = (cls_1059ddb0 *)heap_alloc((void *)0x38), param_1 != (cls_1059ddb0 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x1059ddb0/*ROM*/);
    *(uint32_t *)&param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    *(uint32_t *)&param_1->field_0x20 = 0;
    *(uint32_t *)&param_1->field_0x24 = 0;
    *(uint32_t *)&param_1->field_0x28 = 0;
    *(uint32_t *)&param_1->field_0x2c = 0;
    *(uint32_t *)&param_1->field_0x30 = 0;
    param_1->field_0x34 = 0;
    param_1->field_0x35 = 0;
    (*pcRam1059ddc4)((int)&param_1->field_0x0 + (int)sRam1059ddc0);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    build_object_hierarchy_10423e64(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
