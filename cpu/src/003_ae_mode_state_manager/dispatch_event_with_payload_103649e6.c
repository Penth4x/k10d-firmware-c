/* @k10d dispatch_event_with_payload_103649e6 @ 0x103649e6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies a 12-byte payload from a table, extracts two short fields, and invokes a virtual
 *   method on an object.
 * summary:
 *   The function reads a 12-byte structure from a memory location calculated via an index
 *   in param_1+0x214. It calls copy_two_words_from_param2 to populate a local buffer, then
 *   extracts two 16-bit values using return_first_word_1045c514 and
 *   read_struct_field_at_offset_4. It performs a virtual call on the object at param_1+0x70
 *   (slot at offset 0x9c) passing the index and the local payload. Finally, it calls
 *   free_heap_if_flagged_1045c402 with the buffer and a constant 2. The specific subsystem
 *   is not identifiable from the provided callees.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_event_with_payload_103649e6(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uintptr_t sp;
  uint32_t uStack_28;
  uint32_t uStack_24;
  uint32_t uStack_20;
  uint16_t uStack_1c;
  uint16_t uStack_1a;
  uint32_t auStack_18 [4];
  
  uStack_28 = *(uint32_t *)(*(int *)(param_1 + 0x214) * 0x214 + -0x7ffea0c8);
  uStack_24 = *(uint32_t *)(*(int *)(param_1 + 0x214) * 0x214 + -0x7ffea0c4);
  uStack_20 = *(uint32_t *)(*(int *)(param_1 + 0x214) * 0x214 + -0x7ffea0c0);
  copy_two_words_from_param2((int)auStack_18,*(int *)(param_1 + 0x214) * 0x214 + -0x7ffea0e8);
  uVar1 = return_first_word_1045c514(auStack_18);
  uStack_1c = (short)uVar1;
  uVar1 = read_struct_field_at_offset_4(auStack_18);
  iVar2 = **(int **)(param_1 + 0x70);
  uStack_1a = (short)uVar1;
  (((vtbl_entry*)(iVar2))[19].fn)
            ((int)*(int **)(param_1 + 0x70) + (int)((vtbl_entry*)(iVar2))[19].adj,
             *(uint32_t *)(param_1 + 0x214),&uStack_28);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
