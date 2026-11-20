/* @k10d cls_105951ec_new @ 0x103c3fd4
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x105951ec; returns param_1)
 * unit: 056_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105951ec (vtable 0x105951ec, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x105951ec; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105951ec_new(cls_105951ec *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_105951ec *)0x0) ||
     (param_1 = (cls_105951ec *)heap_alloc((void *)0x24), param_1 != (cls_105951ec *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x105951ec/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    (*pcRam10595200)((int)&param_1->field_0x0 + (int)sRam105951fc);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    init_object_substructures_103c30f4(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
