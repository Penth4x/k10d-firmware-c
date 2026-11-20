/* @k10d initialize_object_from_lookup_table @ 0x10504ed8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 266_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Populates object fields from a lookup table and triggers two virtual callbacks.
 * summary:
 *   The function retrieves a pointer via get_or_init_sram_buffer_104277bc and uses
 *   read_table_entry_field to fetch four values (indices 0xc3-0xc6) into the object at
 *   offsets 0xc-0x18. It then performs two virtual calls on an object referenced at offset
 *   0x1c, passing 0x80000011 and 0x80000012 as arguments. Finally, it calls
 *   forward_three_args_to_helper_10459edc on two sub-objects at offsets 0x24 and 0x3c. The
 *   specific camera subsystem is not identifiable from the provided callees or constants.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4f74": ignoring multiple overlapping fields */

uint32_t initialize_object_from_lookup_table(cls_105d4f74 *param_1)

{
  void *pvVar1;
  void *puVar2;
  uint32_t uVar3;
  int iVar4;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xc3);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)read_table_entry_field(pvVar1,0xc4);
  ((uint32_t *)&(param_1->field_0x4))[3] = (uint32_t)(puVar2);
  uVar3 = read_table_entry_field(pvVar1,0xc5);
  param_1->field_0x14 = uVar3;
  uVar3 = read_table_entry_field(pvVar1,0xc6);
  param_1->field_0x18 = uVar3;
  iVar4 = *(int *)(param_1->field_0x1c + 4);
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x1c + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,&param_1->field_0x4,0x80000011/*SDRAM*/)
  ;
  iVar4 = *(int *)(param_1->field_0x1c + 4);
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x1c + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,&param_1->field_0x4,0x80000012/*SDRAM*/)
  ;
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x20))[1],1,1);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x38))[1],1,1);
  return 1;
}
