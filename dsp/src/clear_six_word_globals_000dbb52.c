/* @k10d clear_six_word_globals_000dbb52 @ 0x000dbb52
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets six 32-bit globals at 0x0003c850-0x0003c898 to zero.
 * summary:
 *   The function writes zero to six consecutive 32-bit data words: 0x0003c850, 0x0003c854,
 *   0x0003c858, 0x0003c85c, 0x0003c894, and 0x0003c898. It has no arguments, no return
 *   value, and no callees. The role of these globals is not determinable from the
 *   pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_six_word_globals_000dbb52(void)

{
  _DAT_0003c850 = 0;
  _DAT_0003c858 = 0;
  _DAT_0003c854 = 0;
  _DAT_0003c85c = 0;
  _DAT_0003c894 = 0;
  _DAT_0003c898 = 0;
  return;
}
