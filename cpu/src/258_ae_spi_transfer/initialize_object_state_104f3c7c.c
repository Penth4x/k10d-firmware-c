/* @k10d initialize_object_state_104f3c7c @ 0x104f3c7c
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 258_ae_spi_transfer (unit names are model-proposed)
 * purpose:
 *   Populates object fields with values from a global source and invokes a virtual method
 *   on a sub-object.
 * summary:
 *   The function retrieves a pointer from get_or_init_sram_buffer_104277bc and uses
 *   read_table_entry_field to fetch two values (indices 0xb9 and 0xba) into offsets 0xc and
 *   0x10 of the target object. It calls forward_three_args_to_helper_10459edc on offset
 *   0x1c and then performs a virtual call (slot 3) on the object located at offset 0x14,
 *   passing the current object and a flag 0x80000001. The specific subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t initialize_object_state_104f3c7c(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xb9);
  *(uint32_t *)((int)param_1 + 0xc) = uVar2;
  uVar2 = read_table_entry_field(pvVar1,0xba);
  *(uint32_t *)((int)param_1 + 0x10) = uVar2;
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x1c),1,1);
  iVar3 = *(int *)(*(int *)((int)param_1 + 0x14) + 4);
  (**(code **)(iVar3 + 0x1c))
            (*(int *)((int)param_1 + 0x14) + 4 + (int)*(short *)(iVar3 + 0x18),(int)param_1 + 4,
             0x80000001/*SDRAM*/);
  return 1;
}
