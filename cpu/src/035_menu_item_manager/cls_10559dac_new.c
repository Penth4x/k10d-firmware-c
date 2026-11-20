/* @k10d cls_10559dac_new @ 0x1038ce58
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x10559dac; returns param_1)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_10559dac (vtable 0x10559dac, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x10559dac; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_10559fc0 * cls_10559dac_new(cls_10559dac *param_1)

{
  if ((param_1 != (cls_10559dac *)0x0) ||
     (param_1 = (cls_10559dac *)heap_alloc((void *)0x28), (cls_10559fc0 *)param_1 != (cls_10559fc0 *)0x0)) {
    cls_10559fc0_new((cls_10559fc0 *)param_1);
    ((cls_10559fc0 *)param_1)->field_0x0 = (uint32_t)&DAT_10559dac/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x4 = (uint32_t)&DAT_10559e34/*ROM*/;
    ((cls_10559fc0 *)param_1)->field_0x8 = (uint32_t)&DAT_10559e5c/*ROM*/;
  }
  return (cls_10559fc0 *)param_1;
}
