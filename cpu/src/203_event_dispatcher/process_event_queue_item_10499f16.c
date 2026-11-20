/* @k10d process_event_queue_item_10499f16 @ 0x10499f16
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 203_event_dispatcher (unit names are model-proposed)
 * purpose:
 *   Dispatches an event object by calling virtual methods and updating state based on a
 *   status check.
 * summary:
 *   The function takes an object pointer, extracts a value from offset 4, and calls virtual
 *   slots 6 and 4 on a sub-object at offset 8. If the second virtual call returns non-zero,
 *   it initializes a structure at offset 0x14, copies fields, calls
 *   get_or_init_sram_buffer_1049c57c and match_two_byte_pattern to check a status, and
 *   updates the structure's state via set_byte_at_offset_0x20_1051b64a. The specific
 *   subsystem is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t process_event_queue_item_10499f16(int param_1)

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
