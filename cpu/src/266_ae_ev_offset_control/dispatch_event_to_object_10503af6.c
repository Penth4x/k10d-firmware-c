/* @k10d dispatch_event_to_object_10503af6 @ 0x10503af6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Retrieves an event ID and dispatches it to a target object via a virtual call.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to obtain a context pointer and
 *   read_table_entry_field to get an event ID (0xca). It stores this ID at offset 0xc of
 *   the input object. It then performs a virtual call (slot 3) on an object pointer found
 *   at offset 0x10+4, passing the input object and a constant 0x80000013. Finally, it calls
 *   forward_three_args_to_helper_10459edc with a pointer to offset 0x18 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4e80": ignoring multiple overlapping fields */

uint32_t dispatch_event_to_object_10503af6(cls_105d4e80 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xca);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[3]);
  iVar3 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)((char*)puVar2 + ((vtbl_entry*)(iVar3))[3].adj + 4,&param_1->field_0x4,0x80000013/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x14))[1],1,1);
  return 1;
}
