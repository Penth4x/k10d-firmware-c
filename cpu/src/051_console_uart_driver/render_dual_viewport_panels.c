/* @k10d render_dual_viewport_panels @ 0x103b7272
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Builds and submits two sets of 2D graphics primitives (rectangles and text) to two
 *   separate display contexts.
 * summary:
 *   The function retrieves two object pointers via menu_item_register and uses virtual
 *   calls to populate local buffers with drawing commands (likely text or shapes) from each
 *   object. It then calculates dimensions using return_first_word_1045c514 and submits the
 *   resulting primitives to the display pipeline via alloc_two_word_pair_1045bc2e and
 *   free_heap_block_if_flagged_1045bc54, followed by cleanup calls to
 *   free_heap_if_flagged_1045c402. The structure suggests updating two distinct UI regions
 *   or viewports, possibly for a split-screen or dual-status display.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void render_dual_viewport_panels(void *param_1)

{
  short sVar1;
  uint32_t *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uintptr_t sp;
  uint32_t *puStack_5c;
  uint8_t auStack_58 [4];
  uint32_t auStack_54 [11];
  uint32_t uStack_28;
  uint32_t auStack_24 [5];
  uint8_t auStack_10 [8];
  
  iVar3 = (int)param_1 + 8;
  iVar4 = menu_item_register(iVar3);
  iVar5 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].fn)
            (auStack_10,((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].adj + iVar4);
  iVar6 = 8;
  do {
    iVar7 = iVar6 + -4;
    *(uint32_t *)((int)auStack_54 + iVar6) = *(uint32_t *)((int)auStack_24 + iVar6 + 0x10);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[5].fn)
            (auStack_10,((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[5].adj + iVar5);
  iVar6 = 8;
  do {
    iVar7 = iVar6 + -4;
    *(uint32_t *)((int)auStack_54 + iVar6 + 8) = *(uint32_t *)((int)auStack_24 + iVar6 + 0x10);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  puVar2 = auStack_54 + 3;
  iVar6 = return_first_word_1045c514(puVar2);
  puStack_5c = auStack_54 + 1;
  iVar7 = return_first_word_1045c514(puStack_5c);
  alloc_two_word_pair_1045bc2e(auStack_54 + 5,(0x260 - iVar6) - iVar7,0x198);
  iVar6 = return_first_word_1045c514(puVar2);
  alloc_two_word_pair_1045bc2e(auStack_54 + 7,0x260 - iVar6,0x198);
  iVar7 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar7 + 0x10);
  iVar6 = 8;
  do {
    iVar8 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x10);
    iVar6 = iVar8;
  } while (iVar8 != 0);
  (((vtbl_entry*)(iVar7))[2].fn)(sVar1 + iVar4,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar4 = *(int *)(iVar5 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  iVar6 = 8;
  do {
    iVar7 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_54 + iVar6 + 0x18);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar5,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar4 = menu_item_register(iVar3);
  iVar5 = menu_item_register(iVar3);
  (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].fn)
            (auStack_54 + 9,((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[5].adj + iVar4);
  (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[5].fn)
            (&uStack_28,((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[5].adj + iVar5);
  iVar6 = return_first_word_1045c514(&uStack_28);
  iVar3 = return_first_word_1045c514(auStack_54 + 9);
  alloc_two_word_pair_1045bc2e(auStack_24 + 1,(0x260 - iVar6) - iVar3,0x168);
  iVar6 = return_first_word_1045c514(&uStack_28);
  alloc_two_word_pair_1045bc2e(auStack_24 + 3,0x260 - iVar6,0x168);
  iVar3 = *(int *)(iVar4 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  iVar6 = 8;
  do {
    iVar7 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_24 + iVar6);
    iVar6 = iVar7;
  } while (iVar7 != 0);
  (((vtbl_entry*)(iVar3))[2].fn)(iVar4 + sVar1,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  iVar3 = *(int *)(iVar5 + 0xc);
  sVar1 = *(short *)(iVar3 + 0x10);
  iVar6 = 8;
  do {
    iVar4 = iVar6 + -4;
    *(uint32_t *)(auStack_58 + iVar6 + -4) = *(uint32_t *)((int)auStack_24 + iVar6 + 8);
    iVar6 = iVar4;
  } while (iVar4 != 0);
  (((vtbl_entry*)(iVar3))[2].fn)(sVar1 + iVar5,auStack_58);
  free_heap_block_if_flagged_1045bc54(auStack_58,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 3,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 1,2);
  free_heap_if_flagged_1045c402(&uStack_28,2);
  free_heap_if_flagged_1045c402(auStack_54 + 9,2);
  free_heap_block_if_flagged_1045bc54(auStack_54 + 7,2);
  free_heap_block_if_flagged_1045bc54(auStack_54 + 5,2);
  free_heap_if_flagged_1045c402(puVar2,2);
  free_heap_if_flagged_1045c402(puStack_5c,2);
  return;
}
