/* @k10d cls_10596808_new @ 0x103dd360
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10596808; returns param_1)
 * unit: 080_settings_ui_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10596808 (vtable 0x10596808, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10596808; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_10596808_new(cls_10596808 *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_10596808 *)0x0) ||
     (param_1 = (cls_10596808 *)heap_alloc((void *)0x28), param_1 != (cls_10596808 *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x10596808/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0xff;
    param_1->field_0x23 = 0;
    param_1->field_0x24 = 0xff;
    param_1->field_0x25 = '\0';
    (*pcRam1059681c)((int)&param_1->field_0x0 + (int)sRam10596818);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    instantiate_and_link_object_tree_103db256(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
