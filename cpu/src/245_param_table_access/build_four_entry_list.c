/* @k10d build_four_entry_list @ 0x104d5312
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 245_param_table_access (unit names are model-proposed)
 * purpose:
 *   Iterates over four indices, checking validity and appending valid entries to a list
 *   structure.
 * summary:
 *   The function loops through indices 0 to 3. For each index, it calls
 *   read_byte_from_struct_offset_104d5308 to check a condition. If valid, it retrieves a
 *   pointer via read_array_element_104d544c, prepares a 16-byte structure on the stack
 *   using format_string_to_buffer_10545140, and appends it to the list in param_2 using
 *   copy_string_to_buffer. It returns true if at least one entry was added.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool build_four_entry_list(uint32_t param_1,char *param_2,void *param_3,void *param_4)

{
  int iVar1;
  void *pvVar2;
  uintptr_t sp;
  bool bVar3;
  uint8_t auStack_18 [16];
  
  format_string_to_buffer_10545140(param_2,(char *)0x105ba030/*ROM*/,param_3,param_4);
  iVar1 = read_byte_from_struct_offset_104d5308(param_1,0);
  bVar3 = iVar1 != 0;
  if (bVar3) {
    pvVar2 = (void *)read_array_element_104d544c(param_1,0);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba038/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
  }
  iVar1 = read_byte_from_struct_offset_104d5308(param_1,1);
  if (iVar1 != 0) {
    if (bVar3) {
      copy_string_to_buffer(param_2,(void *)0x105ba034/*ROM*/);
    }
    pvVar2 = (void *)read_array_element_104d544c(param_1,1);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba038/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  iVar1 = read_byte_from_struct_offset_104d5308(param_1,2);
  if (iVar1 != 0) {
    if (bVar3 != false) {
      copy_string_to_buffer(param_2,(void *)0x105ba034/*ROM*/);
    }
    pvVar2 = (void *)read_array_element_104d544c(param_1,2);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba038/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  iVar1 = read_byte_from_struct_offset_104d5308(param_1,3);
  if (iVar1 != 0) {
    if (bVar3 != false) {
      copy_string_to_buffer(param_2,(void *)0x105ba034/*ROM*/);
    }
    pvVar2 = (void *)read_array_element_104d544c(param_1,3);
    format_string_to_buffer_10545140(auStack_18,(char *)0x105ba038/*ROM*/,pvVar2,param_4);
    copy_string_to_buffer(param_2,auStack_18);
    bVar3 = true;
  }
  return bVar3;
}
