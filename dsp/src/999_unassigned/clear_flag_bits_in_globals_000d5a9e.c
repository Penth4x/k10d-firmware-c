/* @k10d clear_flag_bits_in_globals_000d5a9e @ 0x000d5a9e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears specific bits in several global byte variables and sets others to fixed values.
 * summary:
 *   The function performs a series of bitwise AND and OR operations on global variables at
 *   low addresses (DAT_00000402, DAT_00000003, etc.). It clears bit 7 of DAT_00000402,
 *   clears the lower two bits of DAT_00000003, sets the lower two bits of DAT_00000403, and
 *   sets bit 6 of DAT_0000040a. It also zeroes DAT_00000423 and sets DAT_000000c2 to 0x10.
 *   No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bits_in_globals_000d5a9e(void)

{
  DAT_00000402 = DAT_00000402 & 0x7f;
  DAT_00000003 = DAT_00000003 & 0xfc;
  DAT_00000403 = DAT_00000403 | 3;
  DAT_00000423 = 0;
  DAT_000000c2 = 0x10;
  DAT_000000c0 = 0;
  DAT_000000c3 = 0xb0;
  DAT_000000c7 = 0;
  DAT_0000000a = DAT_0000000a & 0xbf;
  DAT_0000040a = DAT_0000040a | 0x40;
  DAT_0000042a = DAT_0000042a & 0xbf;
  DAT_00000405 = DAT_00000405 & 0xfe;
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  return;
}
