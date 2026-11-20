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

/* WARNING: Struct "cls_105a023c": ignoring multiple overlapping fields */

int cls_105a023c_new(cls_105a023c *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  int iVar2;
  
  if ((param_1 != (cls_105a023c *)0x0) ||
     (param_1 = (cls_105a023c *)heap_alloc((void *)0x30), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a023c/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0264/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    uVar1 = param_2[2];
    ((cls_1059e2e0 *)param_1)->field5_0x18 = (short)((uint)uVar1 >> 0x10);
    ((cls_1059e2e0 *)param_1)->field6_0x1a = (short)uVar1;
    ((cls_1059e2e0 *)param_1)->field_0x1c = *(uint8_t *)(param_2 + 3);
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[5];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[6];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x28 = param_2[7];
    ((cls_1059e2e0 *)param_1)->field_0x2c = 0;
    store_value_if_valid(param_1,param_2[4]);
    iVar2 = (iVar2 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)(((cls_1059e2e0 *)param_1)->field5_0x18)) & ((uint64_t)0xffff)) << 0);
    iVar2 = (iVar2 & ~(((uint64_t)0xffff) << 16)) | ((((uint64_t)(((cls_1059e2e0 *)param_1)->field6_0x1a)) & ((uint64_t)0xffff)) << 16);
    if (iVar2 == 0) {
      *(uint8_t **)&((cls_1059e2e0 *)param_1)->field5_0x18 =
           &((cls_1059e2e0 *)param_1)->field_0x2c;
    }
  }
  return (int)(cls_1059e2e0 *)param_1;
}
