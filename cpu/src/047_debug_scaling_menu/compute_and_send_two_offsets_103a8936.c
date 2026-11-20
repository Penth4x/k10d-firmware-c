/* @k10d compute_and_send_two_offsets_103a8936 @ 0x103a8936
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 047_debug_scaling_menu (unit names are model-proposed)
 * purpose:
 *   Retrieves two object pointers, calls virtual methods to populate local buffers,
 *   computes size differences, and sends the results via virtual calls.
 * summary:
 *   The function calls menu_item_register twice on param_1+8 to obtain two object pointers.
 *   It invokes virtual slot 5 (offset 0x2c) on each to fill local stack buffers. It then
 *   calls return_first_word_1045c514 on these buffers to get integer values, uses
 *   alloc_two_word_pair_1045bc2e to compute differences (0x260 - val) and store them in a
 *   local array. Finally, it copies 8 bytes from this array into a temporary buffer and
 *   sends them via virtual slot 2 (offset 0x14) on the original objects, followed by
 *   cleanup calls to free_heap_block_if_flagged_1045bc54 and free_heap_if_flagged_1045c402.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_send_two_offsets_103a8936(void *param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uintptr_t sp;
  uint32_t *puStack_3c;
  uint8_t auStack_38 [8];
  uint32_t auStack_30 [2];
  uint32_t uStack_28;
  uint32_t auStack_24 [7];
  
  iVar2 = menu_item_register((int)param_1 + 8);
  iVar3 = menu_item_register((int)param_1 + 8);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[5].fn)
            (auStack_30,((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[5].adj + iVar2);
  (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].fn)
            (&uStack_28,((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[5].adj + iVar3);
  iVar4 = return_first_word_1045c514(&uStack_28);
  puStack_3c = auStack_30;
  iVar5 = return_first_word_1045c514(puStack_3c);
  alloc_two_word_pair_1045bc2e(auStack_24 + 1,(0x260 - iVar4) - iVar5,0x198);
  iVar4 = return_first_word_1045c514(&uStack_28);
  alloc_two_word_pair_1045bc2e(auStack_24 + 3,0x260 - iVar4,0x198);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  iVar4 = 8;
  do {
    iVar6 = iVar4 + -4;
    *(uint32_t *)(auStack_38 + iVar4 + -4) = *(uint32_t *)((int)auStack_24 + iVar4);
    iVar4 = iVar6;
  } while (iVar6 != 0);
  (((vtbl_entry*)(iVar5))[2].fn)(iVar2 + sVar1,auStack_38);
  free_heap_block_if_flagged_1045bc54(auStack_38,2);
  iVar5 = *(int *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  iVar4 = 8;
  do {
    iVar2 = iVar4 + -4;
    *(uint32_t *)(auStack_38 + iVar4 + -4) = *(uint32_t *)((int)auStack_24 + iVar4 + 8);
    iVar4 = iVar2;
  } while (iVar2 != 0);
  (((vtbl_entry*)(iVar5))[2].fn)(sVar1 + iVar3,auStack_38);
  free_heap_block_if_flagged_1045bc54(auStack_38,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 3,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 1,2);
  free_heap_if_flagged_1045c402(&uStack_28,2);
  free_heap_if_flagged_1045c402(puStack_3c,2);
  return;
}
