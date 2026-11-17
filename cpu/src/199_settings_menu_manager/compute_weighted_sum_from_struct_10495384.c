/* @k10d compute_weighted_sum_from_struct_10495384 @ 0x10495384
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 199_settings_menu_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_weighted_sum_from_struct_10495384(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint32_t *puVar5;
  int iVar6;
  uintptr_t sp;
  uint8_t auStack_20 [4];
  uint32_t auStack_1c [5];
  
  puVar5 = auStack_1c + 1;
  alloc_and_zero_two_words_1045c3bc(puVar5);
  iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 4);
  iVar2 = 8;
  do {
    iVar6 = iVar2 + -4;
    *(uint32_t *)((int)auStack_1c + iVar2 + 8) = *(uint32_t *)(iVar6 + iVar1 + 0x10);
    iVar2 = iVar6;
  } while (iVar6 != 0);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(&stack0xffffffdc + iVar2) = *(uint32_t *)((int)auStack_1c + iVar2 + 8);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)auStack_1c + iVar2) = *(uint32_t *)(&stack0xffffffdc + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(auStack_20,2);
  iVar2 = return_first_word_1045c514(puVar5);
  iVar1 = read_struct_field_at_offset_4(puVar5);
  iVar6 = call_single_helper_1045c0f2((uint32_t *)(param_1 + 0x80));
  iVar3 = call_single_helper_with_param_1045c10e(param_1 + 0x80);
  uVar4 = return_first_word_1045c514(puVar5);
  free_heap_if_flagged_1045c402(puVar5,2);
  return iVar2 * iVar1 + iVar6 / 2 + (iVar3 / 2) * (uVar4 >> 1);
}
