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

void copy_word_array_1045cd46(void *param_1,uint32_t *param_2,int param_3,uint32_t *param_4)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_2 = *param_4;
    param_2 = param_2 + 1;
  }
  return;
}
