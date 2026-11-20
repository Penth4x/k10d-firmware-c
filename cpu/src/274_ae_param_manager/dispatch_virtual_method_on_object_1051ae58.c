/* @k10d dispatch_virtual_method_on_object_1051ae58 @ 0x1051ae58
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 274_ae_param_manager (unit names are model-proposed)
 * purpose:
 *   Invokes a virtual method on an object pointer and conditionally calls helper functions
 *   based on the result.
 * summary:
 *   The function extracts an object pointer from param_1 and calls a virtual method at
 *   offset 0x24. If the call returns non-zero, it invokes several helper functions
 *   (zero_struct_and_set_flag, store_two_words_at_offset, store_three_words_at_offset_0x14)
 *   and checks the result of match_two_byte_pattern to determine the return value. It also
 *   calls a virtual method at offset 0x34 before and after the main logic.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t dispatch_virtual_method_on_object_1051ae58(int param_1)

{
  uint8_t uVar1;
  uint32_t uVar2;
  cls_105d677c *pcVar3;
  uint32_t uVar4;
  int iVar5;
  uintptr_t sp;
  uint8_t auStack_a [2];
  
  uVar2 = 0;
  uVar4 = *(uint32_t *)**(uint32_t **)(param_1 + 4);
  iVar5 = **(int **)(param_1 + 8);
  (((vtbl_entry*)(iVar5))[6].fn)((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar5))[6].adj,uVar4,0,0)
  ;
  iVar5 = **(int **)(param_1 + 8);
  iVar5 = (((vtbl_entry*)(iVar5))[4].fn)
                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar5))[4].adj,uVar4,auStack_a,2);
  if (iVar5 != 0) {
    iVar5 = **(int **)(param_1 + 8);
    (((vtbl_entry*)(iVar5))[6].fn)
              ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar5))[6].adj,uVar4,0,0);
    pcVar3 = (cls_105d677c *)(param_1 + 0x14);
    zero_struct_and_set_flag((uint32_t)(pcVar3));
    store_two_words_at_offset((uint32_t)(pcVar3),*(uint32_t *)(*(int *)(param_1 + 4) + 0xc),
                 *(uint32_t *)(*(int *)(param_1 + 4) + 0x10));
    store_three_words_at_offset_0x14((uint32_t)(pcVar3),*(uint32_t *)(param_1 + 8),uVar4,0);
    uVar2 = get_or_init_sram_buffer_1049c57c();
    iVar5 = match_two_byte_pattern(uVar2,auStack_a);
    if (iVar5 == 1) {
      uVar1 = 1;
    }
    else {
      if (iVar5 != 2) {
        return 0;
      }
      uVar1 = 0;
    }
    set_byte_at_offset_0x20_1051b64a(pcVar3,uVar1);
    uVar2 = 1;
  }
  return uVar2;
}
