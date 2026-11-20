/* @k10d clear_tenth_global_words @ 0x000dbb84
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets ten specific global 32-bit words to zero.
 * summary:
 *   The function writes the value 0 to six consecutive globals starting at 0x0003c868 and
 *   three consecutive globals starting at 0x0003f570. It has no arguments, no return value,
 *   and no callees. The role of these specific globals is not determinable from the
 *   provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_tenth_global_words(void)

{
  _DAT_0003c868 = 0;
  _DAT_0003c86c = 0;
  _DAT_0003c870 = 0;
  _DAT_0003c874 = 0;
  _DAT_0003c878 = 0;
  _DAT_0003c87c = 0;
  _DAT_0003f570 = 0;
  _DAT_0003f574 = 0;
  _DAT_0003f578 = 0;
  return;
}
