/* @k10d copy_two_words_from_param2 @ 0x104c3f08
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 231_menu_state_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_words_from_param2(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [3];
  
  uVar1 = return_first_word_1045c514((uint32_t *)(param_2 + 0x2c));
  uVar2 = read_struct_field_at_offset_4((uint32_t *)(param_2 + 0x2c));
  alloc_two_word_pair_1045c3dc(auStack_18 + 1,uVar1 & 0xffff,uVar2 & 0xffff);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(&stack0xffffffe0 + iVar4) = *(uint32_t *)((int)auStack_18 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  free_heap_if_flagged_1045c402(auStack_18 + 1,2);
  iVar4 = 8;
  do {
    iVar3 = iVar4 + -4;
    *(uint32_t *)(iVar3 + param_1) = *(uint32_t *)(&stack0xffffffe0 + iVar4);
    iVar4 = iVar3;
  } while (iVar3 != 0);
  return;
}
