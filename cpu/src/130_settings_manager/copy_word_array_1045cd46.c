/* @k10d copy_word_array_1045cd46 @ 0x1045cd46
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * unit: 130_settings_manager (unit names are model-proposed)
 * purpose:
 *   Copies param_3 32-bit words from param_4 into param_2.
 * summary:
 *   A simple loop that performs a word-wise memcpy of param_3 elements from source pointer
 *   param_4 to destination pointer param_1/param_2. It has no callees and no side effects
 *   beyond the memory writes. param_1 is unused in the body.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_word_array_1045cd46(void *ctx,uint32_t *dest,int count,uint32_t *src)

{
  /* Fill 'count' consecutive 32-bit slots at dest with the word at *src.
   * The source address is never advanced (asm: only r5 += 4, r7 unchanged). */
  for (; count != 0; count = count + -1) {
    *dest = *src;
    dest = dest + 1;
  }
  return;
}
