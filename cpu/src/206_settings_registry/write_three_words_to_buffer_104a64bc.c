/* @k10d write_three_words_to_buffer_104a64bc @ 0x104a64bc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Copies three 16-bit words from a source buffer into a destination buffer via a byte-
 *   wise helper.
 * summary:
 *   The function reads a pointer from param_1+100, then iterates three times to extract
 *   16-bit values. It calls write_byte_to_struct_offset_104a8be2 six times per iteration to
 *   write the high and low bytes of each word to consecutive indices in param_2. The callee
 *   write_byte_to_struct_offset_104a8be2 is not named, but the pattern suggests a byte-wise
 *   write or set operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_words_to_buffer_104a64bc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uStack_c;
  
  iVar4 = *(int *)(*(int *)(param_1 + 100) + 4);
  iVar3 = 0;
  uStack_c = 2;
  iVar1 = 0;
  do {
    write_byte_to_struct_offset_104a8be2(param_2,iVar3 * 2,(char)((ushort)*(uint16_t *)(iVar4 + iVar1) >> 8));
    write_byte_to_struct_offset_104a8be2(param_2,iVar3 * 2 + 1,(char)*(uint16_t *)(iVar4 + iVar1));
    iVar2 = (iVar3 + 1) * 2;
    write_byte_to_struct_offset_104a8be2(param_2,iVar2,(char)((ushort)*(uint16_t *)(iVar4 + iVar1 + 2) >> 8));
    write_byte_to_struct_offset_104a8be2(param_2,iVar2 + 1,(char)*(uint16_t *)(iVar4 + iVar1 + 2));
    iVar2 = (iVar3 + 2) * 2;
    write_byte_to_struct_offset_104a8be2(param_2,iVar2,(char)((ushort)*(uint16_t *)(iVar4 + iVar1 + 4) >> 8));
    write_byte_to_struct_offset_104a8be2(param_2,iVar2 + 1,(char)*(uint16_t *)(iVar4 + iVar1 + 4));
    iVar3 = iVar3 + 3;
    uStack_c = uStack_c + -1;
    iVar1 = iVar1 + 6;
  } while (-1 < uStack_c);
  return;
}
