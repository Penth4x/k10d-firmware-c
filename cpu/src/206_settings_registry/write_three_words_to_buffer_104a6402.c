/* @k10d write_three_words_to_buffer_104a6402 @ 0x104a6402
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 206_settings_registry (unit names are model-proposed)
 * purpose:
 *   Copies three 16-bit words from a source buffer into a destination buffer via a byte-
 *   wise setter.
 * summary:
 *   Reads a pointer from offset 100 of param_1 and iterates three times, extracting two
 *   16-bit words per iteration. For each word, it calls
 *   write_byte_to_struct_offset_104a8be2 twice to write the high and low bytes to
 *   consecutive indices in param_2. The function performs a total of 12 byte writes to
 *   param_2, effectively copying 6 bytes of data from the source buffer pointed to by the
 *   dereferenced pointer.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void write_three_words_to_buffer_104a6402(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint32_t uStack_c;
  
  iVar4 = **(int **)(param_1 + 100);
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
