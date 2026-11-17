/* @k10d cls_105a023c_new @ 0x104396d6
 * name: verified (structural evidence: heap_alloc(0x30) when NULL; stores vtable 0x105a023c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a023c (vtable 0x105a023c, 0x30 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x30) when NULL; stores vtable 0x105a023c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a023c_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x30), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a023c/*ROM*/;
    param_1[2] = 0x105a0264/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    *(uint8_t *)(param_1 + 7) = *(uint8_t *)(param_2 + 3);
    param_1[8] = param_2[5];
    param_1[9] = param_2[6];
    param_1[10] = param_2[7];
    *(uint8_t *)(param_1 + 0xb) = 0;
    store_value_if_valid(param_1,param_2[4]);
    if (param_1[6] == 0) {
      param_1[6] = (uint32_t)(param_1 + 0xb);
    }
  }
  return (int)param_1;
}
