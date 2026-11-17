/* @k10d copy_struct_with_two_subobjects_1048d17c @ 0x1048d17c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 189_settings_manager (unit names are model-proposed)
 * purpose:
 *   Builds a 16-byte struct on the stack from two sub-objects and copies it to a caller
 *   buffer.
 * summary:
 *   Initializes two local objects (auStack_28 and auStack_10) via
 *   alloc_and_zero_two_words_1045bc0e/alloc_and_zero_two_words_1045c3bc, populates them
 *   with fields from param_2 (indices 0-1 and 0x14-0x15), and combines them into a 16-byte
 *   aggregate on the stack. The function then copies this 16-byte aggregate to the memory
 *   location pointed to by param_5. Finally, it calls cleanup/destroy routines
 *   (free_heap_if_flagged_1045c402, destroy_text_widget,
 *   free_heap_block_if_flagged_1045bc54) on the local objects. The specific camera
 *   subsystem is not identifiable from the available callee names.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_struct_with_two_subobjects_1048d17c(uint32_t param_1,uint16_t *param_2,uint32_t param_3,uint32_t param_4,
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
  
  alloc_and_zero_two_words_1045bc0e((void *)auStack_28);
  store_two_words_to_memory((void *)auStack_28,*param_2,param_2[1]);
  apuStack_3c[0] = (uint8_t *)0xffffffe8;
  allocate_and_init_widget(auStack_20);
  copy_eight_bytes_1045bf68(auStack_20,auStack_28);
  alloc_and_zero_two_words_1045c3bc((void *)auStack_10);
  write_two_words_to_memory((void *)auStack_10,param_2[0x14],param_2[0x15]);
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
