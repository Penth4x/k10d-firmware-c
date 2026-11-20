/* @k10d init_object_with_virtual_calls_105000fa @ 0x105000fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Struct "cls_105d4c70": ignoring multiple overlapping fields */

uint32_t init_object_with_virtual_calls_105000fa(cls_105d4c70 *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  cls_1059e408 *pcVar3;
  int iVar4;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xc0);
  param_1->field_0x14 = uVar2;
  iVar4 = *(int *)(param_1->field_0x18 + 4);
  pcVar3 = &param_1->field_0x4;
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x18 + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,pcVar3,0x8000000e/*SDRAM*/);
  iVar4 = *(int *)(param_1->field_0x18 + 4);
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x18 + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,pcVar3,0x8000000f/*SDRAM*/);
  iVar4 = *(int *)(param_1->field_0x18 + 4);
  (((vtbl_entry*)(iVar4))[3].fn)
            (param_1->field_0x18 + 4 + (int)((vtbl_entry*)(iVar4))[3].adj,pcVar3,0x80000010/*SDRAM*/);
  forward_three_args_to_helper_10459edc(&((uint32_t *)&(param_1->field_0x1c))[1],1,1);
  create_kernel_object(&((uint32_t *)&(param_1->field_0x4))[2]);
  return 1;
}
