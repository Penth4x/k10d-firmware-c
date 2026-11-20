/* @k10d cls_1055a234_new @ 0x1038f360
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x1055a234; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1055a234 (vtable 0x1055a234, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x1055a234; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_1055a234_new(cls_1055a234 *param_1)

{
  if ((param_1 != (cls_1055a234 *)0x0) ||
     (param_1 = (cls_1055a234 *)heap_alloc((void *)0x2c), param_1 != (cls_1055a234 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_1055a234/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_1055a2bc/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_1055a2e4/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x28 = 0;
  }
  return (cls_10559fc0 *)param_1;
}
