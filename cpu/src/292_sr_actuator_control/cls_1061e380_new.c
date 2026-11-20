/* @k10d cls_1061e380_new @ 0x105339fc
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1061e380; returns param_1)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e380 (vtable 0x1061e380, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1061e380; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_1061e380_new(cls_1061e380 *param_1)

{
  if ((param_1 != (cls_1061e380 *)0x0) ||
     (param_1 = (cls_1061e380 *)heap_alloc((void *)8), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1061e380);
    ((cls_105b6a50 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_105b6a50 *)param_1;
}
