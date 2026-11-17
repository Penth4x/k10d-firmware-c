/* @k10d copy_four_words_to_param1 @ 0x1045c0a6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_to_param1(int param_1,uint32_t param_2)

{
  int iVar1;
  uintptr_t sp;
  uint8_t auStack_18 [16];
  int iVar2;
  
  (*(code *)0x1045bc90/*ROM*/)(auStack_18,param_1,param_2);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_1) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
