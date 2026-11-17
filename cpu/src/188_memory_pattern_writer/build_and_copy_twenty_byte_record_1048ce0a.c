/* @k10d build_and_copy_twenty_byte_record_1048ce0a @ 0x1048ce0a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * unit: 188_memory_pattern_writer (unit names are model-proposed)
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void build_and_copy_twenty_byte_record_1048ce0a(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
                 int param_5)

{
  int iVar1;
  int iVar2;
  uintptr_t sp;
  uint8_t *apuStack_3c [5];
  uint8_t auStack_28 [8];
  uint32_t auStack_20 [4];
  uint8_t auStack_10 [4];
  uint32_t uStack_c;
  
  alloc_and_zero_two_words_1045bc0e(auStack_28);
  store_two_words_to_memory(auStack_28,*param_2,param_2[1]);
  apuStack_3c[0] = (uint8_t *)0xffffffe8;
  allocate_and_init_widget(auStack_20);
  copy_eight_bytes_1045bf68(auStack_20,auStack_28);
  alloc_and_zero_two_words_1045c3bc(auStack_10);
  write_two_words_to_memory(auStack_10,param_2[0x13],param_2[0x14]);
  copy_four_words(auStack_20,auStack_10);
  apuStack_3c[0] = &stack0xfffffff8 + (int)apuStack_3c[0];
  iVar2 = 0x10;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)apuStack_3c + iVar2) = *(uint32_t *)(apuStack_3c[0] + iVar1);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  free_heap_if_flagged_1045c402(auStack_10,2);
  destroy_text_widget(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(auStack_28,2);
  iVar2 = 0x10;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)(iVar1 + param_5) = *(uint32_t *)((int)apuStack_3c + iVar2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
