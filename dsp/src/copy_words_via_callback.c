/* @k10d copy_words_via_callback @ 0x000e9fa6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Copies param_3 16-bit words from a source pointer into a destination array, fetching
 *   each word through a helper function.
 * summary:
 *   Loops param_3 times, calling FUN_000e9fd2 with the current source pointer (param_1) to
 *   obtain a 16-bit value, stores it into the destination (param_2), and increments both
 *   pointers. The source pointer is masked to 16 bits each iteration, suggesting a
 *   64K-bounded address space. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void copy_words_via_callback(uint param_1,uint16_t *param_2,uint param_3)

{
  uint16_t uVar1;
  
  for (; param_3 != 0; param_3 = param_3 - 1 & 0xffff) {
    uVar1 = FUN_000e9fd2(param_1);
    *param_2 = uVar1;
    param_1 = param_1 + 1 & 0xffff;
    param_2 = param_2 + 1;
  }
  return;
}
