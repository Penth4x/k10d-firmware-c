/* @k10d cls_105d6ce0_new @ 0x1051cf32
 * name: verified (structural evidence: heap_alloc(0x64) when NULL; stores vtable 0x105d6ce0; returns param_1)
 * unit: 276_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d6ce0 (vtable 0x105d6ce0, 0x64 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x64) when NULL; stores vtable 0x105d6ce0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105d6c2c * cls_105d6ce0_new(cls_105d6ce0 *param_1)

{
  if ((param_1 != (cls_105d6ce0 *)0x0) ||
     (param_1 = (cls_105d6ce0 *)heap_alloc((void *)100), (cls_105d6c2c *)param_1 != (cls_105d6c2c *)0x0)) {
    cls_105d6c2c_new((cls_105d6c2c *)param_1);
    ((cls_105d6c2c *)param_1)->field_0x4 = 0x105d6ce0/*ROM*/;
    ((cls_105d6c2c *)param_1)->field_0x58 = 0;
    ((cls_105d6c2c *)param_1)->field_0x5c = 0;
    ((cls_105d6c2c *)param_1)->field_0x60 = 0;
  }
  return (cls_105d6c2c *)param_1;
}
