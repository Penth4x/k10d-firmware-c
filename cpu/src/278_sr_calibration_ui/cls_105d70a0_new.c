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

uint32_t * cls_105d70a0_new(uint32_t *param_1)

{
  uint32_t uVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x14), param_1 != (uint32_t *)0x0)) {
    cls_105b7ee0_new(param_1);
    *param_1 = 0x105d70a0/*ROM*/;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar1 = alloc_and_zero_small_object((uint32_t *)0x0);
    param_1[4] = uVar1;
    param_1[3] = param_1 + 2;
  }
  return param_1;
}
