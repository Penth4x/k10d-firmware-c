/* @k10d cls_105a0df8_new @ 0x10442d42
 * name: verified (structural evidence: heap_alloc(0x18) when NULL; stores vtable 0x105a0df8; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0df8 (vtable 0x105a0df8, 0x18 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x18) when NULL; stores vtable 0x105a0df8; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0df8_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x18), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0df8/*ROM*/;
    param_1[2] = 0x105a0e20/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    store_value_if_valid(param_1,param_2[2]);
  }
  return (int)param_1;
}
