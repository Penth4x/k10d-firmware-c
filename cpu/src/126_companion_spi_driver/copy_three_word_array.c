/* @k10d copy_three_word_array @ 0x10436bcc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 30 consecutive 32-bit words from a source buffer into a destination buffer.
 * summary:
 *   Iterates 10 times, calling read_byte_at_offset_1043688a to fetch three consecutive
 *   words from param_1 and writing them to param_2. Returns the constant 0x5d (93). The
 *   callee read_byte_at_offset_1043688a is not named, so the specific data being copied is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_three_word_array(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  iVar2 = 0;
  uStack_c = 0x1e;
  iVar3 = 0;
  do {
    uVar1 = read_byte_at_offset_1043688a(param_1,iVar2);
    *(uint32_t *)(param_2 + iVar3) = uVar1;
    uVar1 = read_byte_at_offset_1043688a(param_1,iVar2 + 1);
    *(uint32_t *)(param_2 + iVar3 + 4) = uVar1;
    uVar1 = read_byte_at_offset_1043688a(param_1,iVar2 + 2);
    *(uint32_t *)(param_2 + iVar3 + 8) = uVar1;
    iVar2 = iVar2 + 3;
    uStack_c = uStack_c + -1;
    iVar3 = iVar3 + 0xc;
  } while (-1 < uStack_c);
  return 0x5d;
}
