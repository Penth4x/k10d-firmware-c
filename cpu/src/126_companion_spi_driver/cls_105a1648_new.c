/* @k10d cls_105a1648_new @ 0x1044490a
 * name: verified (structural evidence: heap_alloc(0x38) when NULL; stores vtable 0x105a1648; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a1648 (vtable 0x105a1648, 0x38 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x38) when NULL; stores vtable 0x105a1648; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105a1648": ignoring overlapping field "field_0x10" */

int cls_105a1648_new(cls_105a1648 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  if ((param_1 != (cls_105a1648 *)0x0) ||
     (param_1 = (cls_105a1648 *)heap_alloc((void *)0x38), (cls_1059e2e0 *)param_1 != (cls_1059e2e0 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    ((cls_1059e2e0 *)param_1)->field_0x4 = 0x105a1648/*ROM*/;
    ((uint32_t *)&((((cls_1059e2e0 *)param_1)->field_0x8)))[0] = 0x105a1670/*ROM*/;
    iVar1 = 0;
    ((cls_1059e2e0 *)param_1)->field_0x34 = 0;
    ((cls_1059e2e0 *)param_1)->field_0x35 = 0;
    iVar2 = 3;
    do {
      *(uint8_t *)((int)&((cls_1059e2e0 *)param_1)->field4_0x14 + iVar1) = 0;
      (&((cls_1059e2e0 *)param_1)->field_0x24)[iVar1] = 0;
      *(uint8_t *)((int)&((cls_1059e2e0 *)param_1)->field4_0x14 + iVar1 + 1) = 0;
      (&((cls_1059e2e0 *)param_1)->field_0x25)[iVar1] = 0;
      *(uint8_t *)((int)&((cls_1059e2e0 *)param_1)->field4_0x14 + iVar1 + 2) = 0;
      (&((cls_1059e2e0 *)param_1)->field_0x26)[iVar1] = 0;
      *(uint8_t *)((int)&((cls_1059e2e0 *)param_1)->field4_0x14 + iVar1 + 3) = 0;
      (&((cls_1059e2e0 *)param_1)->field_0x27)[iVar1] = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    pvVar3 = (void *)get_or_init_sram_buffer_104277bc();
    uVar4 = read_table_entry_field(pvVar3,0xb0);
    ((cls_1059e2e0 *)param_1)->field3_0x10 = uVar4;
    store_value_if_valid(param_1,0xb1);
  }
  return (int)(cls_1059e2e0 *)param_1;
}
