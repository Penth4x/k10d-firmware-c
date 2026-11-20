/* @k10d dispatch_virtual_event @ 0x105018a6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object stored in the struct and updates a status field.
 * summary:
 *   Retrieves a pointer via get_or_init_sram_buffer_104277bc and calls
 *   read_table_entry_field with argument 0xc9, storing the result at offset 0xc. It then
 *   performs a virtual call (slot 3) on the object at offset 0x10, passing the current
 *   struct and constant 0x80000016. Finally, it calls forward_three_args_to_helper_10459edc
 *   with the pointer at offset 0x18 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4d10": ignoring multiple overlapping fields */

uint32_t dispatch_virtual_event(cls_105d4d10 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xc9);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[3]);
  iVar3 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)((char*)puVar2 + ((vtbl_entry*)(iVar3))[3].adj + 4,&param_1->field_0x4,0x80000016/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x14))[1],1,1);
  return 1;
}
