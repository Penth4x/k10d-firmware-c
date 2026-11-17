/* @k10d add_two_point_structs @ 0x1045bc92
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void add_two_point_structs(uint32_t param_1,int *param_2,int *param_3,uint32_t param_4,int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int aiStack_14 [3];
  
  alloc_and_zero_two_words_1045bc0e(aiStack_14 + 1);
  aiStack_14[1] = *param_2 + *param_3;
  aiStack_14[2] = param_2[1] + param_3[1];
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar2) = *(uint32_t *)((int)aiStack_14 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_block_if_flagged_1045bc54(aiStack_14 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
