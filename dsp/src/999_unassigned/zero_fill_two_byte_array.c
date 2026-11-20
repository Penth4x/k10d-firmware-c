/* @k10d zero_fill_two_byte_array @ 0x000ce650
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes zero to a sequence of 16-bit memory locations for a given count.
 * summary:
 *   The function iterates param_1 times, writing 0 to the memory location pointed to by
 *   param_2 and incrementing the pointer by 2 bytes each iteration. It performs a simple
 *   memset-like operation for 16-bit elements. No other side effects or callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void zero_fill_two_byte_array(int param_1,uint16_t *param_2)

{
  do {
    *param_2 = 0;
    param_1 = param_1 + -1;
    param_2 = param_2 + 1;
  } while (param_1 != 0);
  return;
}
