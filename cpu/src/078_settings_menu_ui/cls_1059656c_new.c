/* @k10d cls_1059656c_new @ 0x103d9cca
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x1059656c; returns param_1)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059656c (vtable 0x1059656c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x1059656c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_1059656c_new(cls_1059656c *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_1059656c *)0x0) ||
     (param_1 = (cls_1059656c *)heap_alloc((void *)0x28), param_1 != (cls_1059656c *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)((void *)0x1059656c/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    param_1->field_0x23 = 0;
    param_1->field_0x24 = 0xff;
    (*pcRam10596580)((int)&param_1->field_0x0 + (int)sRam1059657c);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    instantiate_and_link_object_graph_103d7d7a(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
