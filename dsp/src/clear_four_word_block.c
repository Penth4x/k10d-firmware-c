/* @k10d clear_four_word_block @ 0x000d4242
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes zero to four consecutive 16-bit words in a data segment.
 * summary:
 *   The function sets four adjacent 16-bit globals (_DAT_0003cd70 through _DAT_0003cd76) to
 *   zero. It has no arguments, no return value, and no callees. The role of the data block
 *   is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void clear_four_word_block(void)

{
  _DAT_0003cd70 = 0;
  _DAT_0003cd72 = 0;
  _DAT_0003cd74 = 0;
  _DAT_0003cd76 = 0;
  return;
}
