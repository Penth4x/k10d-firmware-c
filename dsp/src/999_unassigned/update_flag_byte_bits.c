/* @k10d update_flag_byte_bits @ 0x000f3c90
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 4 of DAT_0003c4d3 and sets it if DAT_0003c3c5 is non-zero.
 * summary:
 *   The function performs a bitwise AND with 0xef on DAT_0003c4d3 to clear bit 4 (0x10). It
 *   then checks if DAT_0003c3c5 is non-zero; if so, it sets bit 4 of DAT_0003c4d3. No other
 *   side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_byte_bits(void)

{
  DAT_0003c4d3 = DAT_0003c4d3 & 0xef;
  if (DAT_0003c3c5 != '\0') {
    DAT_0003c4d3 = DAT_0003c4d3 | 0x10;
  }
  return;
}
