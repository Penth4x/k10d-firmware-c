/* @k10d cls_1061e4c0_new @ 0x105340a6
 * name: verified (structural evidence: heap_alloc(0x14) when NULL; stores vtable 0x1061e4c0; returns param_1)
 * unit: 292_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_1061e4c0 (vtable 0x1061e4c0, 0x14 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x14) when NULL; stores vtable 0x1061e4c0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

cls_105b49ec * cls_1061e4c0_new(cls_1061e4c0 *param_1)

{
  if ((param_1 != (cls_1061e4c0 *)0x0) ||
     (param_1 = (cls_1061e4c0 *)heap_alloc((void *)0x14), (cls_105b49ec *)param_1 != (cls_105b49ec *)0x0)) {
    cls_105b49ec_new((cls_105b49ec *)param_1);
    ((cls_105b49ec *)param_1)->field_0xc = (uint32_t)&DAT_1061e4c0;
    ((cls_105b49ec *)param_1)->field_0x10 = 0;
  }
  return (cls_105b49ec *)param_1;
}
