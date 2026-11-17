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

int cls_105a1648_new(uint32_t *param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  uint32_t uVar4;
  
  if ((param_1 != (uint32_t *)0x0) ||
     (param_1 = (uint32_t *)heap_alloc((void *)0x38), param_1 != (uint32_t *)0x0)) {
    cls_1059e2e0_new(param_1);
    param_1[1] = 0x105a1648/*ROM*/;
    param_1[2] = 0x105a1670/*ROM*/;
    iVar1 = 0;
    *(uint8_t *)(param_1 + 0xd) = 0;
    *(uint8_t *)((int)param_1 + 0x35) = 0;
    iVar2 = 3;
    do {
      *(uint8_t *)((int)param_1 + iVar1 + 0x14) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x24) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x15) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x25) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x16) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x26) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x17) = 0;
      *(uint8_t *)((int)param_1 + iVar1 + 0x27) = 0;
      iVar2 = iVar2 + -1;
      iVar1 = iVar1 + 4;
    } while (-1 < iVar2);
    pvVar3 = (void *)get_or_init_sram_buffer_104277bc();
    uVar4 = read_table_entry_field(pvVar3,0xb0);
    param_1[4] = uVar4;
    store_value_if_valid(param_1,0xb1);
  }
  return (int)param_1;
}
