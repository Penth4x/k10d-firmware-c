/* @k10d cls_105a0b94_new @ 0x10440ca6
 * name: verified (structural evidence: heap_alloc(0x40) when NULL; stores vtable 0x105a0b94; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0b94 (vtable 0x105a0b94, 0x40 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x40) when NULL; stores vtable 0x105a0b94; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0b94_new(uint32_t *param_1,uint32_t *param_2)

{
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x40), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0b94/*ROM*/;
    param_1[2] = 0x105a0bc4/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    param_1[8] = param_2[4];
    param_1[9] = param_2[5];
    param_1[10] = param_2[6];
    param_1[0xb] = param_2[7];
    param_1[0xc] = param_2[8];
    param_1[0xd] = param_2[9];
    param_1[0xe] = param_2[10];
    *(uint16_t *)(param_1 + 0xf) = 0;
    *(uint8_t *)((int)param_1 + 0x3e) = 0;
    store_value_if_valid(param_1,param_2[0xb]);
    init_object_field_via_helper((int)param_1,param_1[0xd]);
    init_object_field_via_helper((int)param_1,param_1[0xe]);
  }
  return (int)param_1;
}
