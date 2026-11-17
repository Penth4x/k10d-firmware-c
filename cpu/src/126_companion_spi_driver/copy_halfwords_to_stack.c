/* @k10d copy_halfwords_to_stack @ 0x104445ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 126_companion_spi_driver (unit names are model-proposed)
 * purpose:
 *   Copies a variable number of 16-bit halfwords from a source buffer to a fixed stack
 *   location.
 * summary:
 *   The function takes a count (param_3), a source pointer (param_2), and an unused flag
 *   (param_1). It calculates the number of 32-bit words to copy and performs a bulk copy of
 *   up to 3 halfwords per iteration into the stack region at 0x7ffe1080 (relative to the
 *   current frame). Any remaining halfwords are copied individually in a subsequent loop.
 *   It is called by flash_program_block, likely to stage data for the flash programming
 *   operation.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_halfwords_to_stack(uint32_t param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 != 0) {
    param_3 = param_3 + -3;
    iVar1 = 0;
    iVar2 = iVar1;
    if (2 < param_3) {
      do {
        *(uint16_t *)(iVar2 + -0x7ffe1080) = *(uint16_t *)(iVar2 + param_2);
        *(uint16_t *)(iVar2 + -0x7ffe107e) = *(uint16_t *)(iVar2 + 2 + param_2);
        iVar1 = iVar2 + 6;
        param_3 = param_3 + -3;
        *(uint16_t *)(iVar2 + -0x7ffe107c) = *(uint16_t *)(iVar2 + 4 + param_2);
        iVar2 = iVar1;
      } while (-1 < param_3);
    }
    for (param_3 = param_3 + 2; -1 < param_3; param_3 = param_3 + -1) {
      *(uint16_t *)(iVar1 + -0x7ffe1080) = *(uint16_t *)(iVar1 + param_2);
      iVar1 = iVar1 + 2;
    }
  }
  return;
}
