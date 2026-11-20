/* @k10d cls_105b5c6c_new @ 0x104a1174
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105b5c6c; returns param_1)
 * unit: 205_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b5c6c (vtable 0x105b5c6c, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105b5c6c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b5c6c * cls_105b5c6c_new(cls_105b5c6c *param_1)

{
  if ((param_1 != (cls_105b5c6c *)0x0) ||
     (param_1 = (cls_105b5c6c *)heap_alloc((void *)100), param_1 != (cls_105b5c6c *)0x0)) {
    cls_105d6c2c_new((cls_105d6c2c *)param_1);
    param_1->field_0x4 = 0x105b5c6c/*ROM*/;
    param_1->field_0x58 = 0;
    param_1->field_0x5c = 0;
    param_1->field_0x60 = 0;
  }
  return param_1;
}
