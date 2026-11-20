/* @k10d clear_bit_flags_in_dat_block @ 0x000d5936
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears and sets specific bits in a series of DAT_0000xxxx global variables.
 * summary:
 *   The function performs a sequence of bitwise AND and OR operations on multiple global
 *   variables (DAT_00000402, DAT_00000003, etc.) to modify their bit patterns. It also
 *   assigns specific constant values to several other globals (e.g., DAT_00000423 = 0,
 *   DAT_000000c2 = 0x10). No callees are invoked, and the specific role of these globals is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_bit_flags_in_dat_block(void)

{
  DAT_00000402 = DAT_00000402 & 0x7f;
  DAT_00000003 = DAT_00000003 & 0xfc;
  DAT_00000403 = DAT_00000403 | 3;
  DAT_00000423 = 0;
  DAT_000000c2 = 0x10;
  DAT_000000c0 = 0;
  DAT_000000c3 = 0xb0;
  DAT_000000c7 = 0;
  DAT_00000451 = 0x1f;
  DAT_00000452 = 0x1f;
  DAT_0000000a = DAT_0000000a & 0xbf;
  DAT_0000040a = DAT_0000040a | 0x40;
  DAT_0000042a = DAT_0000042a & 0xbf;
  DAT_00000405 = DAT_00000405 & 0xfe;
  DAT_000000d1 = DAT_000000d1 & 0xfe;
  DAT_000000d3 = DAT_000000d3 & 0xfc | 2;
  DAT_00000455 = 0x10;
  DAT_0000014e = 0;
  return;
}
