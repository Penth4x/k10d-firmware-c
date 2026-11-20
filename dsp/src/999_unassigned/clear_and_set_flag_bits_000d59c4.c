/* @k10d clear_and_set_flag_bits_000d59c4 @ 0x000d59c4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Clears and sets specific bits in multiple global byte variables and zeroes a small
 *   block of memory.
 * summary:
 *   The function performs a series of bitwise AND/OR operations on various DAT_ globals to
 *   clear or set individual bits. It also initializes a contiguous block of 8 bytes at
 *   0x0003c330 to zero. No callees are invoked, and the specific roles of the modified
 *   globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_and_set_flag_bits_000d59c4(void)

{
  DAT_00000402 = DAT_00000402 & 0x7f;
  DAT_00000003 = DAT_00000003 & 0xfe | 2;
  DAT_00000403 = DAT_00000403 | 3;
  DAT_00000423 = 0;
  DAT_000000c2 = 0x10;
  DAT_000000c0 = 0;
  DAT_000000c3 = 0xb2;
  DAT_000000c7 = 0;
  DAT_00000451 = 0x1f;
  DAT_00000452 = 0x1f;
  DAT_0000000a = DAT_0000000a & 0xbf;
  DAT_0000040a = DAT_0000040a | 0x40;
  DAT_0000042a = DAT_0000042a & 0xbf;
  DAT_00000405 = DAT_00000405 & 0xfe;
  DAT_000000d3 = DAT_000000d3 & 0xfc | 2;
  DAT_00000455 = 0x10;
  _DAT_0003c330 = 0;
  _DAT_0003c332 = 0;
  _DAT_0003c334 = 0;
  _DAT_0003c336 = 0;
  _DAT_0003c338 = 0;
  _DAT_0003c33a = 0;
  _DAT_0003c33c = 0;
  _DAT_0003c33e = 0;
  DAT_0003c321 = 0;
  DAT_000000d0 = DAT_000000d0 & 0xfe;
  DAT_000000d1 = DAT_000000d1 | 1;
  return;
}
