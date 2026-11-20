/* @k10d cls_105a0d5c_new @ 0x10442712
 * name: verified (structural evidence: heap_alloc(0x28) when NULL; stores vtable 0x105a0d5c; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0d5c (vtable 0x105a0d5c, 0x28 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x28) when NULL; stores vtable 0x105a0d5c; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0d5c_new(cls_105a0d5c *param_1,int *param_2)

{
  int iVar1;
  
  if ((param_1 != (cls_105a0d5c *)0x0) ||
     (param_1 = (cls_105a0d5c *)heap_alloc((void *)0x28), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a0d5c/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0d8c/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = param_2[1];
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[2];
    iVar1 = param_2[3];
    ((cls_1059e2e0 *)param_1)->field5_0x18 = (short)((uint)iVar1 >> 0x10);
    ((cls_1059e2e0 *)param_1)->field6_0x1a = (short)iVar1;
    *(int *)&((cls_1059e2e0 *)param_1)->field_0x1c = param_2[4];
    *(int *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[5];
    *(int *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[6];
    store_value_if_valid(param_1,param_2[7]);
    iVar1 = *(int *)(*param_2 + 8);
    (((vtbl_entry*)(iVar1))[3].fn)
              (*param_2 + 8 + (int)((vtbl_entry*)(iVar1))[3].adj,&((cls_1059e2e0 *)param_1)->field_0x8,
               param_2[8]);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
