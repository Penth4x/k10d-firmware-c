/* @k10d cls_10558c04_new @ 0x1037c29a
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x10558c04; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10558c04 (vtable 0x10558c04, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x10558c04; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_10558c04_new(cls_10558c04 *param_1)

{
  if ((param_1 != (cls_10558c04 *)0x0) ||
     (param_1 = (cls_10558c04 *)heap_alloc((void *)0x2c), (cls_10559fc0 *)param_1 != (cls_10559fc0 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_10558c04/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_10558c8c/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_10558cb4/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x28 = 1;
  }
  return (cls_10559fc0 *)param_1;
}
