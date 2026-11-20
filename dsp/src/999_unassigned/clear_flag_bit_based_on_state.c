/* @k10d clear_flag_bit_based_on_state @ 0x000f62cc
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Clears bit 0 of DAT_0003c4bb or bit 1 of DAT_0003c4b8 depending on bit 0 of
 *   DAT_0003f327, gated by DAT_0003c440==6 and bit 1 of DAT_0003c028 being clear.
 * summary:
 *   Checks three global conditions: DAT_0003c440 equals 6, bit 1 of DAT_0003c028 is 0, and
 *   then branches on bit 0 of DAT_0003f327. If that bit is 0, it clears bit 0 of
 *   DAT_0003c4bb; otherwise it clears bit 1 of DAT_0003c4b8. No callees are invoked and no
 *   other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void clear_flag_bit_based_on_state(void)

{
  if ((DAT_0003c440 == '\x06') && ((DAT_0003c028 & 2) == 0)) {
    if ((DAT_0003f327 & 1) == 0) {
      DAT_0003c4bb = DAT_0003c4bb & 0xfe;
    }
    else {
      DAT_0003c4b8 = DAT_0003c4b8 & 0xfd;
    }
  }
  return;
}
