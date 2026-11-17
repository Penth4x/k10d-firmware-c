/* @k10d write_exposure_params_to_object @ 0x10365e42
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * unit: 006_menu_state_manager (unit names are model-proposed)
 * purpose:
 *   Computes and writes a set of exposure-related parameters to a structure at param_1 +
 *   0x84.
 * summary:
 *   The function retrieves values from two memory locations (0x80018058 and a stack buffer)
 *   using helper functions return_first_word_1045c514 and read_struct_field_at_offset_4. It
 *   constructs a small structure on the stack with a fixed value of 100 and a computed
 *   value. It then calls dispatch_six_param_object_ops to write these four 16-bit values to
 *   the offset 0x84 of the object pointed to by param_1. Finally, it calls
 *   transform_and_store_value to write a status or mode value (either 5 or a result from
 *   read_struct_field_at_index_104c2890) to the same object offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_exposure_params_to_object(int param_1)

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
  dispatch_six_param_object_ops((void *)(param_1 + 0x84),uVar1 & 0xffff,uVar2 & 0xffff,uVar3 & 0xffff,
               *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6));
  transform_and_store_value((void *)(param_1 + 0x84),uStack_1c);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
