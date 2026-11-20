/* @k10d cls_10559c4c_new @ 0x1038cdbc
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x10559c4c; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559c4c (vtable 0x10559c4c, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x10559c4c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_10559c4c_new(cls_10559c4c *param_1)

{
  if ((param_1 != (cls_10559c4c *)0x0) ||
     (param_1 = (cls_10559c4c *)heap_alloc((void *)0x30), (cls_10559fc0 *)param_1 != (cls_10559fc0 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_10559c4c/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_10559d64/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_10559d8c/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x28 = 0;
    ((cls_10559fc0 *)param_1)->field_0x2c = 0;
  }
  return (cls_10559fc0 *)param_1;
}
