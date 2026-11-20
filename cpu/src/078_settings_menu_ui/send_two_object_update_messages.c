/* @k10d send_two_object_update_messages @ 0x103da140
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * unit: 078_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Sends two message payloads to a sub-object based on a setting value threshold.
 * summary:
 *   Checks if param_2 is 0x1880014. If so, reads setting 0xa9. Depending on whether the
 *   value is < 10, it retrieves an object via menu_item_register, constructs two message
 *   buffers using alloc_two_word_pair_1045bc2e with different IDs (0x1e8/0x230 or
 *   0x1b8/0x200), and invokes virtual slot 2 on a sub-object to send them. It then invokes
 *   virtual slot 1 on the main object. Returns 0x1880011.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x103da158) overlaps instruction at (ram,0x103da156)
    */

uint32_t send_two_object_update_messages(cls_105965fc *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x1880014) {
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
  return 0x1880011;
}
