/* @k10d cls_105d70f0_new @ 0x10520350
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105d70f0; returns param_1)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d70f0 (vtable 0x105d70f0, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105d70f0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7ee0 * cls_105d70f0_new(cls_105d70f0 *param_1)

{
  if ((param_1 != (cls_105d70f0 *)0x0) ||
     (param_1 = (cls_105d70f0 *)heap_alloc((void *)8), (cls_105b7ee0 *)param_1 != (cls_105b7ee0 *)0x0)) {
    cls_105b7ee0_new((cls_105b7ee0 *)param_1);
    ((cls_105b7ee0 *)param_1)->field_0x0 = 0x105d70f0/*ROM*/;
    ((cls_105b7ee0 *)param_1)->field1_0x4 = 0;
  }
  return (cls_105b7ee0 *)param_1;
}
