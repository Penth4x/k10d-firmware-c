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

uint32_t * cls_1061e4c0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_105b49ec_new(param_1);
    param_1[3] = (uint32_t)&DAT_1061e4c0;
    param_1[4] = 0;
  }
  return param_1;
}
