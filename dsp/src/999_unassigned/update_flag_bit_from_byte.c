/* @k10d update_flag_bit_from_byte @ 0x000f3cb2
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 7 of DAT_0003c4d3 and sets it if DAT_0003c3c6 is non-zero.
 * summary:
 *   The function performs a bitwise operation on the global variable DAT_0003c4d3. It first
 *   masks out the most significant bit (bit 7) using 0x7f. It then checks if the global
 *   variable DAT_0003c3c6 is non-zero; if so, it sets bit 7 of DAT_0003c4d3 by ORing with
 *   0x80. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_bit_from_byte(void)

{
  DAT_0003c4d3 = DAT_0003c4d3 & 0x7f;
  if (DAT_0003c3c6 != '\0') {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x80;
  }
  return;
}
