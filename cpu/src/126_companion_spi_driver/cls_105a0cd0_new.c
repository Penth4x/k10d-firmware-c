/* @k10d cls_105a0cd0_new @ 0x10441a78
 * name: verified (structural evidence: heap_alloc(0x34) when NULL; stores vtable 0x105a0cd0; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0cd0 (vtable 0x105a0cd0, 0x34 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x34) when NULL; stores vtable 0x105a0cd0; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a0cd0": ignoring multiple overlapping fields */

int cls_105a0cd0_new(cls_105a0cd0 *param_1,uint32_t *param_2)

{
  uint32_t uVar1;
  
  if ((param_1 != (cls_105a0cd0 *)0x0) ||
     (param_1 = (cls_105a0cd0 *)heap_alloc((void *)0x34), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a0cd0/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0d00/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    uVar1 = param_2[2];
    ((cls_1059e2e0 *)param_1)->field5_0x18 = (short)((uint)uVar1 >> 0x10);
    ((cls_1059e2e0 *)param_1)->field6_0x1a = (short)uVar1;
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x1c = param_2[3];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[4];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[5];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x28 = param_2[6];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x2c = param_2[7];
    ((cls_1059e2e0 *)param_1)->field27_0x30 = param_2[8];
    init_object_field_via_helper((int)param_1,param_2[10]);
    store_value_if_valid(param_1,param_2[9]);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
