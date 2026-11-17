/* @k10d init_and_register_object_pair @ 0x1036b824
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 019_menu_settings_manager (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void init_and_register_object_pair(void)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint32_t uVar3;
  uint32_t *puVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t auStack_20 [4];
  uint32_t auStack_1c [5];
  int iVar6;
  
  puVar4 = auStack_1c + 1;
  alloc_and_zero_two_words_1045c3bc(puVar4);
  puVar1 = (uint32_t *)get_or_init_sram_block_1052b6fc();
  init_object_with_two_ids_1052b824(auStack_20,puVar1);
  iVar6 = 8;
  do {
    iVar5 = iVar6 + -4;
    *(uint32_t *)((int)auStack_1c + iVar6) = *(uint32_t *)(&stack0xffffffdc + iVar6);
    iVar6 = iVar5;
  } while (iVar5 != 0);
  free_heap_if_flagged_1045c402(auStack_20,2);
  uVar2 = return_first_word_1045c514(puVar4);
  uVar3 = read_struct_field_at_offset_4(puVar4);
  write_two_words_to_memory((void *)0x80018058/*SDRAM*/,uVar2,uVar3);
  free_heap_if_flagged_1045c402(puVar4,2);
  return;
}
