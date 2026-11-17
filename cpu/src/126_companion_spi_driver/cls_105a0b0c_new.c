/* @k10d cls_105a0b0c_new @ 0x10440368
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105a0b0c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0b0c (vtable 0x105a0b0c, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105a0b0c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0b0c_new(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x34), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0b0c/*ROM*/;
    param_1[2] = 0x105a0b3c/*ROM*/;
    param_1[4] = *param_2;
    param_1[5] = param_2[1];
    param_1[6] = param_2[2];
    param_1[7] = param_2[3];
    param_1[8] = param_2[4];
    param_1[9] = param_2[5];
    param_1[10] = param_2[6];
    param_1[0xb] = param_2[8];
    *(uint16_t *)(param_1 + 0xc) = 0;
    store_value_if_valid(param_1,param_2[7]);
    iVar1 = *(int *)(param_1[7] + 8);
    (**(code **)(iVar1 + 0x1c))
              (param_1[7] + 8 + (int)*(short *)(iVar1 + 0x18),param_1 + 2,param_1[0xb]);
  }
  return (int)param_1;
}
