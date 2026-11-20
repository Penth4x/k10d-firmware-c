/* @k10d cls_105a0c1c_new @ 0x10441686
 * name: verified (structural evidence: heap_alloc(0x1c) when NULL; stores vtable 0x105a0c1c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0c1c (vtable 0x105a0c1c, 0x1c bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x1c) when NULL; stores vtable 0x105a0c1c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a0c1c": ignoring multiple overlapping fields */

int cls_105a0c1c_new(cls_105a0c1c *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105a0c1c *)0x0) ||
     (param_1 = (cls_105a0c1c *)heap_alloc((void *)0x1c), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a0c1c/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0c4c/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    uVar1 = param_2[3];
    ((cls_1059e2e0 *)param_1)->field5_0x18 = (short)((uint)uVar1 >> 0x10);
    ((cls_1059e2e0 *)param_1)->field6_0x1a = (short)uVar1;
    store_value_if_valid(param_1,param_2[2]);
    uVar1 = (uVar1 & ~(((uint64_t)0xffff) << 0)) | ((((uint64_t)(((cls_1059e2e0 *)param_1)->field5_0x18)) & ((uint64_t)0xffff)) << 0);
    uVar1 = (uVar1 & ~(((uint64_t)0xffff) << 16)) | ((((uint64_t)(((cls_1059e2e0 *)param_1)->field6_0x1a)) & ((uint64_t)0xffff)) << 16);
    init_object_field_via_helper((int)param_1,uVar1);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
