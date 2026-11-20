/* @k10d cls_10559b1c_new @ 0x1038bc72
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10559b1c; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559b1c (vtable 0x10559b1c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10559b1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_10559b1c_new(cls_10559b1c *param_1)

{
  if ((param_1 != (cls_10559b1c *)0x0) ||
     (param_1 = (cls_10559b1c *)heap_alloc((void *)0x28), (cls_10559fc0 *)param_1 != (cls_10559fc0 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_10559b1c/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_10559ba4/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_10559bcc/*ROM*/;
  }
  return (cls_10559fc0 *)param_1;
}
