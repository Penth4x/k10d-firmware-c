/* @k10d serialize_struct_to_buffer @ 0x104e2642
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 251_buffer_state_manager (unit names are model-proposed)
 * purpose:
 *   Copies fields from a source struct into a destination buffer at specified offsets,
 *   handling a conditional string block.
 * summary:
 *   The function reads a pointer from param_1+0x18 and copies a series of 2-byte and 4-byte
 *   values into the buffer pointed to by param_1+0xc using copy_bytes_if_flag_set. It then
 *   processes a string pointer from offset 0x224, writing its length and content. Based on
 *   a check of the value at offset 0x2aa (0x3002), it either writes a zero byte or
 *   constructs a larger block using string formatting helpers
 *   (format_string_to_buffer_10545140, copy_string_to_buffer) with static string literals.
 *   It returns the final offset in the destination buffer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int serialize_struct_to_buffer(int param_1)

{
  struct {
    uint32_t uStack_10;
    ushort uStack_c;
    byte bStack_9;
  } _cfg_10;
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  uintptr_t sp;
  int iStack_48;
  uint8_t auStack_30 [6];
  uint8_t auStack_2a [6];
  char acStack_24 [20];
  _cfg_10.uStack_c = 0;
  _cfg_10.uStack_10 = 0;
  fill_byte_array(acStack_24,0,0x14);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2b8);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0xc);
  _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 700);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_c,2,0x10);
  _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2be);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_c,2,0x12);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2c0);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x14);
  _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2c4);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_c,2,0x18);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2c8);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x1a);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2cc);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x1e);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2d0);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x22);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2d4);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x26);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2d8);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x2a);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2dc);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x2e);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2e0);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x32);
  _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2e4);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_c,2,0x36);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2e8);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x38);
  _cfg_10.uStack_10 = *(uint32_t *)(*(int *)(param_1 + 0x18) + 0x2ec);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.uStack_10,4,0x3c);
  pcVar3 = *(char **)(*(int *)(param_1 + 0x18) + 0x224);
  iVar1 = count_string_bytes(pcVar3);
  _cfg_10.bStack_9 = (char)iVar1 + 1;
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.bStack_9,1,0x40);
  call_indirect_and_return_double_plus_one(*(int *)(param_1 + 0xc),pcVar3,0x41,(uint)_cfg_10.bStack_9);
  iStack_48 = (uint)_cfg_10.bStack_9 * 2;
  if (*(short *)(*(int *)(param_1 + 0x18) + 700) == 0x3002) {
    _cfg_10.bStack_9 = 0;
    copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.bStack_9,1,iStack_48 + 0x41);
    iStack_48 = iStack_48 + 2;
  }
  else {
    _cfg_10.bStack_9 = 0x10;
    pvVar2 = (void *)(iStack_48 + 0x41);
    copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.bStack_9,1,(int)pvVar2);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2aa);
    format_string_to_buffer_10545140(auStack_30,(char *)0x105becbc/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_30);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2ac);
    format_string_to_buffer_10545140(auStack_2a,(char *)0x105becc4/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_2a);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2ae);
    format_string_to_buffer_10545140(auStack_2a,(char *)0x105beccc/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_2a);
    copy_string_to_buffer(acStack_24,(void *)0x105becd4/*ROM*/);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2b0);
    format_string_to_buffer_10545140(auStack_2a,(char *)0x105becd8/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_2a);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2b2);
    format_string_to_buffer_10545140(auStack_2a,(char *)0x105bece0/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_2a);
    _cfg_10.uStack_c = *(ushort *)(*(int *)(param_1 + 0x18) + 0x2b4);
    format_string_to_buffer_10545140(auStack_2a,(char *)0x105bece8/*ROM*/,(void *)(uint)_cfg_10.uStack_c,pvVar2);
    copy_string_to_buffer(acStack_24,auStack_2a);
    iVar1 = call_indirect_and_return_double_plus_one(*(int *)(param_1 + 0xc),acStack_24,iStack_48 + 0x42,0xf);
    iStack_48 = iVar1 + iStack_48 + 2;
  }
  _cfg_10.bStack_9 = 0;
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.bStack_9,1,iStack_48 + 0x40);
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&_cfg_10.bStack_9,1,iStack_48 + 0x41);
  return iStack_48 + 0x36;
}
