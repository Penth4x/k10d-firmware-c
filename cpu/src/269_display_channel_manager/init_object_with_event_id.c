/* @k10d init_object_with_event_id @ 0x10506da6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 269_display_channel_manager (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing a value from a helper and invoking a virtual method
 *   with a fixed ID.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to get a pointer, then passes it
 *   and the constant 199 to read_table_entry_field, storing the result at offset 0xc of the
 *   object. It then performs a virtual call on an object pointer found at offset 0x10 (slot
 *   3) with arguments including the object's offset 4 and the constant 0x8000000d. Finally,
 *   it calls forward_three_args_to_helper_10459edc with a pointer to offset 0x18 and two
 *   1s, returning 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d518c": ignoring multiple overlapping fields */

uint32_t init_object_with_event_id(cls_105d518c *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,199);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[3]);
  iVar3 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)((char*)puVar2 + ((vtbl_entry*)(iVar3))[3].adj + 4,&param_1->field_0x4,0x8000000d/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x14))[1],1,1);
  return 1;
}
