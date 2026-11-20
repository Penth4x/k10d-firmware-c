/* @k10d write_two_words_to_param_offset_000f22a4 @ 0x000f22a4
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Writes two 16-bit constants to memory at param_1*2+0x3d000 and param_1*2+0x3d800.
 * summary:
 *   The function takes a single integer parameter and uses it as an index to compute two
 *   memory addresses separated by 0x800 bytes. It stores the 16-bit values from
 *   _DAT_0003c810 and _DAT_0003c812 at these computed locations. No other operations or
 *   side effects are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_words_to_param_offset_000f22a4(int param_1)

{
  *(uint16_t *)(param_1 * 2 + 0x3d000) = _DAT_0003c810;
  *(uint16_t *)(param_1 * 2 + 0x3d800) = _DAT_0003c812;
  return;
}
