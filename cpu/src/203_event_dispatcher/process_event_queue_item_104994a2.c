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
  (((vtbl_entry*)(iVar5))[6].fn)
            ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar5))[6].adj,uVar4,0xc,0);
  iVar5 = **(int **)(param_1 + 8);
  iVar5 = (((vtbl_entry*)(iVar5))[4].fn)
                    ((int)*(int **)(param_1 + 8) + (int)((vtbl_entry*)(iVar5))[4].adj,uVar4,auStack_a,2);
  if (iVar5 != 0) {
    pcVar3 = (cls_105d677c *)(param_1 + 0x24);
    zero_struct_and_set_flag((uint32_t)(pcVar3));
    store_two_words_at_offset((uint32_t)(pcVar3),*(uint32_t *)(*(int *)(param_1 + 4) + 0xc),
                 *(uint32_t *)(*(int *)(param_1 + 4) + 0x10));
    store_three_words_at_offset_0x14((uint32_t)(pcVar3),*(uint32_t *)(param_1 + 8),uVar4,0xc);
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
