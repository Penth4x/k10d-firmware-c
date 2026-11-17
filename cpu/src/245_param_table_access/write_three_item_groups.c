/* @k10d write_three_item_groups @ 0x104d56ae
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Iterates over 28 items in groups of three, writing each non-zero item's data to a
 *   buffer with separators.
 * summary:
 *   The function loops 9 times, processing indices 0-27 in steps of 3. For each index, it
 *   checks a condition via read_byte_at_offset_104d56a4; if true, it writes a separator
 *   (0x105ba044) if not the first item, fetches data via read_word_from_array_104d57f4,
 *   formats it into a stack buffer using format_string_to_buffer_10545140, and appends it
 *   to the output buffer via copy_string_to_buffer. It returns 1 if any items were written,
 *   0 otherwise.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int write_three_item_groups(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uintptr_t sp;
  int iStack_1c;
  uint8_t auStack_18 [16];
  
  iVar4 = 0;
  format_string_to_buffer_10545140(param_2,(char *)0x105ba040/*ROM*/,param_3,param_4);
  iVar3 = 0;
  iStack_1c = 9;
  do {
    iVar1 = read_byte_at_offset_104d56a4(param_1,iVar3);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        copy_string_to_buffer(param_2,(void *)0x105ba044/*ROM*/);
      }
      pvVar2 = (void *)read_word_from_array_104d57f4(param_1,iVar3);
      format_string_to_buffer_10545140(auStack_18,(char *)0x105ba048/*ROM*/,pvVar2,param_4);
      copy_string_to_buffer(param_2,auStack_18);
      iVar4 = 1;
    }
    iVar1 = read_byte_at_offset_104d56a4(param_1,iVar3 + 1);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        copy_string_to_buffer(param_2,(void *)0x105ba044/*ROM*/);
      }
      pvVar2 = (void *)read_word_from_array_104d57f4(param_1,iVar3 + 1);
      format_string_to_buffer_10545140(auStack_18,(char *)0x105ba048/*ROM*/,pvVar2,param_4);
      copy_string_to_buffer(param_2,auStack_18);
      iVar4 = 1;
    }
    iVar1 = read_byte_at_offset_104d56a4(param_1,iVar3 + 2);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        copy_string_to_buffer(param_2,(void *)0x105ba044/*ROM*/);
      }
      pvVar2 = (void *)read_word_from_array_104d57f4(param_1,iVar3 + 2);
      format_string_to_buffer_10545140(auStack_18,(char *)0x105ba048/*ROM*/,pvVar2,param_4);
      copy_string_to_buffer(param_2,auStack_18);
      iVar4 = 1;
    }
    iVar3 = iVar3 + 3;
    iStack_1c = iStack_1c + -1;
  } while (-1 < iStack_1c);
  iVar1 = read_byte_at_offset_104d56a4(param_1,iVar3);
  if (iVar1 != 0) {
    if (iVar4 != 0) {
      copy_string_to_buffer(param_2,(void *)0x105ba044/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d57f4(param_1,iVar3);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba048/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    iVar4 = 1;
  }
  return iVar4;
}
