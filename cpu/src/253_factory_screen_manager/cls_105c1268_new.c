/* @k10d cls_105c1268_new @ 0x104e6ea4
 * name: verified (structural evidence: heap_alloc(0x10) when NULL; stores vtable 0x105c1268; returns param_1)
 * unit: 253_factory_screen_manager (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c1268 (vtable 0x105c1268, 0x10 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x10) when NULL; stores vtable 0x105c1268; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105c1268_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x10), param_1 != (uint32_t *)0x0)) {
    cls_105b68b0_new(param_1);
    param_1[2] = 0x105c1268/*ROM*/;
    param_1[3] = 0;
  }
  return (int)param_1;
}
