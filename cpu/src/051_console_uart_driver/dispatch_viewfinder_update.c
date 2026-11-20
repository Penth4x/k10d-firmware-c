/* @k10d dispatch_viewfinder_update @ 0x103b6b38
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 051_console_uart_driver (unit names are model-proposed)
 * purpose:
 *   Updates viewfinder display state by invoking virtual methods on objects retrieved from
 *   a linked list.
 * summary:
 *   The function retrieves multiple object pointers via menu_item_register and calls
 *   virtual methods on them to update display state. It branches based on param_2 and a
 *   status check, passing different arguments (0, 1, 2, or 6) to the virtual calls. It also
 *   calculates a value using alloc_two_word_pair_1045bc2e and passes it to another virtual
 *   method, suggesting it is updating a graphical element or status indicator in the
 *   viewfinder.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_viewfinder_update(int param_1,uint param_2)

{
  short sVar1;
  int extraout_r4;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint32_t uVar6;
  int iVar7;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  read_setting_by_index(*(int *)(param_1 + 0x28),param_2);
  iVar2 = get_setting_by_index_and_mode(*(int *)(param_1 + 0x28),param_2);
  iVar7 = param_1 + 8;
  iVar3 = menu_item_register(iVar7);
  iVar4 = menu_item_register(iVar7);
  if ((param_2 == 0) && (iVar5 = check_setting_0xbb_is_one(*(uint32_t *)(param_1 + 0x28)), iVar5 == 0)) {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,0);
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
    (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
    iVar2 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar3 + 0xc) + 8) + iVar3,1);
    iVar7 = menu_item_register(iVar7);
    (((vtbl_entry*)(*(int *)(iVar7 + 0xc)))[1].fn)(iVar7 + *(short *)(*(int *)(iVar7 + 0xc) + 8),1);
    iVar7 = *(int *)(iVar3 + 0xc);
    sVar1 = *(short *)(iVar7 + 0x10);
    uVar6 = (uint32_t)(alloc_two_word_pair_1045bc2e(auStack_10, (500 - ((int)(uint)_DAT_1056a468/*ROM*/ >> 1)) + ((iVar2 + -7) * 100) / 10 & 0xffff,(0x114 - ((int)(uint)_DAT_1056a468/*ROM*/ >> 1)) - ((extraout_r4 + -7) * 100) / 10 & 0xffff));
    (((vtbl_entry*)(iVar7))[2].fn)(sVar1 + iVar3,uVar6);
    free_heap_block_if_flagged_1045bc54(auStack_10,2);
    if ((iVar2 == 7) && (extraout_r4 == 7)) {
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)
                (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,2);
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,0);
    }
    else {
      (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].fn)
                (((vtbl_entry*)(*(int *)(iVar3 + 0xc)))[29].adj + iVar3,6);
      (((vtbl_entry*)(*(int *)(iVar4 + 0xc)))[1].fn)(*(short *)(*(int *)(iVar4 + 0xc) + 8) + iVar4,1);
    }
  }
  return;
}
