/* @k10d dispatch_two_virtual_calls_by_setting @ 0x10422f16
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 099_settings_menu_ui (unit names are model-proposed)
 * purpose:
 *   Selects one of two pairs of virtual method calls based on a setting value threshold.
 * summary:
 *   Checks if param_2 is 0x1bd0005. If so, reads setting 0xa9 via setting_get. If the value
 *   is less than 10, it performs two sequences of operations using stack buffer auStack_18;
 *   otherwise, it uses auStack_10. Each sequence involves calling menu_item_register,
 *   retrieving a pointer, calling alloc_two_word_pair_1045bc2e with specific arguments
 *   (0x1e8/0x198 or 0x230/0x198 for the first branch, 0x1b8/0x198 or 0x200/0x198 for the
 *   second), invoking a virtual method at offset 0x14, calling
 *   free_heap_block_if_flagged_1045bc54, and invoking another virtual method at offset 0xc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Instruction at (ram,0x10422f2e) overlaps instruction at (ram,0x10422f2c)
    */

uint32_t dispatch_two_virtual_calls_by_setting(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint32_t auStack_18 [2];
  uint32_t auStack_10 [2];
  
  if (param_2 == 0x1bd0005) {
    iVar2 = setting_get(param_1[2],0xa9);
    if (iVar2 < 10) {
      iVar2 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x1e8,0x198);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_18,0x230,0x198);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_18,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
    else {
      iVar2 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x1b8,0x198);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
      iVar2 = menu_item_register(*param_1);
      iVar4 = *(int *)(iVar2 + 0xc);
      sVar1 = *(short *)(iVar4 + 0x10);
      uVar3 = (uint32_t)alloc_two_word_pair_1045bc2e(auStack_10,0x200,0x198);
      (**(code **)(iVar4 + 0x14))(sVar1 + iVar2,uVar3);
      free_heap_block_if_flagged_1045bc54(auStack_10,2);
      (**(code **)(*(int *)(iVar2 + 0xc) + 0xc))(iVar2 + *(short *)(*(int *)(iVar2 + 0xc) + 8),1);
    }
  }
  return 0;
}
