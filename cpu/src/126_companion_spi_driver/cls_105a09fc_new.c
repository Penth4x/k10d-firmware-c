/* @k10d cls_105a09fc_new @ 0x1043ea20
 * name: verified (structural evidence: heap_alloc(0x60) when NULL; stores vtable 0x105a09fc; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a09fc (vtable 0x105a09fc, 0x60 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x60) when NULL; stores vtable 0x105a09fc; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a09fc_new(uint32_t *param_1,uint32_t *param_2)

{
  int iVar1;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x60), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a09fc/*ROM*/;
    param_1[2] = 0x105a0a2c/*ROM*/;
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
    param_1[0xf] = param_2[0xb];
    param_1[0x10] = param_2[0xc];
    param_1[0x11] = param_2[0xd];
    iVar1 = param_2[0xe];
    param_1[0x12] = iVar1;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = param_2[0xf];
    param_1[0x16] = param_2[0x12];
    param_1[0x17] = param_2[0x13];
    param_1[0x13] = iVar1 << 1;
    param_1[0x14] = iVar1 << 2;
    store_value_if_valid(param_1,param_2[0x10]);
    iVar1 = *(int *)(param_1[0x17] + 8);
    (**(code **)(iVar1 + 0x1c))
              (param_1[0x17] + 8 + (int)*(short *)(iVar1 + 0x18),param_1 + 2,param_2[0x11]);
  }
  return (int)param_1;
}
