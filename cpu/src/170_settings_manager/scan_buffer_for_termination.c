/* @k10d scan_buffer_for_termination @ 0x1047f4c4
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * unit: 170_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies 16-byte chunks from a source buffer and checks for a 0x80 or 0x00 terminator
 *   byte.
 * summary:
 *   The function reads a pointer from param_1 via check_two_byte_magic_match. It then
 *   iterates four times, copying 16 bytes from the source address into param_2. After each
 *   copy, it checks if the first byte of param_2 is 0x80 or 0x00. If a terminator is found,
 *   it calls read_little_endian_word_1047f216 with the buffer and a pointer 8 bytes ahead;
 *   if that call returns non-zero, the function returns 1. Otherwise, it returns 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t scan_buffer_for_termination(int *param_1,char *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = check_two_byte_magic_match(param_1);
  if (iVar3 != 0) {
    uVar4 = 0;
    iVar3 = 0x1be;
    do {
      iVar5 = 0x10;
      iVar2 = *param_1;
      do {
        iVar5 = iVar5 + -1;
        param_2[iVar5] = *(char *)(iVar5 + iVar2 + iVar3);
      } while (iVar5 != 0);
      bVar1 = false;
      if ((*param_2 == -0x80) || (*param_2 == '\0')) {
        bVar1 = true;
      }
      if ((bVar1) && (iVar2 = read_little_endian_word_1047f216(param_2,param_2 + 8), iVar2 != 0)) {
        return 1;
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 0x10;
    } while (uVar4 < 4);
  }
  return 0;
}
