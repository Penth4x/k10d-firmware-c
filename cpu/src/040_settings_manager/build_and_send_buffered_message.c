/* @k10d build_and_send_buffered_message @ 0x1039ce00
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 040_settings_manager (unit names are model-proposed)
 * purpose:
 *   Constructs a message buffer from object fields and a count, then dispatches it via a
 *   virtual call.
 * summary:
 *   The function retrieves two sub-objects from param_2 via virtual calls (slots at offsets
 *   0x1c and 0x2c). It calculates a size based on param_4 and param_3 using a 0x18-byte
 *   stride, passing the result to store_word_to_pointer_1045bd48. It then copies 8 bytes
 *   from a local stack area to auStack_30 and invokes a virtual method on param_2 (slot at
 *   offset 0x14) with this buffer. Finally, it calls cleanup functions
 *   free_heap_block_if_flagged_1045bc54 and free_heap_if_flagged_1045c402 on the local
 *   buffers.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void build_and_send_buffered_message(uint32_t param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_34;
  uint8_t auStack_30 [8];
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint8_t auStack_20 [24];
  
  iStack_34 = param_4;
  (**(code **)(*(int *)(param_2 + 0xc) + 0x2c))
            (&uStack_28,*(short *)(*(int *)(param_2 + 0xc) + 0x28) + param_2);
  (**(code **)(*(int *)(param_2 + 0xc) + 0x1c))
            (auStack_20,*(short *)(*(int *)(param_2 + 0xc) + 0x18) + param_2);
  uVar3 = return_first_word_1045c514(&uStack_28);
  if (((iStack_34 + -1) * 0x18 + 0x20U & 0xffff) < uVar3) {
    param_3 = param_3 + iStack_34;
    iVar4 = return_first_word_1045c514(&uStack_28);
    uVar3 = ((param_3 + -1) * 0x18 + 0x20U & 0xffff) - iVar4;
  }
  else {
    uVar3 = (param_3 + -1) * 0x18 + 0x20U & 0xffff;
  }
  store_word_to_pointer_1045bd48((uint32_t *)auStack_20,uVar3);
  iVar2 = *(int *)(param_2 + 0xc);
  sVar1 = *(short *)(iVar2 + 0x10);
  iVar4 = 8;
  do {
    iVar5 = iVar4 + -4;
    *(uint32_t *)(auStack_30 + iVar4 + -4) = *(uint32_t *)((int)&uStack_24 + iVar4);
    iVar4 = iVar5;
  } while (iVar5 != 0);
  (**(code **)(iVar2 + 0x14))(sVar1 + param_2,auStack_30);
  free_heap_block_if_flagged_1045bc54(auStack_30,2);
  free_heap_block_if_flagged_1045bc54(auStack_20,2);
  free_heap_if_flagged_1045c402(&uStack_28,2);
  return;
}
