/* @k10d init_object_with_virtual_calls_105000fa @ 0x105000fa
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 264_settings_entry_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t init_object_with_virtual_calls_105000fa(void *param_1)

{
  void *pvVar1;
  uint32_t uVar2;
  int iVar3;
  int iVar4;
  
  pvVar1 = (void *)get_or_init_sram_buffer_104277bc();
  uVar2 = read_table_entry_field(pvVar1,0xc0);
  *(uint32_t *)((int)param_1 + 0x14) = uVar2;
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  iVar3 = (int)param_1 + 4;
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x18) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x8000000e/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x18) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x8000000f/*SDRAM*/);
  iVar4 = *(int *)(*(int *)((int)param_1 + 0x18) + 4);
  (**(code **)(iVar4 + 0x1c))
            (*(int *)((int)param_1 + 0x18) + 4 + (int)*(short *)(iVar4 + 0x18),iVar3,0x80000010/*SDRAM*/);
  forward_three_args_to_helper_10459edc((void *)((int)param_1 + 0x20),1,1);
  create_kernel_object((void *)((int)param_1 + 0xc));
  return 1;
}
