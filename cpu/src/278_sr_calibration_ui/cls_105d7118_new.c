/* @k10d cls_105d7118_new @ 0x10520410
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105d7118; returns param_1)
 * unit: 278_sr_calibration_ui (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d7118 (vtable 0x105d7118, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105d7118; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d7118_new(uint32_t *param_1,int param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105b81b0_new(param_1);
    *param_1 = 0x105d7118/*ROM*/;
    param_1[1] = param_2 + -1;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
