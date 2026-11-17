/* @k10d process_event_queue_item_104994a2 @ 0x104994a2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches an event object by calling virtual methods and updating state based on a
 *   handler result.
 * summary:
 *   The function takes an object pointer, extracts a data pointer and a handler object, and
 *   invokes two virtual methods (slots 5 and 3) on the handler. If the second call returns
 *   non-zero, it initializes a state object (param_1+0x24) using data from the event, calls
 *   an unknown handler (match_two_byte_pattern), and updates the state object's status
 *   based on whether the handler returned 1 or 2. The specific camera subsystem is not
 *   identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_queue_item_104994a2(int param_1)

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
  (**(code **)(iVar4 + 0x34))
            ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar4 + 0x30),uVar3,0xc,0);
  iVar4 = **(int **)(param_1 + 8);
  iVar4 = (**(code **)(iVar4 + 0x24))
                    ((int)*(int **)(param_1 + 8) + (int)*(short *)(iVar4 + 0x20),uVar3,auStack_a,2);
  if (iVar4 != 0) {
    iVar2 = param_1 + 0x24;
    zero_struct_and_set_flag(iVar2);
    store_two_words_at_offset(iVar2,*(uint32_t *)(*(int *)(param_1 + 4) + 0xc),
                 *(uint32_t *)(*(int *)(param_1 + 4) + 0x10));
    store_three_words_at_offset_0x14(iVar2,*(uint32_t *)(param_1 + 8),uVar3,0xc);
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
