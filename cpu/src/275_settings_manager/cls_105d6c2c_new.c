/* @k10d cls_105d6c2c_new @ 0x1051c27e
 * name: verified (structural evidence: heap_alloc(0x58) when NULL; stores vtable 0x105d6c2c; returns param_1)
 * unit: 275_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6c2c (vtable 0x105d6c2c, 0x58 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x58) when NULL; stores vtable 0x105d6c2c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105d6c2c_new(cls_105d6c2c *param_1)

{
  if ((param_1 != (cls_105d6c2c *)0x0) ||
     (param_1 = (cls_105d6c2c *)heap_alloc((void *)0x58), param_1 != (cls_105d6c2c *)0x0)) {
    cls_105b6320_new((cls_105b6320 *)param_1);
    param_1->field_0x4 = 0x105d6c2c/*ROM*/;
    param_1->field_0x8 = 0;
    param_1->field_0xc = 0;
    param_1->field_0x10 = 0;
    param_1->field_0x14 = 0;
    param_1->field_0x18 = 0;
    param_1->field_0x2c = 0;
    param_1->field_0x40 = 0;
  }
  return (int)param_1;
}
