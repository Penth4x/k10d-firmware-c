/* @k10d cls_1061e420_new @ 0x10533dc2
 * name: verified (structural evidence: heap_alloc(0x4) when NULL; stores vtable 0x1061e420; returns param_1)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e420 (vtable 0x1061e420, 0x4 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x4) when NULL; stores vtable 0x1061e420; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b6a50 * cls_1061e420_new(cls_1061e420 *param_1)

{
  if ((param_1 != (cls_1061e420 *)0x0) ||
     (param_1 = (cls_1061e420 *)heap_alloc((void *)4), (cls_105b6a50 *)param_1 != (cls_105b6a50 *)0x0)) {
    cls_105b6a50_new((cls_105b6a50 *)param_1);
    ((cls_105b6a50 *)param_1)->field_0x0 = (uintptr_t)((void *)0x1061e420);
  }
  return (cls_105b6a50 *)param_1;
}
