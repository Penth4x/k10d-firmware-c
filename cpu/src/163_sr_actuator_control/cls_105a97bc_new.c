/* @k10d cls_105a97bc_new @ 0x10470e68
 * name: verified (structural evidence: heap_alloc(0x8) when NULL; stores vtable 0x105a97bc; returns param_1)
 * unit: 163_sr_actuator_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a97bc (vtable 0x105a97bc, 0x8 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x8) when NULL; stores vtable 0x105a97bc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a97bc_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)8), param_1 != (uint32_t *)0x0)) {
    cls_1059e380_new(param_1);
    *param_1 = (uint32_t)&DAT_105a97bc/*ROM*/;
    param_1[1] = 0;
  }
  return param_1;
}
