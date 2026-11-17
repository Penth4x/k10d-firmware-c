/* @k10d iterate_and_log_sixteen_pairs @ 0x104d61d0
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Loops 16 times over index pairs, querying and processing entries from param_1 while
 *   writing formatted records to param_2.
 * summary:
 *   The function iterates 16 times (iStack_16c initialized to 0x10), processing two indices
 *   per iteration (iStack_170 and iStack_170+1). For each valid index (checked via
 *   read_byte_at_offset_0x88), it retrieves data via read_array_element_104d63c8, processes
 *   it with find_entry_by_key_in_table and find_entry_in_fixed_table, and writes formatted
 *   output to param_2 using format_string_to_buffer_10545140 and copy_string_to_buffer with
 *   various rodata format strings. The return value indicates whether any entries were
 *   processed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int iterate_and_log_sixteen_pairs(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uint32_t uVar3;
  int iVar4;
  int iVar5;
  uintptr_t sp;
  int iStack_170;
  int iStack_16c;
  uint8_t auStack_148 [64];
  uint8_t auStack_108 [128];
  uint8_t auStack_88 [128];
  
  iVar4 = 0;
  format_string_to_buffer_10545140(param_2,(char *)0x105ba080/*ROM*/,param_3,param_4);
  iStack_170 = 0;
  iStack_16c = 0x10;
  do {
    iVar1 = read_byte_at_offset_0x88(param_1,iStack_170);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        copy_string_to_buffer(param_2,(void *)0x105ba084/*ROM*/);
      }
      pvVar2 = (void *)read_array_element_104d63c8(param_1,iStack_170);
      format_string_to_buffer_10545140(auStack_148,(char *)0x105ba088/*ROM*/,pvVar2,param_4);
      copy_string_to_buffer(param_2,auStack_148);
      uVar3 = read_array_element_104d63c8(param_1,iStack_170);
      find_entry_by_key_in_table(param_1,uVar3);
      iVar4 = build_multi_entry_list(__frv_reg_unset(4),(char *)__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
      if (iVar4 != 0) {
        format_string_to_buffer_10545140(auStack_148,(char *)0x105ba090/*ROM*/,auStack_108,param_4);
        copy_string_to_buffer(param_2,auStack_148);
      }
      uVar3 = read_array_element_104d63c8(param_1,iStack_170);
      uVar3 = find_entry_in_fixed_table(param_1,uVar3);
      iVar4 = build_multi_segment_string(uVar3,auStack_88,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
      if (iVar4 != 0) {
        format_string_to_buffer_10545140(auStack_148,(char *)0x105ba0a0/*ROM*/,auStack_88,param_4);
        copy_string_to_buffer(param_2,auStack_148);
      }
      iVar4 = 1;
    }
    iVar5 = iStack_170 + 1;
    iVar1 = read_byte_at_offset_0x88(param_1,iVar5);
    if (iVar1 != 0) {
      if (iVar4 != 0) {
        copy_string_to_buffer(param_2,(void *)0x105ba084/*ROM*/);
      }
      pvVar2 = (void *)read_array_element_104d63c8(param_1,iVar5);
      format_string_to_buffer_10545140(auStack_148,(char *)0x105ba088/*ROM*/,pvVar2,param_4);
      copy_string_to_buffer(param_2,auStack_148);
      uVar3 = read_array_element_104d63c8(param_1,iVar5);
      find_entry_by_key_in_table(param_1,uVar3);
      iVar4 = build_multi_entry_list(__frv_reg_unset(4),(char *)__frv_reg_unset(5),(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
      if (iVar4 != 0) {
        format_string_to_buffer_10545140(auStack_148,(char *)0x105ba090/*ROM*/,auStack_108,param_4);
        copy_string_to_buffer(param_2,auStack_148);
      }
      uVar3 = read_array_element_104d63c8(param_1,iVar5);
      uVar3 = find_entry_in_fixed_table(param_1,uVar3);
      iVar4 = build_multi_segment_string(uVar3,auStack_88,(void *)__frv_reg_unset(6),(void *)__frv_reg_unset(7));
      if (iVar4 != 0) {
        format_string_to_buffer_10545140(auStack_148,(char *)0x105ba0a0/*ROM*/,auStack_88,param_4);
        copy_string_to_buffer(param_2,auStack_148);
      }
      iVar4 = 1;
    }
    iStack_170 = iStack_170 + 2;
    iStack_16c = iStack_16c + -1;
  } while (-1 < iStack_16c);
  return iVar4;
}
