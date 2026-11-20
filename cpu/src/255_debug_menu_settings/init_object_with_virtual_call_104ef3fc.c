/* @k10d init_object_with_virtual_call_104ef3fc @ 0x104ef3fc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 255_debug_menu_settings (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105c2e20": ignoring multiple overlapping fields */

uint32_t init_object_with_virtual_call_104ef3fc(cls_105c2e20 *param_1)

{
  void *pvVar1;
  void *puVar2;
  int iVar3;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  puVar2 = (void *)read_table_entry_field(pvVar1,0xc2);
  ((uint32_t *)&(param_1->field_0x4))[3] = (uint32_t)(puVar2);
  puVar2 = (void *)(((uint32_t *)&(param_1->field_0x4))[2]);
  iVar3 = *(int *)((char*)puVar2 + 4);
  (((vtbl_entry*)(iVar3))[3].fn)((char*)puVar2 + ((vtbl_entry*)(iVar3))[3].adj + 4,&param_1->field_0x4,0x80000014/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x14))[1],1,1);
  return 1;
}
