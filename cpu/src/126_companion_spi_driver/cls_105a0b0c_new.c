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

int cls_105a0b0c_new(cls_105a0b0c *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a0b0c *)0x0) ||
     (param_1 = (cls_105a0b0c *)heap_alloc((void *)0x34), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a0b0c/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0b3c/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    uVar1 = param_2[2];
    ((cls_1059e2e0 *)param_1)->field5_0x18 = (short)((uint)uVar1 >> 0x10);
    ((cls_1059e2e0 *)param_1)->field6_0x1a = (short)uVar1;
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x1c = param_2[3];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[4];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[5];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x28 = param_2[6];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x2c = param_2[8];
    *(uint16_t *)&((cls_1059e2e0 *)param_1)->field27_0x30 = 0;
    store_value_if_valid(param_1,param_2[7]);
    iVar2 = *(int *)(*(int *)&((cls_1059e2e0 *)param_1)->field_0x1c + 8);
    (((vtbl_entry*)(iVar2))[3].fn)
              (*(int *)&((cls_1059e2e0 *)param_1)->field_0x1c + 8 + (int)((vtbl_entry*)(iVar2))[3].adj,
               &((cls_1059e2e0 *)param_1)->field_0x8,
               *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x2c);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
