/* @k10d render_two_ui_elements @ 0x103e889e
 * name: model (proposed by the local model from the decompile, confidence 0.50)
 * unit: 083_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Renders two graphical elements to a UI object based on a setting value when a specific
 *   event ID is received.
 * summary:
 *   The function checks if param_2 equals 0x1940014. It reads setting 0xa9 via setting_get.
 *   Depending on whether the value is less than 10, it selects one of two pairs of resource
 *   IDs (0x1e8/0x230 or 0x1b8/0x200). For each ID, it calls alloc_two_word_pair_1045bc2e to
 *   prepare a buffer, invokes a virtual method (slot 2) on an object retrieved via
 *   menu_item_register, and calls free_heap_block_if_flagged_1045bc54 to finalize. The
 *   specific subsystem (display, menu, etc.) is not identifiable from the provided code or
 *   verified callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103e88b6) overlaps instruction at (ram,0x103e88b4)
    */

uint32_t render_two_ui_elements(cls_10597680 *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x1940014) {
    iVar2 = setting_get(param_1->field_0x8,0xa9);
    if (iVar2 < 10) {
      iVar2 = menu_item_register((int)param_1->field_0x0);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x1e8,0x198));
      (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register((int)param_1->field_0x0);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_18,0x230,0x198));
      (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else {
      iVar2 = menu_item_register((int)param_1->field_0x0);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198));
      (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register((int)param_1->field_0x0);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198));
      (((vtbl_entry*)(iVar4))[2].fn)(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[1].fn)(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
  }
  return 0x1940011;
}
