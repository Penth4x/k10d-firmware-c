/* @k10d build_multi_entry_list @ 0x104d5b3a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Iterates over four indexed sub-items of param_1 and appends their descriptors to a list
 *   in param_2.
 * summary:
 *   For each index 0..3, calls read_byte_from_struct_offset_104d5b30 to test presence and
 *   read_word_from_array_104d5c74 to fetch a pointer. It uses
 *   format_string_to_buffer_10545140 to format a descriptor (using rodata at
 *   0x105ba060/0x105ba068) and copy_string_to_buffer to append it to the list in param_2.
 *   It inserts a separator (0x105ba064) between entries if more than one is present.
 *   Returns true if any entry was added.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool build_multi_entry_list(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  bool bVar3;
  uint8_t auStack_18 [16];
  
  format_string_to_buffer_10545140(param_2,(char *)0x105ba060/*ROM*/,param_3,param_4);
  iVar1 = read_byte_from_struct_offset_104d5b30(param_1,0);
  bVar3 = iVar1 != 0;
  if (bVar3) {
    pvVar2 = (void *)read_word_from_array_104d5c74(param_1,0);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba068/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
  }
  iVar1 = read_byte_from_struct_offset_104d5b30(param_1,1);
  if (iVar1 != 0) {
    if (bVar3) {
      copy_string_to_buffer(param_2,(void *)0x105ba064/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d5c74(param_1,1);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba068/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  iVar1 = read_byte_from_struct_offset_104d5b30(param_1,2);
  if (iVar1 != 0) {
    if (bVar3 != false) {
      copy_string_to_buffer(param_2,(void *)0x105ba064/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d5c74(param_1,2);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba068/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  iVar1 = read_byte_from_struct_offset_104d5b30(param_1,3);
  if (iVar1 != 0) {
    if (bVar3 != false) {
      copy_string_to_buffer(param_2,(void *)0x105ba064/*ROM*/);
    }
    pvVar2 = (void *)read_word_from_array_104d5c74(param_1,3);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba068/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  return bVar3;
}
