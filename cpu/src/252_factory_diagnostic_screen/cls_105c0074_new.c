/* @k10d cls_105c0074_new @ 0x104e337a
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105c0074; returns param_1)
 * unit: 252_factory_diagnostic_screen (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105c0074 (vtable 0x105c0074, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105c0074; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void cls_105c0074_new(uint32_t *param_1)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    param_1[6] = 0x105c0074/*ROM*/;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(uint16_t *)(param_1 + 5) = 0;
    *(uint8_t *)((int)param_1 + 0x16) = 1;
    *(uint8_t *)((int)param_1 + 0x17) = 0;
  }
  return;
}
