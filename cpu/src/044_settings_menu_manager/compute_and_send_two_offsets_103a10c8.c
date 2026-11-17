/* @k10d compute_and_send_two_offsets_103a10c8 @ 0x103a10c8
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 044_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Extracts two values from objects, computes their offsets relative to a 0x260 base, and
 *   sends the results via virtual calls.
 * summary:
 *   The function retrieves two object pointers from param_1+8 using menu_item_register. It
 *   invokes a virtual method (slot 4) on each to populate local buffers, then uses
 *   return_first_word_1045c514 to get sizes and alloc_two_word_pair_1045bc2e to calculate
 *   offsets (0x260 - size). These offsets are copied into a stack array and sent to the
 *   objects via virtual method (slot 2). Finally, it releases the local resources using
 *   free_heap_block_if_flagged_1045bc54 and free_heap_if_flagged_1045c402.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void compute_and_send_two_offsets_103a10c8(void *param_1)

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
  (**(code **)(*(int *)(iVar2 + 0xc) + 0x2c))
            (auStack_30,*(short *)(*(int *)(iVar2 + 0xc) + 0x28) + iVar2);
  (**(code **)(*(int *)(iVar3 + 0xc) + 0x2c))
            (&uStack_28,*(short *)(*(int *)(iVar3 + 0xc) + 0x28) + iVar3);
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
  (**(code **)(iVar5 + 0x14))(iVar2 + sVar1,auStack_38);
  free_heap_block_if_flagged_1045bc54(auStack_38,2);
  iVar5 = *(int *)(iVar3 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  iVar4 = 8;
  do {
    iVar2 = iVar4 + -4;
    *(uint32_t *)(auStack_38 + iVar4 + -4) = *(uint32_t *)((int)auStack_24 + iVar4 + 8);
    iVar4 = iVar2;
  } while (iVar2 != 0);
  (**(code **)(iVar5 + 0x14))(sVar1 + iVar3,auStack_38);
  free_heap_block_if_flagged_1045bc54(auStack_38,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 3,2);
  free_heap_block_if_flagged_1045bc54(auStack_24 + 1,2);
  free_heap_if_flagged_1045c402(&uStack_28,2);
  free_heap_if_flagged_1045c402(puStack_3c,2);
  return;
}
