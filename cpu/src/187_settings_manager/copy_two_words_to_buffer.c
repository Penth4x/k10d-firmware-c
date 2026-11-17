/* @k10d copy_two_words_to_buffer @ 0x1048cbd6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 187_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_two_words_to_buffer(uint32_t param_1,ushort *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  uint32_t *puVar1;
  int iVar2;
  int iVar3;
  uintptr_t sp;
  uint32_t auStack_14 [3];
  
  puVar1 = auStack_14 + 1;
  alloc_and_zero_two_words_1045bc0e(puVar1);
  store_word_to_pointer_1045bd48(puVar1,(uint)*param_2);
  write_field_at_offset_four_1045bd50(puVar1,(uint)param_2[1]);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(&stack0xffffffe4 + iVar3) = *(uint32_t *)((int)auStack_14 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  free_heap_block_if_flagged_1045bc54(puVar1,2);
  iVar3 = 8;
  do {
    iVar2 = iVar3 + -4;
    *(uint32_t *)(iVar2 + param_5) = *(uint32_t *)(&stack0xffffffe4 + iVar3);
    iVar3 = iVar2;
  } while (iVar2 != 0);
  return;
}
