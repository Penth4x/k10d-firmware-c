/* @k10d cls_105a1798_new @ 0x104467a6
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a1798; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a1798 (vtable 0x105a1798, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a1798; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105a1798 * cls_105a1798_new(cls_105a1798 *param_1,uint32_t param_2)

{
  if ((param_1 != (cls_105a1798 *)0x0) ||
     (param_1 = (cls_105a1798 *)heap_alloc((void *)0x1c), param_1 != (cls_105a1798 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    param_1->field_0x4 = 0x105a1798/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = 0x105a1810/*ROM*/;
    param_1->field_0x10 = param_2;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1a = 0;
  }
  return param_1;
}
