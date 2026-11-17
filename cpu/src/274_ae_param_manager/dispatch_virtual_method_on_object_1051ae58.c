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
  uint32_t uVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  uintptr_t sp;
  uint8_t auStack_a [2];
  
  uVar1 = 0;
  uVar3 = *(uint32_t *)**(uint32_t **)(param_1 + 4);
  iVar4 = **(int **)(param_1 + 8);
  (**(code **)(iVar4 + 0x34))((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar4 + 0x30),uVar3,0,0)
  ;
  iVar4 = **(int **)(param_1 + 8);
  iVar4 = (**(code **)(iVar4 + 0x24))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar4 + 0x20),uVar3,auStack_a,2);
  if (iVar4 != 0) {
    iVar4 = **(int **)(param_1 + 8);
    (**(code **)(iVar4 + 0x34))
              ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar4 + 0x30),uVar3,0,0);
    iVar2 = param_1 + 0x14;
    zero_struct_and_set_flag(iVar2);
    store_two_words_at_offset(iVar2,*(uint32_t *)(*(int *)(param_1 + 4) + 0xc),
                 *(uint32_t *)(*(int *)(param_1 + 4) + 0x10));
    store_three_words_at_offset_0x14(iVar2,*(uint32_t *)(param_1 + 8),uVar3,0);
    uVar1 = get_or_init_sram_buffer_1049c57c();
    iVar4 = match_two_byte_pattern(uVar1,auStack_a);
    if (iVar4 == 1) {
      uVar1 = 1;
    }
    else {
      if (iVar4 != 2) {
        return 0;
      }
      uVar1 = 0;
    }
    set_byte_at_offset_0x20_1051b64a(iVar2,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}
