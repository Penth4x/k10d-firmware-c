/* @k10d update_state_flags_and_copy_params @ 0x000d4910
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates a status byte based on a counter match and copies several parameter values from
 *   indexed tables into global state variables.
 * summary:
 *   The function checks if DAT_0003cc6f equals param_1 + 1; if true, it clears bit 6 of
 *   DAT_0003cbef, otherwise it sets bit 6. It then updates the lower nibble of DAT_0003cbef
 *   using a lookup table at 0x000fb334. It stores param_1 + 1 into DAT_0003cc6e and copies
 *   multiple 1-byte and 2-byte values from arrays indexed by param_1 into various global
 *   variables (DAT_0003cbf0, DAT_0003cc30, DAT_0003cb80, DAT_0003cbd4, DAT_0003cb9b).
 *   Finally, it calls accumulate_shifted_samples.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_copy_params(int param_1)

{
  if ((uint)DAT_0003cc6f == param_1 + 1U) {
    DAT_0003cbef = DAT_0003cbef & 0xbf;
  }
  else {
    DAT_0003cbef = DAT_0003cbef | 0x40;
  }
  DAT_0003cbef = DAT_0003cbef & 0xf0 | (&DAT_000fb334)[param_1] & 0xf;
  DAT_0003cc6e = (uint8_t)(param_1 + 1U);
  _DAT_0003cbf0 = *(uint16_t *)(param_1 * 2 + 0x3cbf2);
  _DAT_0003cc30 = *(uint16_t *)(param_1 * 2 + 0x3cc32);
  DAT_0003cb80 = *(uint8_t *)(param_1 + 0x3cb81);
  DAT_0003cbd4 = *(uint8_t *)(param_1 + 0x3cbd5);
  DAT_0003cb9b = *(uint8_t *)(param_1 + 0x3cb9c);
  accumulate_shifted_samples();
  return;
}
