/* @k10d copy_struct_with_two_subobjects_1048d3e8 @ 0x1048d3e8
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Initializes two sub-objects from param_2 fields, combines them, and copies the
 *   resulting 16-byte struct to param_5.
 * summary:
 *   The function calls alloc_and_zero_two_words_1045bc0e and store_two_words_to_memory to
 *   initialize a first object (auStack_28) using param_2[0] and param_2[1]. It then calls
 *   allocate_and_init_widget and copy_eight_bytes_1045bf68 to create a second object
 *   (auStack_20) from the first. Next, it initializes a third object (auStack_10) using
 *   param_2[0x13] and param_2[0x14] via alloc_and_zero_two_words_1045c3bc and
 *   write_two_words_to_memory, and combines it with the second object via copy_four_words.
 *   Finally, it copies 16 bytes from the stack to the memory location pointed to by
 *   param_5. The callees are unnamed, so the specific subsystem is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_with_two_subobjects_1048d3e8(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
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
