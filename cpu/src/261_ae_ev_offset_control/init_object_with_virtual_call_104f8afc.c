/* @k10d init_object_with_virtual_call_104f8afc @ 0x104f8afc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 261_ae_ev_offset_control (unit names are model-proposed)
 * purpose:
 *   Initializes an object by storing a value from a helper and invoking a virtual method on
 *   a sub-object.
 * summary:
 *   The function calls get_or_init_sram_buffer_104277bc to get a pointer, then passes it to
 *   read_table_entry_field with argument 0xcc, storing the result at offset 0xc of the
 *   input object. It then performs a virtual call on an object pointed to by *(param_1 +
 *   0x10) + 4, using slot 3 (offset 0x1c) with arguments derived from the object and the
 *   constant 0x80000015. Finally, it calls forward_three_args_to_helper_10459edc with
 *   param_1 + 0x18 and returns 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d40b0": ignoring multiple overlapping fields */

uint32_t init_object_with_virtual_call_104f8afc(cls_105d40b0 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xcc);
  ((uint32_t *)&(param_1->field_0x4))[2] = (uint32_t)(puVar2);
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[3]);
  iVar3 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)((char*)puVar2 + ((vtbl_entry*)(iVar3))[3].adj + 4,&param_1->field_0x4,0x80000015/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x14))[1],1,1);
  return 1;
}
