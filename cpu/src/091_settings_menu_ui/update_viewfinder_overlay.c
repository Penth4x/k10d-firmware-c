/* @k10d update_viewfinder_overlay @ 0x10407e72
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 091_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Renders a viewfinder overlay by computing a position from object fields and calling
 *   virtual draw methods.
 * summary:
 *   The function retrieves a virtual object from param_1+0x2c and calls its slot 2 with a
 *   constant ID. It then calls menu_item_register to get a context, computes a 16-bit value
 *   using alloc_two_word_pair_1045bc2e based on fields at param_1+0x57/0x58 and a global,
 *   and calls a virtual method on that context. Finally, it calls another virtual method
 *   with an argument of 2 or 6 depending on whether the fields at 0x57/0x58 are both 7.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_viewfinder_overlay(void *param_1)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t auStack_10 [2];
  
  iVar5 = **(int **)((int)param_1 + 0x2c);
  (((vtbl_entry*)(iVar5))[2].fn)
            ((int)*(int **)((int)param_1 + 0x2c) + (int)((vtbl_entry*)(iVar5))[2].adj,0x1120065,0);
  iVar5 = (int)param_1 + 8;
  iVar2 = menu_item_register(iVar5);
  iVar4 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar4 + 0x10);
  uVar3 = (uint32_t)(alloc_two_word_pair_1045bc2e(auStack_10, (500 - ((int)(uint)_DAT_10598df4/*ROM*/ >> 1)) + (int)((*(byte *)((int)param_1 + 0x58) - 7) * 100) / 10 & 0xffff, (0x114 - ((int)(uint)_DAT_10598df4/*ROM*/ >> 1)) - (int)((*(byte *)((int)param_1 + 0x57) - 7) * 100) / 10 & 0xffff));
  (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_10,2);
  if ((*(char *)((int)param_1 + 0x58) == '\a') && (*(char *)((int)param_1 + 0x57) == '\a')) {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[29].adj + iVar2,2);
    iVar5 = menu_item_register(iVar5);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),0);
  }
  else {
    (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[29].fn)(((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[29].adj + iVar2,6);
    iVar5 = menu_item_register(iVar5);
    (((vtbl_entry*)(*(int *)(iVar5 + 0xc)))[1].fn)(iVar5 + *(short *)(*(int *)(iVar5 + 0xc) + 8),1);
  }
  return;
}
