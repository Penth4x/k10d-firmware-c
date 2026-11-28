/* @k10d clamp_difference_to_two_words @ 0x1045c49c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 129_settings_pair_manager (unit names are model-proposed)
 * purpose:
 *   Computes the non-negative difference between two 2-word values and stores the result
 *   into a destination buffer.
 * summary:
 *   The function calculates the difference between the 32-bit values pointed to by param_2
 *   and param_3 for both the low and high words, clamping any negative result to zero. It
 *   calls alloc_and_zero_two_words_1045c3bc and free_heap_if_flagged_1045c402, which likely
 *   perform initialization or normalization on the intermediate stack buffer before the
 *   final 8-byte result is copied to param_1. The behavior is a standard unsigned
 *   subtraction with saturation, commonly used for range calculations or offset
 *   adjustments.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Type propagation algorithm not settling */

void clamp_difference_to_two_words(void *dest,uint *src_hi,uint *src_lo)

{
  int offset;
  int counter;
  int result_buf [3];

  alloc_and_zero_two_words_1045c3bc(result_buf + 1);
  if (*src_lo < *src_hi) {
    result_buf[1] = *src_hi - *src_lo;
  }
  else {
    result_buf[1] = 0;
  }
  if (src_lo[1] < src_hi[1]) {
    result_buf[2] = src_hi[1] - src_lo[1];
  }
  else {
    result_buf[2] = 0;
  }
  counter = 8;
  do {
    offset = counter + -4;
    *(uint32_t *)(&stack0xffffffe0 + counter) = *(uint32_t *)((int)result_buf + counter);
    counter = offset;
  } while (offset != 0);
  free_heap_if_flagged_1045c402(result_buf + 1,2);
  counter = 8;
  do {
    offset = counter + -4;
    *(uint32_t *)(offset + (int)dest) = *(uint32_t *)(&stack0xffffffe0 + counter);
    counter = offset;
  } while (offset != 0);
  return;
}
