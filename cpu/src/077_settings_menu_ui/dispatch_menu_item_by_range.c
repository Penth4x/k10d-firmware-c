/* @k10d dispatch_menu_item_by_range @ 0x103d6cea
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 077_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Branches on a 16-bit state field to invoke one of two handler routines after a virtual
 *   call.
 * summary:
 *   Checks the value at offset 0x2a of param_1. If less than 0xc, it calls
 *   menu_item_register, performs a virtual call via slot 2 (offset 0x14) with a buffer from
 *   alloc_two_word_pair_1045bc2e, cleans up with free_heap_block_if_flagged_1045bc54, and
 *   calls register_four_menu_items_103d6daa. If the value is between 0xc and 0x18, it
 *   follows a similar path but calls register_four_menu_items_103d6e46 instead. The
 *   function acts as a state machine dispatcher for two specific states.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_menu_item_by_range(int *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (*(ushort *)((int)param_1 + 0x2a) < 0xc) {
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x210,0x138));
    (((vtbl_entry*)(iVar4))[2].fn)(iVar2 + sVar1,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_18,2);
    register_four_menu_items_103d6daa(param_1);
  }
  else if (*(ushort *)((int)param_1 + 0x2a) < 0x18) {
    iVar2 = menu_item_register(*param_1);
    iVar4 = *(int *)(iVar2 + 0xc);
    sVar1 = *(short *)(iVar4 + 0x10);
    uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1d0,0x138));
    (((vtbl_entry*)(iVar4))[2].fn)(iVar2 + sVar1,uVar3);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    register_four_menu_items_103d6e46(param_1);
  }
  return;
}
