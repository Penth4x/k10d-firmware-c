/* @k10d write_six_param_config_block_10364da4 @ 0x10364da4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 003_ae_mode_state_manager (unit names are model-proposed)
 * purpose:
 *   Computes six 16-bit parameters from two data sources and writes them to a struct at
 *   offset 0x23c.
 * summary:
 *   The function initializes a local buffer, then calls return_first_word_1045c514 and
 *   read_struct_field_at_offset_4 on two different addresses (0x80018058 and a local stack
 *   buffer) to extract four 16-bit values. It combines these with a constant (100) and a
 *   conditional value (5 or result of read_struct_field_at_index_104c2890) to form a
 *   6-parameter payload. This payload is passed to dispatch_six_param_object_ops at offset
 *   0x23c of param_1, followed by a second call to transform_and_store_value with the
 *   conditional value. Finally, it calls free_heap_if_flagged_1045c402 to clean up the
 *   local buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_six_param_config_block_10364da4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint32_t uVar4;
  uintptr_t sp;
  uint8_t *puVar5;
  uint8_t auStack_38 [8];
  uint32_t uStack_1c;
  uint32_t auStack_18 [4];
  
  puVar5 = auStack_38;
  copy_two_words_from_param2((int)auStack_18,-0x7ffea510);
  if (DAT_800043a0/*SDRAM*/ == '\0') {
    uStack_1c = 5;
  }
  else {
    uStack_1c = read_struct_field_at_index_104c2890((void *)0x80015b24/*SDRAM*/,0);
  }
  uVar1 = return_first_word_1045c514((uint32_t *)0x80018058/*SDRAM*/);
  uVar2 = read_struct_field_at_offset_4((void *)0x80018058/*SDRAM*/);
  uVar3 = return_first_word_1045c514(auStack_18);
  uVar4 = read_struct_field_at_offset_4(auStack_18);
  *(short *)(puVar5 + 2) = (short)uVar4;
  *(uint16_t *)(puVar5 + 6) = 100;
  dispatch_six_param_object_ops((void *)(param_1 + 0x23c),uVar1 & 0xffff,uVar2 & 0xffff,uVar3 & 0xffff,
               *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6));
  transform_and_store_value((void *)(param_1 + 0x23c),uStack_1c);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
