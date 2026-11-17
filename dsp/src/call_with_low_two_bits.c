/* @k10d call_with_low_two_bits @ 0x000f7044
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Passes the low two bits of DAT_0003c12e to xor_with_low_nibble_shifted.
 * summary:
 *   Reads the global DAT_0003c12e, masks it with 3 to extract the low two bits, and passes
 *   that value as the sole argument to xor_with_low_nibble_shifted. No other side effects
 *   are visible in the pseudocode. The role of DAT_0003c12e and xor_with_low_nibble_shifted
 *   is unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t call_with_low_two_bits(void)

{
  uint32_t uVar1;
  
  uVar1 = xor_with_low_nibble_shifted(DAT_0003c12e & 3);
  return uVar1;
}
