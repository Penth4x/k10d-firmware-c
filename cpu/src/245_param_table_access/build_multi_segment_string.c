/* @k10d build_multi_segment_string @ 0x104d5d96
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Concatenates up to three variable-length segments into a destination buffer, inserting
 *   a separator between them.
 * summary:
 *   The function initializes the destination buffer (param_2) using a template at
 *   0x105ba070. It then iterates through three indices (0, 1, 2), checking for presence via
 *   read_byte_at_offset_104d5d8e. For each present segment, it retrieves data via
 *   read_word_from_array_104d5e86, formats it using format_string_to_buffer_10545140 with a
 *   template at 0x105ba078, and appends it to the destination via copy_string_to_buffer. A
 *   separator (0x105ba074) is inserted between segments if more than one is present.
 *   Returns true if any segment was processed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool build_multi_segment_string(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  bool bVar3;
  uint8_t auStack_18 [16];
  
  format_string_to_buffer_10545140(param_2,(char *)0x105ba070/*ROM*/,param_3,param_4);
  iVar1 = read_byte_at_offset_104d5d8e(param_1,0);
  bVar3 = iVar1 != 0;
  if (bVar3) {
    pvVar2 = (void *)read_word_from_array_104d5e86(param_1,0);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba078/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
  }
  iVar1 = read_byte_at_offset_104d5d8e(param_1,1);
  if (iVar1 != 0) {
    if (bVar3) {
      copy_string_to_buffer(param_2,(void *)0x105ba074/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d5e86(param_1,1);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba078/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  iVar1 = read_byte_at_offset_104d5d8e(param_1,2);
  if (iVar1 != 0) {
    if (bVar3 != false) {
      copy_string_to_buffer(param_2,(void *)0x105ba074/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d5e86(param_1,2);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba078/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  return bVar3;
}
