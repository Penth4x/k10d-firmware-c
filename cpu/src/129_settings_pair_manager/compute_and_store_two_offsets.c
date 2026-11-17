/* @k10d compute_and_store_two_offsets @ 0x1045c1f2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_store_two_offsets(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  uint uVar2;
  uint32_t *puVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  puVar3 = auStack_14 + 1;
  alloc_and_zero_two_words_1045bc0e(puVar3);
  iVar1 = read_first_word_1045bd4c(param_2);
  uVar2 = return_first_word_1045c514(param_2 + 2);
  store_word_to_pointer_1045bd48(puVar3,iVar1 + (uVar2 >> 1));
  iVar1 = get_second_word_of_struct(param_2);
  uVar2 = read_struct_field_at_offset_4(param_2 + 2);
  write_field_at_offset_four_1045bd50(puVar3,iVar1 + (uVar2 >> 1));
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar1) = *(uint32_t *)((int)auStack_14 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  free_heap_block_if_flagged_1045bc54(puVar3,2);
  iVar1 = 8;
  do {
    iVar4 = iVar1 + -4;
    *(uint32_t *)(iVar4 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar1);
    iVar1 = iVar4;
  } while (iVar4 != 0);
  return;
}
