/* @k10d copy_four_words_from_struct @ 0x104a6578
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Reads four 16-bit values from a struct at offsets 0x12-0x18 and passes them to a
 *   helper.
 * summary:
 *   The function dereferences a pointer stored at param_1+0x60 to get a base address. It
 *   then reads four consecutive 16-bit values from offsets 0x12, 0x14, 0x16, and 0x18 of
 *   that struct. Each value is passed to write_two_byte_value_104a7246 along with param_1
 *   and a flag of 1. Finally, it calls copy_bytes_to_struct_field with param_2, the first
 *   local buffer, and a size of 8. The specific camera subsystem is not identifiable from
 *   the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words_from_struct(int param_1,int param_2)

{
  uintptr_t sp;
  uint8_t auStack_10 [2];
  uint8_t auStack_e [2];
  uint8_t auStack_c [2];
  uint8_t auStack_a [2];
  
  write_two_byte_value_104a7246(param_1,auStack_10,*(uint16_t *)(*(int *)(param_1 + 0x60) + 0x12),1);
  write_two_byte_value_104a7246(param_1,auStack_e,*(uint16_t *)(*(int *)(param_1 + 0x60) + 0x14),1);
  write_two_byte_value_104a7246(param_1,auStack_c,*(uint16_t *)(*(int *)(param_1 + 0x60) + 0x16),1);
  write_two_byte_value_104a7246(param_1,auStack_a,*(uint16_t *)(*(int *)(param_1 + 0x60) + 0x18),1);
  copy_bytes_to_struct_field(param_2,auStack_10,8);
  return;
}
