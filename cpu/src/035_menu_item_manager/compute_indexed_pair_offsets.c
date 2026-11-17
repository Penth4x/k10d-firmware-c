/* @k10d compute_indexed_pair_offsets @ 0x1038ba1e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 035_menu_item_manager (unit names are model-proposed)
 * purpose:
 *   Computes two integer offsets from a base pointer using a 0-10 index and passes them to
 *   a virtual method.
 * summary:
 *   The function initializes a local structure via alloc_two_word_pair_1045bc2e. It uses a
 *   switch on param_4 (0-10) to calculate two integer offsets (iVar2, iVar3) by adding
 *   specific constants to the results of read_first_word_1045bd4c and
 *   get_second_word_of_struct called on param_3. These offsets are passed to
 *   store_two_words_to_memory. Subsequently, a virtual method (slot 0x14/8 = 2) is invoked
 *   on an object derived from param_2, passing a local buffer. Finally,
 *   free_heap_block_if_flagged_1045bc54 is called to clean up the local structures. The
 *   specific offset patterns suggest layout calculations, but the exact subsystem is not
 *   definitively identified from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_indexed_pair_offsets(uint32_t param_1,int param_2,uint32_t *param_3,uint32_t param_4,
                 uint32_t param_5)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t uStack_18;
  uint32_t uStack_14;
  uint8_t auStack_10 [8];
  
  alloc_two_word_pair_1045bc2e(&uStack_18,0,0);
  switch(param_4) {
  case 0:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x22;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x16;
    break;
  case 1:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x36;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x16;
    break;
  case 2:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x4a;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x16;
    break;
  case 3:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x2a;
    iVar2 = iVar2 + 0xe;
    break;
  case 4:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x22;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x2a;
    break;
  case 5:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x36;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x2a;
    break;
  case 6:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x4a;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x2a;
    break;
  case 7:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x5e;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x2a;
    break;
  case 8:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x22;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x3e;
    break;
  case 9:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x36;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x3e;
    break;
  case 10:
    iVar2 = read_first_word_1045bd4c(param_3);
    iVar2 = iVar2 + 0x4a;
    iVar3 = get_second_word_of_struct(param_3);
    iVar3 = iVar3 + 0x3e;
    break;
  default:
    (**(code **)(*(int *)(param_2 + 0xc) + 0xc))
              (*(short *)(*(int *)(param_2 + 0xc) + 8) + param_2,0);
    goto LAB_1038bc60;
  }
  store_two_words_to_memory(&uStack_18,iVar2,iVar3);
  (**(code **)(*(int *)(param_2 + 0xc) + 0xec))
            (*(short *)(*(int *)(param_2 + 0xc) + 0xe8) + param_2,param_5);
  iVar3 = *(int *)(param_2 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  iVar2 = 8;
  do {
    iVar4 = iVar2 + -4;
    *(uint32_t *)((int)&uStack_14 + iVar2) = *(uint32_t *)(&stack0xffffffe4 + iVar2);
    iVar2 = iVar4;
  } while (iVar4 != 0);
  (**(code **)(iVar3 + 0x14))(sVar1 + param_2,auStack_10);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
LAB_1038bc60:
  free_heap_block_if_flagged_1045bc54(&uStack_18,2);
  return;
}
