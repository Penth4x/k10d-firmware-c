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

/* WARNING: Struct "cls_105c3a34": ignoring multiple overlapping fields */

uint32_t initialize_object_state_104f3c7c(cls_105c3a34 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xb9);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,0xba);
  ((uint32_t *)&(param_1->field_0x4))[3] = (uint32_t)(puVar2);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x18))[1],1,1);
  iVar3 = *(int *)(param_1->field_0x14 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)
            (param_1->field_0x14 + 4 + (int)((vtbl_entry*)(iVar3))[3].adj,&param_1->field_0x4,0x80000001/*SDRAM*/)
  ;
  return 1;
}
