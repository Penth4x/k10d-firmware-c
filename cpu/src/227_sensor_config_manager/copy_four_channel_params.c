/* @k10d copy_four_channel_params @ 0x104c1c7c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 227_sensor_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies four indexed parameter blocks and a 40-byte array from source to destination via
 *   helper calls.
 * summary:
 *   Iterates over indices 0-3, checking a flag via read_byte_from_struct_array and copying
 *   a value via compute_struct_array_offset if set. Then loops 8 times to copy 5
 *   consecutive 4-byte values from param_3 (starting at offset 0xf4) to param_2 via
 *   write_field_at_offset_104c281e. Finally calls write_field_at_offset_0x1cc with a
 *   pointer to param_3+0x1a8. The structure suggests copying a configuration or state block
 *   with 4 conditional fields and 40 bytes of additional data.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_channel_params(uint32_t param_1,void *param_2,void *param_3)

{
  char cVar2;
  int iVar1;
  int iVar3;
  int iStack_c;
  
  write_byte_to_struct_offset_104c27c8((int)param_2,0,0);
  cVar2 = read_byte_from_struct_array((int)param_3,0);
  if (cVar2 != '\0') {
    write_byte_to_struct_offset_104c27c8((int)param_2,0,1);
    iVar1 = compute_struct_array_offset((int)param_3,0);
    copy_14_word_block((int)param_2,0,iVar1);
  }
  write_byte_to_struct_offset_104c27c8((int)param_2,1,0);
  cVar2 = read_byte_from_struct_array((int)param_3,1);
  if (cVar2 != '\0') {
    write_byte_to_struct_offset_104c27c8((int)param_2,1,1);
    iVar1 = compute_struct_array_offset((int)param_3,1);
    copy_14_word_block((int)param_2,1,iVar1);
  }
  write_byte_to_struct_offset_104c27c8((int)param_2,2,0);
  cVar2 = read_byte_from_struct_array((int)param_3,2);
  if (cVar2 != '\0') {
    write_byte_to_struct_offset_104c27c8((int)param_2,2,1);
    iVar1 = compute_struct_array_offset((int)param_3,2);
    copy_14_word_block((int)param_2,2,iVar1);
  }
  write_byte_to_struct_offset_104c27c8((int)param_2,3,0);
  cVar2 = read_byte_from_struct_array((int)param_3,3);
  if (cVar2 != '\0') {
    write_byte_to_struct_offset_104c27c8((int)param_2,3,1);
    iVar1 = compute_struct_array_offset((int)param_3,3);
    copy_14_word_block((int)param_2,3,iVar1);
  }
  iVar1 = 0;
  iStack_c = 8;
  iVar3 = 0;
  do {
    write_field_at_offset_104c281e((int)param_2,iVar1,*(uint32_t *)((int)param_3 + iVar3 + 0xf4));
    write_field_at_offset_104c281e((int)param_2,iVar1 + 1,*(uint32_t *)((int)param_3 + iVar3 + 0xf8));
    write_field_at_offset_104c281e((int)param_2,iVar1 + 2,*(uint32_t *)((int)param_3 + iVar3 + 0xfc));
    write_field_at_offset_104c281e((int)param_2,iVar1 + 3,*(uint32_t *)((int)param_3 + iVar3 + 0x100));
    write_field_at_offset_104c281e((int)param_2,iVar1 + 4,*(uint32_t *)((int)param_3 + iVar3 + 0x104));
    iVar1 = iVar1 + 5;
    iStack_c = iStack_c + -1;
    iVar3 = iVar3 + 0x14;
  } while (-1 < iStack_c);
  write_field_at_offset_0x1cc((int)param_2,(uint16_t *)((int)param_3 + 0x1a8));
  return;
}
