/* @k10d dispatch_three_virtual_calls_10494a7a @ 0x10494a7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_three_virtual_calls_10494a7a(cls_105b989c *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
                 uint16_t param_5,uint16_t param_6)

{
  short sVar1;
  uint32_t uVar2;
  void *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  (((vtbl_entry*)(param_1->field_0xc))[31].fn)
            ((int)&param_1->field_0x0 + (int)((vtbl_entry*)(param_1->field_0xc))[31].adj,&param_5,&param_6
            );
  iVar4 = *(int *)((int)param_1->field_0x0 + 0x20);
  (((vtbl_entry*)(iVar4))[4].fn)
            ((int)param_1->field_0x0 + (int)((vtbl_entry*)(iVar4))[4].adj,param_5,param_6,param_2);
  puVar3 = (void *)((uintptr_t)(param_1->field_0xc));
  sVar1 = *(short *)((char*)puVar3 + 0x10);
  uVar2 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,param_3,param_4));
  (((vtbl_entry*)(puVar3))[2].fn)((int)&param_1->field_0x0 + (int)sVar1,uVar2);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  param_1->field_0x9 = 1;
  return;
}
