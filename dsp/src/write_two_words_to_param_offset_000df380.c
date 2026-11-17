/* @k10d write_two_words_to_param_offset_000df380 @ 0x000df380
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes two 16-bit constants to memory at offsets 0x3d000 and 0x3d800 from a
 *   param_1-scaled base.
 * summary:
 *   The function takes param_1, doubles it, and uses it as a base address. It stores the
 *   16-bit value from _DAT_0003c810 at base + 0x3d000 and the 16-bit value from
 *   _DAT_0003c812 at base + 0x3d800. No other operations or side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_words_to_param_offset_000df380(int param_1)

{
  *(uint16_t *)(param_1 * 2 + 0x3d000) = _DAT_0003c810;
  *(uint16_t *)(param_1 * 2 + 0x3d800) = _DAT_0003c812;
  return;
}
