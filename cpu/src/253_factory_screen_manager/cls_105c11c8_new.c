/* @k10d cls_105c11c8_new @ 0x104e65d4
 * name: verified (structural evidence: heap_alloc(0x2c) when NULL; stores vtable 0x105c11c8; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c11c8 (vtable 0x105c11c8, 0x2c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x2c) when NULL; stores vtable 0x105c11c8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c11c8_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x2c), param_1 != (uint32_t *)0x0)) {
    cls_105a1838_new(param_1);
    param_1[1] = 0x105c11c8/*ROM*/;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  return param_1;
}
