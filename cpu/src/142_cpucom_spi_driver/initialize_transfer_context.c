/* @k10d initialize_transfer_context @ 0x1046568a
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 142_cpucom_spi_driver (unit names are model-proposed)
 * purpose:
 *   Initializes a context object by resolving member pointers from a base object and
 *   invoking a setup method on one of them.
 * summary:
 *   This function is virtual slot 2 of class cls_105a7d14. It calls
 *   get_or_init_sram_buffer_104277bc to obtain a base object, then uses
 *   read_table_entry_field to retrieve member pointers at indices 0x45, 9, 0x8c, and 0xb6,
 *   storing them in the context at offsets 0x10, 0x14, 0x18, and 0xc. It performs a virtual
 *   call on the object at index 9, passing the context and the value 0xf. Finally, it
 *   zeroes fields at 0x1c and 0x20 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_transfer_context(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0x45);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  iVar3 = read_table_entry_field(pvVar1,9);
  *(int *)((int)param_1 + 0x14) = iVar3;
  (**(code **)(*(int *)(iVar3 + 8) + 0x1c))
            (iVar3 + 8 + (int)*(short *)(*(int *)(iVar3 + 8) + 0x18),(int)param_1 + 4,0xf);
  uVar2 = read_table_entry_field(pvVar1,0x8c);
  *(uint32_t *)((int)param_1 + 0x18) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xb6);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  *(uint32_t *)((int)param_1 + 0x20) = 0;
  *(uint32_t *)((int)param_1 + 0x1c) = 0;
  return 1;
}
