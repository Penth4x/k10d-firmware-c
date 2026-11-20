/* @k10d shift_right_four_bits @ 0x000d651e
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns the input value shifted right by 4 bits.
 * summary:
 *   A one-line helper that takes param_1 and returns param_1 >> 4. No memory accesses, no
 *   callees, no side effects. The caller at 0x000d64ca uses the result, but the specific
 *   meaning of the shift (e.g. extracting a nibble) is not determinable from this function
 *   alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int shift_right_four_bits(int param_1)

{
  return param_1 >> 4;
}
