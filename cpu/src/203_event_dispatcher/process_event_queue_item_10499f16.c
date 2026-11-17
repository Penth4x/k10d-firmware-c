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
