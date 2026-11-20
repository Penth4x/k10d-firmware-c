/* @k10d cls_1061e22c_new @ 0x10531a6e
 * name: verified (structural evidence: heap_alloc(0x24) when NULL; stores vtable 0x1061e22c; returns param_1)
 * unit: 291_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e22c (vtable 0x1061e22c, 0x24 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x24) when NULL; stores vtable 0x1061e22c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_1061e22c * cls_1061e22c_new(cls_1061e22c *param_1)

{
  if ((param_1 != (cls_1061e22c *)0x0) ||
     (param_1 = (cls_1061e22c *)heap_alloc((void *)0x24), param_1 != (cls_1061e22c *)0x0)) {
    cls_105b57dc_new((cls_105b57dc *)param_1);
    cls_105b9734_new((cls_105b9734 *)&param_1->field_0x4);
    param_1->field_0x0 = 0x1061e22c;
    param_1->field_0x8 = 0x1061e25c;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x1c = 0;
    param_1->field_0x20 = 0;
  }
  return param_1;
}
