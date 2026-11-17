/* @k10d copy_14_word_block @ 0x104c27d2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 228_config_manager (unit names are model-proposed)
 * purpose:
 *   Copies 14 consecutive 32-bit words from a source buffer to a destination buffer.
 * summary:
 *   The function performs a simple memory copy of 0x38 bytes (14 words) from param_3 to a
 *   location calculated as param_1 + param_2 * 0x38 + 0x38. It uses a loop that decrements
 *   a counter from 0x38 to 0, copying one word per iteration. No callees are involved, and
 *   the specific data being copied is not identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_14_word_block(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x38;
  do {
    iVar1 = iVar1 + -4;
    *(uint32_t *)(iVar1 + param_1 + 0x38 + param_2 * 0x38) = *(uint32_t *)(iVar1 + param_3);
  } while (iVar1 != 0);
  return;
}
