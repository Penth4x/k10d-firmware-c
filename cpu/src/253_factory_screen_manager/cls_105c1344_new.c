/* @k10d cls_105c1344_new @ 0x104e7154
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105c1344; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c1344 (vtable 0x105c1344, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105c1344; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105c1344_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e100_new(param_1);
    *param_1 = 0x105c1344/*ROM*/;
    param_1[10] = 0;
    cls_105a2be0_new((void *)(param_1 + 0xb));
    cls_105a2be0_new((void *)(param_1 + 0xd));
    *(uint8_t *)(param_1 + 0xf) = 0;
    *(uint8_t *)((int)param_1 + 0x3d) = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  return param_1;
}
