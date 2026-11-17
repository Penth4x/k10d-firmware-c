/* @k10d copy_53_words_from_source @ 0x104361d0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies 53 consecutive 32-bit words from a source buffer into a destination buffer.
 * summary:
 *   Iterates 53 times, calling read_short_from_array to fetch three consecutive words from
 *   param_1 and writing them to param_2. The loop counter is initialized to 0x35 (53) and
 *   decremented each iteration. Returns the constant 0xa2.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t copy_53_words_from_source(uint32_t param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  uint32_t uStack_c;
  
  iVar2 = 0;
  uStack_c = 0x35;
  iVar3 = 0;
  do {
    uVar1 = read_short_from_array(param_1,iVar2);
    *(uint32_t *)(param_2 + iVar3) = uVar1;
    uVar1 = read_short_from_array(param_1,iVar2 + 1);
    *(uint32_t *)(param_2 + iVar3 + 4) = uVar1;
    uVar1 = read_short_from_array(param_1,iVar2 + 2);
    *(uint32_t *)(param_2 + iVar3 + 8) = uVar1;
    iVar2 = iVar2 + 3;
    uStack_c = uStack_c + -1;
    iVar3 = iVar3 + 0xc;
  } while (-1 < uStack_c);
  return 0xa2;
}
