/* @k10d cls_1059dc64_new @ 0x104230fe
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x1059dc64; returns param_1)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059dc64 (vtable 0x1059dc64, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x1059dc64; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059dc64_new(cls_1059dc64 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_1059dc64 *)0x0) ||
     (param_1 = (cls_1059dc64 *)heap_alloc((void *)0x18), param_1 != (cls_1059dc64 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x1059dc64/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x15 = 0;
    param_1->field_0x16 = 0;
    (*pcRam1059dc78)((int)&param_1->field_0x0 + (int)sRam1059dc74);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    init_child_objects_and_register(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
