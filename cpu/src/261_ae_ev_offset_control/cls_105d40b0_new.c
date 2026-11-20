/* @k10d cls_105d40b0_new @ 0x104f8a40
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105d40b0; returns param_1)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105d40b0 (vtable 0x105d40b0, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105d40b0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105d40b0_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_1059e4e0_new(param_1);
    cls_1059e408_new((void *)(param_1 + 1));
    *param_1 = 0x105d40b0/*ROM*/;
    param_1[1] = 0x105d40e0/*ROM*/;
    param_1[3] = 0;
    param_1[4] = 0;
    cls_1059e288_new((void *)(param_1 + 5));
  }
  return param_1;
}
