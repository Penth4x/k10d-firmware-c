/* @k10d register_menu_item_with_value @ 0x103be2d6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 054_settings_menu_manager (unit names are model-proposed)
 * purpose:
 *   Retrieves an object via a helper, invokes a virtual method on it, and dispatches a
 *   computed value to another virtual slot.
 * summary:
 *   The function calls menu_item_register with the first argument to obtain an object
 *   pointer. It then performs a virtual call on a sub-object (offset 0xc) using slot 3
 *   (offset 0x1c) to populate a stack buffer. It extracts two values from this buffer using
 *   read_first_word_1045bd4c and get_second_word_of_struct, combines them with the third
 *   parameter via alloc_two_word_pair_1045bc2e, and finally calls virtual slot 2 (offset
 *   0x14) on the sub-object with the result. Cleanup calls to
 *   free_heap_block_if_flagged_1045bc54 are made on the stack buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void register_menu_item_with_value(int *param_1,uint32_t param_2,int param_3)

{
  short sVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  uint32_t auStack_20 [2];
  uint32_t auStack_18 [4];
  
  iVar2 = menu_item_register(*param_1);
  (((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[3].fn)
            (auStack_18,((vtbl_entry*)(*(int *)(iVar2 + 0xc)))[3].adj + iVar2);
  iVar5 = *(int *)(iVar2 + 0xc);
  sVar1 = *(short *)(iVar5 + 0x10);
  uVar3 = read_first_word_1045bd4c(auStack_18);
  iVar4 = get_second_word_of_struct(auStack_18);
  uVar3 = (uintptr_t)(alloc_two_word_pair_1045bc2e(auStack_20,uVar3,iVar4 + param_3));
  (((vtbl_entry*)(iVar5))[2].fn)(iVar2 + sVar1,uVar3);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_block_if_flagged_1045bc54(auStack_18,2);
  return;
}
