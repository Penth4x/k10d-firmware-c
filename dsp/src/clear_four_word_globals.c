/* @k10d clear_four_word_globals @ 0x000d42ba
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Sets four consecutive 16-bit global variables to zero.
 * summary:
 *   The function writes zero to four adjacent 16-bit data locations (_DAT_0003cee8 through
 *   _DAT_0003ceee). It has no parameters, no return value, and no callees. The specific
 *   role of these globals is not determinable from the provided pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_four_word_globals(void)

{
  _DAT_0003cee8 = 0;
  _DAT_0003ceea = 0;
  _DAT_0003ceec = 0;
  _DAT_0003ceee = 0;
  return;
}
