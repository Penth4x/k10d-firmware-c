/* @k10d xor_with_low_nibble_shifted @ 0x000cdce6
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns param_1 XORed with the low nibble of DAT_0003ce02 shifted right by 2 bits.
 * summary:
 *   A one-line arithmetic helper that combines its input with a 2-bit value derived from
 *   the low nibble of the global DAT_0003ce02. No memory writes, no branches, no callees.
 *   The role of DAT_0003ce02 is not revealed by this function alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint xor_with_low_nibble_shifted(uint param_1)

{
  return param_1 ^ (DAT_0003ce02 & 0xf) >> 2;
}
