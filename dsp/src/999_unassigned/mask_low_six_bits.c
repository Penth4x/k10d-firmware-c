/* @k10d mask_low_six_bits @ 0x000c45b4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears the upper 26 bits of the global variable at 0x0003c181, retaining only the low 6
 *   bits.
 * summary:
 *   The function performs a bitwise AND operation on the global variable DAT_0003c181 with
 *   the mask 0x3f. This effectively truncates the value to its lowest 6 bits. No other side
 *   effects or function calls are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void mask_low_six_bits(void)

{
  DAT_0003c181 = DAT_0003c181 & 0x3f;
  return;
}
