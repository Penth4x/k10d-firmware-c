/* @k10d reset_rgb_pipeline_channels @ 0x10501bd4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 265_settings_context_manager (unit names are model-proposed)
 * purpose:
 *   Resets and re-initializes the three image-pipeline channel objects (R/G/B) to full-
 *   scale 14-bit saturation.
 * summary:
 *   Iterates over three channel pointers stored at offsets 0x1c, 0x20, and 0x24 of the
 *   object. For each, it calls a series of reset functions (set_flag_bit_8_in_object_field,
 *   write_masked_word_to_object_offset_10456320, etc.) and finally sets the 14-bit
 *   saturation to 0x3fff (full scale) via set_channel_saturation_14bit. It also checks and
 *   clears some state via test_high_bit_of_first_word and a direct call to 0x1045453e. The
 *   function returns 1 on success.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t reset_rgb_pipeline_channels(void *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = test_high_bit_of_first_word((void *)(*(uint32_t *)((int)param_1 + 0x20)));
  if (iVar1 != 0) {
    (*(code *)0x1045453e/*ROM*/)(*(uint32_t *)((int)param_1 + 0x20),0);
  }
  iVar1 = test_high_bit_of_first_word((void *)(*(uint32_t *)((int)param_1 + 0x24)));
  if (iVar1 != 0) {
    (*(code *)0x1045453e/*ROM*/)(*(uint32_t *)((int)param_1 + 0x24),0);
  }
  set_flag_bit_8_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0);
  set_flag_bit_8_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x20)),0);
  set_flag_bit_8_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x24)),0);
  iVar3 = *(int *)((int)param_1 + 0x1c) + 0x14;
  iVar2 = *(int *)((int)param_1 + 0x20) + 0x14;
  iVar1 = *(int *)((int)param_1 + 0x24) + 0x14;
  write_masked_word_to_object_offset_10456320((void *)iVar3,0);
  write_masked_field_to_object_1045633e((void *)iVar3,0);
  write_masked_word_to_object_offset_10456320((void *)iVar2,0);
  write_masked_field_to_object_1045633e((void *)iVar2,0);
  write_masked_word_to_object_offset_10456320((void *)iVar1,0);
  write_masked_field_to_object_1045633e((void *)iVar1,0);
  write_masked_word_to_object_offset_1045635c((void *)iVar3,0);
  write_masked_field_to_object_1045637a((void *)iVar3,0);
  write_masked_word_to_object_offset_1045635c((void *)iVar2,0);
  write_masked_field_to_object_1045637a((void *)iVar2,0);
  write_masked_word_to_object_offset_1045635c((void *)iVar1,0);
  write_masked_field_to_object_1045637a((void *)iVar1,0);
  write_masked_word_to_object_offset_10456398((void *)iVar3,0);
  write_masked_word_to_object_offset_104563b6((void *)iVar3,0);
  write_masked_word_to_object_offset_10456398((void *)iVar2,0);
  write_masked_word_to_object_offset_104563b6((void *)iVar2,0);
  write_masked_word_to_object_offset_10456398((void *)iVar1,0);
  write_masked_word_to_object_offset_104563b6((void *)iVar1,0);
  set_flag_bit3_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0);
  set_object_flag_bit2_10454a2c((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0);
  set_object_flag_bit1((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0);
  set_object_flag_bit0((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0);
  update_14bit_saturation_field((void *)(*(uint32_t *)((int)param_1 + 0x1c)),0x3fff);
  set_flag_bit3_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x20)),0);
  set_object_flag_bit2_10454a2c((void *)(*(uint32_t *)((int)param_1 + 0x20)),0);
  set_object_flag_bit1((void *)(*(uint32_t *)((int)param_1 + 0x20)),0);
  set_object_flag_bit0((void *)(*(uint32_t *)((int)param_1 + 0x20)),0);
  update_14bit_saturation_field((void *)(*(uint32_t *)((int)param_1 + 0x20)),0x3fff);
  set_flag_bit3_in_object_field((void *)(*(uint32_t *)((int)param_1 + 0x24)),0);
  set_object_flag_bit2_10454a2c((void *)(*(uint32_t *)((int)param_1 + 0x24)),0);
  set_object_flag_bit1((void *)(*(uint32_t *)((int)param_1 + 0x24)),0);
  set_object_flag_bit0((void *)(*(uint32_t *)((int)param_1 + 0x24)),0);
  update_14bit_saturation_field((void *)(*(uint32_t *)((int)param_1 + 0x24)),0x3fff);
  return 1;
}
