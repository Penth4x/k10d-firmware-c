/* @k10d cls_1059630c_new @ 0x103d455e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x1059630c; returns param_1)
 * unit: 075_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1059630c (vtable 0x1059630c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x1059630c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int cls_1059630c_new(cls_1059630c *param_1)

{
  uint32_t extraout_r5;
  void *r6_in;
  void *r7_in;
  
  if ((param_1 != (cls_1059630c *)0x0) ||
     (param_1 = (cls_1059630c *)heap_alloc((void *)0x24), param_1 != (cls_1059630c *)0x0)) {
    cls_105956e0_new((cls_105956e0 *)param_1);
    param_1->field_0x10 = (uintptr_t)(&DAT_1059630c/*ROM*/);
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
    param_1->field_0x21 = 0;
    param_1->field_0x22 = 0;
    (*_DAT_10596320/*ROM*/)((int)&param_1->field_0x0 + (int)_DAT_1059631c/*ROM*/);
    (((vtbl_entry*)(param_1->field_0x10))[3].fn)
              ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0x10))[3].adj);
    init_object_substructures_103d4076(param_1,extraout_r5,r6_in,r7_in);
  }
  return (int)param_1;
}
