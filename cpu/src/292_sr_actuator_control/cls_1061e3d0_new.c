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

uint32_t * cls_1061e3d0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_105b6a50_new(param_1);
    *param_1 = 0x1061e3d0;
    param_1[1] = 0;
  }
  return param_1;
}
