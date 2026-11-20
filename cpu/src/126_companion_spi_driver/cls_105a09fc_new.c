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

int cls_105a09fc_new(cls_105a09fc *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a09fc *)0x0) ||
     (param_1 = (cls_105a09fc *)heap_alloc((void *)0x60), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a09fc/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0a2c/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    uVar1 = param_2[2];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field5_0x18 = uVar1;
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x1c = param_2[3];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[4];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[5];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x28 = param_2[6];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x2c = param_2[7];
    ((cls_1059e2e0 *)param_1)->field27_0x30 = param_2[8];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x34 = param_2[9];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x38 = param_2[10];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x3c = param_2[0xb];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x40 = param_2[0xc];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x44 = param_2[0xd];
    iVar2 = param_2[0xe];
    *(int *)&((cls_1059e2e0 *)param_1)->field_0x48 = iVar2;
    ((cls_1059e2e0 *)param_1)->field52_0x4c = 0;
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x50 = 0;
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x54 = param_2[0xf];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x58 = param_2[0x12];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x5c = param_2[0x13];
    ((cls_1059e2e0 *)param_1)->field52_0x4c = iVar2 << 1;
    *(int *)&((cls_1059e2e0 *)param_1)->field_0x50 = iVar2 << 2;
    store_value_if_valid(param_1,param_2[0x10]);
    iVar2 = *(int *)(*(int *)&((cls_1059e2e0 *)param_1)->field_0x5c + 8);
    (((vtbl_entry*)(iVar2))[3].fn)
              (*(int *)&((cls_1059e2e0 *)param_1)->field_0x5c + 8 + (int)((vtbl_entry*)(iVar2))[3].adj,
               &((cls_1059e2e0 *)param_1)->field_0x8,param_2[0x11]);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
