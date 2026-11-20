/* @k10d cls_105d70a0_new @ 0x10520196
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x105d70a0; returns param_1)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d70a0 (vtable 0x105d70a0, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x105d70a0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b7ee0 * cls_105d70a0_new(cls_105d70a0 *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105d70a0 *)0x0) ||
     (param_1 = (cls_105d70a0 *)heap_alloc((void *)0x14), (cls_105b7ee0 *)param_1 != (cls_105b7ee0 *)0x0)) {
    cls_105b7ee0_new((cls_105b7ee0 *)param_1);
    ((cls_105b7ee0 *)param_1)->field_0x0 = 0x105d70a0/*ROM*/;
    ((cls_105b7ee0 *)param_1)->field1_0x4 = 0;
    ((cls_105b7ee0 *)param_1)->field2_0x8 = 0;
    uVar1 = (uintptr_t)(alloc_and_zero_small_object((uint32_t *)0x0));
    ((cls_105b7ee0 *)param_1)->field4_0x10 = uVar1;
    ((cls_105b7ee0 *)param_1)->field3_0xc = (uintptr_t)(&((cls_105b7ee0 *)param_1)->field2_0x8);
  }
  return (cls_105b7ee0 *)param_1;
}
