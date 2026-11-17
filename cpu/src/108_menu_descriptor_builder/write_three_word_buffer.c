/* @k10d write_three_word_buffer @ 0x10429a78
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 108_menu_descriptor_builder (unit names are model-proposed)
 * purpose:
 *   Copies a 0x80-byte buffer and three 4-byte words from a source structure to a
 *   destination address.
 * summary:
 *   The function calls copy_rgb_triplets_from_struct and
 *   copy_bytes_to_struct_offset_10428b80 to process a 0x80-byte stack buffer. It then
 *   iterates three times, calling compute_struct_field_offset_104288de with indices 0, 1,
 *   and 2 to retrieve 4-byte values, and writes each to the destination address -0x7ffe2124
 *   using copy_words_to_struct_offset_10428576. The destination address is a fixed MMIO or
 *   memory location, and the source is &DAT_1000bfcc.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_word_buffer(uint32_t param_1,int param_2)

{
  int iVar1;
  uintptr_t sp;
  int *piVar2;
  uint8_t local_9c [4];
  uint8_t auStack_88 [128];
  
  piVar2 = (int *)local_9c;
  copy_rgb_triplets_from_struct(&DAT_1000bfcc/*ROM*/,auStack_88,0x80,param_2);
  copy_bytes_to_struct_offset_10428b80(-0x7ffe2124,auStack_88,0x80,param_2);
  iVar1 = compute_struct_field_offset_104288de(&DAT_1000bfcc/*ROM*/,0,param_2);
  *piVar2 = param_2;
  copy_words_to_struct_offset_10428576(-0x7ffe2124,0,iVar1,4,*piVar2);
  iVar1 = compute_struct_field_offset_104288de(&DAT_1000bfcc/*ROM*/,1,param_2);
  *piVar2 = param_2;
  copy_words_to_struct_offset_10428576(-0x7ffe2124,1,iVar1,4,*piVar2);
  iVar1 = compute_struct_field_offset_104288de(&DAT_1000bfcc/*ROM*/,2,param_2);
  *piVar2 = param_2;
  copy_words_to_struct_offset_10428576(-0x7ffe2124,2,iVar1,4,*piVar2);
  return;
}
