/* @k10d cls_105a1798_new @ 0x104467a6
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a1798; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a1798 (vtable 0x105a1798, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a1798; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t * cls_105a1798_new(uint32_t *param_1,uint32_t param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x1c), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a1798/*ROM*/;
    param_1[2] = 0x105a1810/*ROM*/;
    param_1[4] = param_2;
    param_1[5] = 0;
    *(uint16_t *)(param_1 + 6) = 0;
    *(uint16_t *)((int)param_1 + 0x1a) = 0;
  }
  return param_1;
}
