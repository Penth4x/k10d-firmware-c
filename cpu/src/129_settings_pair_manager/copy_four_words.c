/* @k10d copy_four_words @ 0x1045bf74
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Copies four consecutive 32-bit words from param_2 to param_1.
 * summary:
 *   The function performs a simple memory copy of 16 bytes (four 32-bit words) from the
 *   source buffer pointed to by param_2 to the destination buffer pointed to by param_1. It
 *   uses a loop that decrements the offset from 8 down to 0, copying 4 bytes at each step.
 *   No other side effects or device interactions are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_four_words(void *param_1,void *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = iVar2 + -4;
    *(uint32_t *)((int)param_1 + iVar2 + 4) = *(uint32_t *)(iVar1 + (int)param_2);
    iVar2 = iVar1;
  } while (iVar1 != 0);
  return;
}
