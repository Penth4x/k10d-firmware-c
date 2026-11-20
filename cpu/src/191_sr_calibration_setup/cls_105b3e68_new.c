/* @k10d cls_105b3e68_new @ 0x1048dbc6
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105b3e68; returns param_1)
 * unit: 191_sr_calibration_setup (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105b3e68 (vtable 0x105b3e68, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105b3e68; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b3d9c * cls_105b3e68_new(cls_105b3e68 *param_1)

{
  if ((param_1 != (cls_105b3e68 *)0x0) ||
     (param_1 = (cls_105b3e68 *)heap_alloc((void *)0x2c), (cls_105b3d9c *)param_1 != (cls_105b3d9c *)0x0)) {
    cls_105b3d9c_new((cls_105b3d9c *)param_1);
    ((cls_105b3d9c *)param_1)->field_0x20 = (uint8_t)&DAT_105b3e68/*ROM*/;
  }
  return (cls_105b3d9c *)param_1;
}
