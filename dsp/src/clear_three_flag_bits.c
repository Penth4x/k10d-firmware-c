/* @k10d clear_three_flag_bits @ 0x000eaf66
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears specific bits in three global flag variables using bitwise AND masks.
 * summary:
 *   The function performs three independent bitwise AND operations on global variables
 *   DAT_0003c1eb, DAT_00000401, and DAT_0003c588. It clears bit 7 of DAT_0003c1eb, bit 1 of
 *   DAT_00000401, and bit 2 of DAT_0003c588. No other side effects or function calls are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_three_flag_bits(void)

{
  DAT_0003c1eb = DAT_0003c1eb & 0x7f;
  DAT_00000401 = DAT_00000401 & 0xfd;
  DAT_0003c588 = DAT_0003c588 & 0xfb;
  return;
}
