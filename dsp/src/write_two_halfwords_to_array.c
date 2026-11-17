/* @k10d write_two_halfwords_to_array @ 0x000f2594
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes two 16-bit constants from DAT_0003c810 into an array indexed by param_1.
 * summary:
 *   The function stores the 16-bit value at DAT_0003c810 to offset 0x3dc00 and the value at
 *   DAT_0003c812 to offset 0x3e000, both relative to a base address computed as param_1 *
 *   2. No other operations or side effects are present. The role of the target memory
 *   region and the constants is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void write_two_halfwords_to_array(int param_1)

{
  *(uint16_t *)(param_1 * 2 + 0x3dc00) = _DAT_0003c810;
  *(uint16_t *)(param_1 * 2 + 0x3e000) = _DAT_0003c812;
  return;
}
