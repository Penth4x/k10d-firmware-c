/* @k10d forward_byte_and_word_to_helper @ 0x104674c6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * unit: 144_table_bitmask_check (unit names are model-proposed)
 * purpose:
 *   Passes a byte and a word from fixed memory locations to a helper function.
 * summary:
 *   The function reads the low byte of uRam105a7f70 and the full word at uRam105a7f74. It
 *   forwards these two values along with param_1 to the callee check_bit_in_indexed_byte.
 *   The specific role of the data or the helper is not determinable from the provided
 *   pseudocode and unknown callee name.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void forward_byte_and_word_to_helper(uint32_t param_1)

{
  check_bit_in_indexed_byte(param_1,uRam105a7f70 & 0xff,uRam105a7f74);
  return;
}
