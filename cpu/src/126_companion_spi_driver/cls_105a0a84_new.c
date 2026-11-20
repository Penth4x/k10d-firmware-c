/* @k10d cls_105a0a84_new @ 0x1043fb06
 * name: verified (structural evidence: heap_alloc(0x44) when NULL; stores vtable 0x105a0a84; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0a84 (vtable 0x105a0a84, 0x44 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x44) when NULL; stores vtable 0x105a0a84; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0a84_new(cls_105a0a84 *param_1,uint32_t *param_2)

{
  int iVar2;
  
  if ((param_1 != (cls_105a0a84 *)0x0) ||
     (param_1 = (cls_105a0a84 *)heap_alloc((void *)0x44), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a0a84/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a0ab4/*ROM*/;
    ((cls_1059e2e0 *)param_1)->field3_0x10 = *param_2;
    ((cls_1059e2e0 *)param_1)->field4_0x14 = param_2[1];
    /* field5_0x18 holds a full 32-bit object pointer (read back below via *(int*)&field5_0x18
       and used for a vtable call). The decompiler split the single word store into two 16-bit
       halves (field5_0x18 high, field6_0x1a low); fcc's short field types then truncate it, so
       the pointer is written as a byte and corrupted. Store the whole word as the original does
       (stock writes a 32-bit W4 here). */
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field5_0x18 = param_2[2];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x1c = param_2[3];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x20 = param_2[4];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x24 = param_2[5];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x28 = param_2[6];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x2c = param_2[7];
    ((cls_1059e2e0 *)param_1)->field27_0x30 = param_2[8];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x34 = param_2[9];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x38 = param_2[10];
    *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x3c = param_2[0xc];
    ((cls_1059e2e0 *)param_1)->field_0x40 = 0x1f;
    store_value_if_valid(param_1,param_2[0xb]);
    iVar2 = *(int *)(*(int *)&((cls_1059e2e0 *)param_1)->field5_0x18 + 8);
    (((vtbl_entry*)(iVar2))[3].fn)
              (*(int *)&((cls_1059e2e0 *)param_1)->field5_0x18 + 8 + (int)((vtbl_entry*)(iVar2))[3].adj,
               &((cls_1059e2e0 *)param_1)->field_0x8,
               *(uint32_t *)&((cls_1059e2e0 *)param_1)->field_0x3c);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
