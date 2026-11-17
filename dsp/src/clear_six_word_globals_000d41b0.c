/* @k10d clear_six_word_globals_000d41b0 @ 0x000d41b0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Zeroes six consecutive 16-bit/32-bit global variables at 0x3cc80-0x3cc91.
 * summary:
 *   The function writes zero to _DAT_0003cc80, _DAT_0003cc82, _DAT_0003cc84, _DAT_0003cc86,
 *   DAT_0003cc90, and DAT_0003cc91. It has no arguments, no return value, and no callees.
 *   The role of these specific globals is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_six_word_globals_000d41b0(void)

{
  _DAT_0003cc80 = 0;
  _DAT_0003cc82 = 0;
  _DAT_0003cc84 = 0;
  _DAT_0003cc86 = 0;
  DAT_0003cc90 = 0;
  DAT_0003cc91 = 0;
  return;
}
