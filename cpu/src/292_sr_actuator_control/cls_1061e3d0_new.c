/* @k10d cls_1061e3d0_new @ 0x10533c38
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x1061e3d0; returns param_1)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e3d0 (vtable 0x1061e3d0, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x1061e3d0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_1061e3d0_new(cls_1061e3d0 *param_1)

{
  if ((param_1 != (cls_1061e3d0 *)0x0) ||
     (param_1 = (cls_1061e3d0 *)heap_alloc((void *)8), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1061e3d0);
    ((cls_105b6a50 *)param_1)->field1_0x4 = (uintptr_t)((void *)0x0);
  }
  return (cls_105b6a50 *)param_1;
}
