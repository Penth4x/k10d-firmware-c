/* @k10d cls_105b3d9c_new @ 0x1048d2ba
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3d9c (vtable 0x105b3d9c, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105b3d9c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105b3d9c_new(cls_105b3d9c *param_1)

{
  if ((param_1 != (cls_105b3d9c *)0x0) ||
     (param_1 = (cls_105b3d9c *)heap_alloc((void *)0x2c), param_1 != (cls_105b3d9c *)0x0)) {
    cls_105b3cdc_new((cls_105b3cdc *)param_1);
    param_1->field_0x20 = (uint32_t)&DAT_105b3d9c/*ROM*/;
    param_1->field_0x24 = 7;
    param_1->field_0x26 = 0;
    param_1->field_0x28 = 0;
  }
  return (int)param_1;
}
