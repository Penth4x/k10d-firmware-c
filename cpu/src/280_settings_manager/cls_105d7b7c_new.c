/* @k10d cls_105d7b7c_new @ 0x10521674
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105d7b7c; returns param_1)
 * unit: 280_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d7b7c (vtable 0x105d7b7c, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105d7b7c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105d7b7c * cls_105d7b7c_new(cls_105d7b7c *param_1)

{
  if ((param_1 != (cls_105d7b7c *)0x0) ||
     (param_1 = (cls_105d7b7c *)heap_alloc((void *)0x30), param_1 != (cls_105d7b7c *)0x0)) {
    cls_105d8304_new((cls_105d8304 *)param_1);
    cls_105d786c_new(&param_1->field_0x20);
    param_1->field_0xc = 0x105d7b7c/*ROM*/;
    param_1->field_0x10 = 0x105d7c44/*ROM*/;
    ((uint32_t *)&(param_1->field_0x20))[0] = 0x105d7c5c/*ROM*/;
    param_1->field_0x24 = 0;
    param_1->field_0x28 = 0;
    param_1->field_0x2c = 0;
  }
  return param_1;
}
