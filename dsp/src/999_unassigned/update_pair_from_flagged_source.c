/* @k10d update_pair_from_flagged_source @ 0x000c3afa
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Selects a source pair based on flag bits, computes or defaults a value, and
 *   conditionally stores a combined result.
 * summary:
 *   The function branches on bit 5 of DAT_0003c4d0 to choose between two source pairs
 *   (DAT_0003c47d/0x480 or DAT_0003c496/0x497). It calls clamp_value_to_max on the first
 *   element of the chosen pair unless bit 3 of DAT_0003c4df is set, in which case it uses
 *   0x80. The result is stored in DAT_0003c564, and the second element in DAT_0003c565. It
 *   then conditionally calls dispatch_state_transition_000c3bd4 or update_range_clamp_state
 *   based on other flag bits, and may store the sum of the two result bytes into
 *   DAT_0003c58e.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_pair_from_flagged_source(void)

{
  uint16_t uVar1;
  
  if ((DAT_0003c4d0 & 0x20) == 0) {
    if ((DAT_0003c4df & 8) == 0) {
      DAT_0003c564 = clamp_value_to_max(DAT_0003c47d);
    }
    else {
      DAT_0003c564 = 0x80;
    }
    DAT_0003c565 = DAT_0003c480;
  }
  else {
    if ((DAT_0003c4df & 8) == 0) {
      DAT_0003c564 = clamp_value_to_max(DAT_0003c496);
    }
    else {
      DAT_0003c564 = 0x80;
    }
    DAT_0003c565 = DAT_0003c497;
  }
  uVar1 = _DAT_0003c562;
  if ((DAT_0003c4d2 & 0x10) == 0) {
    _DAT_0003c562 = uVar1;
    if ((DAT_0003c4d3 & 4) != 0) {
      _DAT_0003c562 = _DAT_0003c58e;
      update_range_clamp_state();
      _DAT_0003c562 = uVar1;
    }
  }
  else {
    dispatch_state_transition_000c3bd4();
    if ((DAT_0003c4d3 & 4) != 0) {
      _DAT_0003c58e = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
    }
    DAT_0003c4d2 = DAT_0003c4d2 & 0xef;
  }
  return;
}
