/* @k10d cls_1059e078_new @ 0x10426d78
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x1059e078; returns param_1)
 * unit: 103_settings_ui_context (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059e078 (vtable 0x1059e078, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x1059e078; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059e078_new(cls_1059e078 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_1059e078 *)0x0) ||
     (param_1 = (cls_1059e078 *)heap_alloc((void *)0x24), param_1 != (cls_1059e078 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x1059e078/*ROM*/);
    *(uint32_t *)&param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    (*pcRam1059e08c)((int)&param_1->field_0x0 + (int)sRam1059e088);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    init_class_1059e078_members(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
