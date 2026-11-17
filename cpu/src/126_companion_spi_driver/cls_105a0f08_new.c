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

int cls_105a0f08_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x88), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a0f08/*ROM*/;
    param_1[2] = 0x105a0f30/*ROM*/;
    cls_105a2be0_new(param_1 + 4);
    pvVar3 = (void *)get_or_init_sram_buffer_104277bc();
    uVar4 = read_table_entry_field(pvVar3,0x2c);
    param_1[7] = uVar4;
    uVar4 = read_table_entry_field(pvVar3,0x2a);
    param_1[8] = uVar4;
    uVar4 = read_table_entry_field(pvVar3,0xb4);
    param_1[6] = uVar4;
    iVar1 = 0;
    *(uint8_t *)((int)param_1 + 0x83) = 0;
    *(uint8_t *)(param_1 + 0x21) = 0;
    iVar2 = 0x1e;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x24) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x25) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x26) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 3;
    } while (-1 < iVar2);
    *(uint8_t *)((int)param_1 + 0x81) = 0;
    *(uint8_t *)((int)param_1 + 0x82) = 0x80;
    store_value_if_valid(param_1,0xa9);
  }
  return (int)param_1;
}
