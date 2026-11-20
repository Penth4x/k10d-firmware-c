/* @k10d cls_105a0f08_new @ 0x104434d2
 * name: verified (structural evidence: heap_alloc(0x88) when NULL; stores vtable 0x105a0f08; returns param_1)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Constructor of class cls_105a0f08 (vtable 0x105a0f08, 0x88 bytes): heap-allocates the
 *   object when this is NULL, initialises it, returns it.
 * summary:
 *   VERIFIED: heap_alloc(0x88) when NULL; stores vtable 0x105a0f08; returns param_1
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int cls_105a0f08_new(cls_105a0f08 *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint32_t uVar5;
  
  if ((param_1 != (cls_105a0f08 *)0x0) || (param_1 = (cls_105a0f08 *)heap_alloc((void *)0x88), param_1 != (cls_105a0f08 *)0x0)) {
    cls_1059e2e0_new((cls_1059e2e0 *)param_1);
    param_1->field_0x4 = 0x105a0f08/*ROM*/;
    ((uint32_t *)&(param_1->field_0x8))[0] = (uint32_t)((void *)0x105a0f30/*ROM*/);
    cls_105a2be0_new((cls_105a2be0 *)&((uint32_t *)&(param_1->field_0x8))[2]);
    pvVar3 = (void *)get_or_init_sram_buffer_104277bc();
    pvVar4 = (void *)read_table_entry_field(pvVar3,0x2c);
    param_1->field_0x1c = (uintptr_t)(pvVar4);
    uVar5 = read_table_entry_field(pvVar3,0x2a);
    param_1->field_0x20 = uVar5;
    uVar5 = read_table_entry_field(pvVar3,0xb4);
    *(uint32_t *)&param_1->field_0x18 = uVar5;
    iVar1 = 0;
    param_1->field_0x83 = 0;
    param_1->field_0x84 = 0;
    iVar2 = 0x1e;
    do {
      (&param_1->field_0x24)[iVar1] = 0;
      (&param_1->field_0x25)[iVar1] = 0;
      (&param_1->field_0x26)[iVar1] = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
    param_1->field_0x81 = 0;
    param_1->field_0x82 = 0x80;
    store_value_if_valid(param_1,0xa9);
  }
  return (int)param_1;
}
