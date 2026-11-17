/* @k10d dispatch_three_virtual_calls_10494a7a @ 0x10494a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_virtual_calls_10494a7a(int *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5,uint16_t param_6)

{
  short sVar1;
  uint32_t uVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  (**(code **)(param_1[3] + 0xfc))
            ((int)*(short *)(param_1[3] + 0xf8) + (int)param_1,&param_5,&param_6);
  iVar3 = *(int *)(*param_1 + 0x20);
  (**(code **)(iVar3 + 0x24))(*param_1 + (int)*(short *)(iVar3 + 0x20),param_5,param_6,param_2);
  iVar3 = param_1[3];
  sVar1 = *(short *)(iVar3 + 0x10);
  uVar2 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4);
  (**(code **)(iVar3 + 0x14))((int)sVar1 + (int)param_1,uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  *(uint8_t *)((int)param_1 + 9) = 1;
  return;
}
