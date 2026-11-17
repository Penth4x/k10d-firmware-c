/* @k10d write_three_words_to_buffer_000df0f8 @ 0x000df0f8
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes three 16-bit constants from a data table into a buffer at offsets 0x3d000,
 *   0x3d400, and 0x3d800.
 * summary:
 *   The function takes a base pointer (param_1), doubles it, and writes three specific
 *   16-bit values (_DAT_0003c814, _DAT_0003c816, _DAT_0003c818) to fixed offsets within the
 *   resulting address space. No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_three_words_to_buffer_000df0f8(int param_1)

{
  param_1 = param_1 * 2;
  *(uint16_t *)(param_1 + 0x3d000) = _DAT_0003c814;
  *(uint16_t *)(param_1 + 0x3d400) = _DAT_0003c816;
  *(uint16_t *)(param_1 + 0x3d800) = _DAT_0003c818;
  return;
}
