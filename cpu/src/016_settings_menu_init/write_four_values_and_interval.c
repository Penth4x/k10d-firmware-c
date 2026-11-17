/* @k10d write_four_values_and_interval @ 0x1036ae02
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 016_settings_menu_init (unit names are model-proposed)
 * purpose:
 *   Computes four 16-bit values and an interval, then writes them to an object at offset
 *   0x3c.
 * summary:
 *   The function initializes a local structure via copy_two_words_from_param2. It
 *   determines an interval value (either 5 or a computed value from
 *   read_struct_field_at_index_104c2890) based on the state of DAT_800043a0. It retrieves
 *   two pairs of 16-bit values from memory addresses 0x80018058 and the local structure
 *   using return_first_word_1045c514 and read_struct_field_at_offset_4. These values, along
 *   with a fixed value of 100, are written to an object at offset 0x3c via
 *   dispatch_six_param_object_ops, and the computed interval is written via
 *   transform_and_store_value. Finally, it calls free_heap_if_flagged_1045c402 to finalize
 *   or release the local structure.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_four_values_and_interval(void *param_1)

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
  dispatch_six_param_object_ops((void *)((int)param_1 + 0x3c),uVar1 & 0xffff,uVar2 & 0xffff,uVar3 & 0xffff,
               *(uint16_t *)(puVar5 + 2),*(uint16_t *)(puVar5 + 6));
  transform_and_store_value((void *)((int)param_1 + 0x3c),uStack_1c);
  free_heap_if_flagged_1045c402(auStack_18,2);
  return;
}
