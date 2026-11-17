/* @k10d write_six_param_block_to_offset_0x40 @ 0x1036e082
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 024_mode_transition_control (unit names are model-proposed)
 * purpose:
 *   Builds a 6-field parameter block from two helper calls and writes it to param_1+0x40,
 *   then writes a derived value.
 * summary:
 *   Calls copy_two_words_from_param2 to initialize a local buffer, then invokes
 *   return_first_word_1045c514/read_struct_field_at_offset_4 twice (once on 0x80018058,
 *   once on the local buffer) to gather four 16-bit values. Packs these plus a constant 100
 *   into a struct and passes it to dispatch_six_param_object_ops at param_1+0x40. Finally
 *   calls map_mode_state_pair(param_1) and passes its result to set_field_and_call_handler
 *   at the same offset, then calls free_heap_if_flagged_1045c402 to clean up the local
 *   buffer. The specific subsystem is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_six_param_block_to_offset_0x40(void *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_38 [8];
  uint32_t auStack_18 [4];
  
  puVar5 = auStack_38;
  copy_two_words_from_param2((int)auStack_18,-0x7ffea510);
  uVar1 = return_first_word_1045c514((uint32_t *)0x80018058/*SDRAM*/);
  uVar2 = read_struct_field_at_offset_4((void *)0x80018058/*SDRAM*/);
  uVar3 = return_first_word_1045c514(auStack_18);
  uVar4 = read_struct_field_at_offset_4(auStack_18);
  *(short *)(puVar5 + 2) = (short)uVar4;
  *(uint16_t *)(puVar5 + 6) = 100;
  dispatch_six_param_object_ops((void *)((int)param_1 + 0x40),uVar1 & 0xffff,uVar2 & 0xffff,uVar3 & 0xffff,
               *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6));
  uVar4 = map_mode_state_pair(param_1);
  set_field_and_call_handler((void *)((int)param_1 + 0x40),uVar4);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
