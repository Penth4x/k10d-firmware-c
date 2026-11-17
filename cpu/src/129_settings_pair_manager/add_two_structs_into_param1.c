/* @k10d add_two_structs_into_param1 @ 0x1045c444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void add_two_structs_into_param1(void *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  int aiStack_18 [3];
  
  alloc_and_zero_two_words_1045c3bc(aiStack_18 + 1);
  aiStack_18[1] = *param_2 + *param_3;
  aiStack_18[2] = param_2[1] + param_3[1];
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar2) = *(uint32_t *)((int)aiStack_18 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(aiStack_18 + 1,2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + (int)param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
