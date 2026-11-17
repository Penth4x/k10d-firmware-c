/* @k10d build_string_from_rodata_segments @ 0x1052bbea
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 286_sr_calibration (unit names are model-proposed)
 * purpose:
 *   Constructs a string buffer by appending multiple rodata segments and a value from an
 *   object member, returning the final length.
 * summary:
 *   Initializes a local buffer and appends several string segments (defined by pointers and
 *   lengths in rodata) using helper functions. It also incorporates a value from the
 *   object's member at offset 0xc via copy_bytes_if_flag_set. The final step calls
 *   call_indirect_and_return_double_plus_one to compute or finalize the string length,
 *   returning that value plus one.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int build_string_from_rodata_segments(int param_1)

{
  int iVar1;
  uint8_t *puVar2;
  uintptr_t sp;
  uint8_t uStack_2c;
  uint8_t uStack_2b;
  uint8_t uStack_2a;
  uint8_t uStack_29;
  uint8_t uStack_28;
  uint8_t uStack_27;
  uint8_t uStack_26;
  uint8_t uStack_25;
  uint8_t uStack_24;
  uint8_t uStack_23;
  uint8_t uStack_22;
  uint8_t uStack_21;
  char acStack_20 [23];
  uint8_t uStack_9;
  
  uStack_2c = 0;
  uStack_2b = 0;
  uStack_2a = 0;
  uStack_29 = 0;
  uStack_28 = 0;
  uStack_27 = 0;
  uStack_26 = 0;
  uStack_25 = 0;
  uStack_24 = 0;
  uStack_23 = 0;
  uStack_22 = 0;
  uStack_21 = 0;
  fill_byte_array(acStack_20,0,0x14);
  uStack_9 = 0x10;
  puVar2 = &DAT_0000000c;
  copy_bytes_if_flag_set(*(int *)(param_1 + 0xc),&uStack_9,1,0xc);
  format_string_to_buffer_10545140(&uStack_2c,(char *)0x105f9eb8/*ROM*/,(void *)0x7d6,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_2c);
  format_string_to_buffer_10545140(&uStack_26,(char *)0x105f9ec0/*ROM*/,(void *)0x5,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_26);
  format_string_to_buffer_10545140(&uStack_26,(char *)0x105f9ec8/*ROM*/,(void *)0x1b,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_26);
  copy_string_to_buffer(acStack_20,(void *)0x105f9ed0/*ROM*/);
  format_string_to_buffer_10545140(&uStack_26,(char *)0x105f9ed4/*ROM*/,(void *)0x11,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_26);
  format_string_to_buffer_10545140(&uStack_26,(char *)0x105f9edc/*ROM*/,(void *)0x19,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_26);
  format_string_to_buffer_10545140(&uStack_26,(char *)0x105f9ee4/*ROM*/,&DAT_0000000c,puVar2);
  copy_string_to_buffer(acStack_20,&uStack_26);
  iVar1 = call_indirect_and_return_double_plus_one(*(int *)(param_1 + 0xc),acStack_20,0xd,0xf);
  return iVar1 + 1;
}
