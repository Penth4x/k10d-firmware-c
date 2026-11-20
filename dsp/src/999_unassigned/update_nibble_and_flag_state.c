/* @k10d update_nibble_and_flag_state @ 0x000d1a06
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Selects a 4-bit value from DAT_0003f4a9 based on bit 5 of DAT_0003c101 and bits 0-2 of
 *   DAT_0003c102, storing it in DAT_0003ce2e, and clears bit 7 of DAT_0003ce05 or sets
 *   DAT_0003ce36 to 0 based on bit 2 of DAT_0003ce06.
 * summary:
 *   The function performs two independent state updates. First, it checks if bit 5 of
 *   DAT_0003c101 is clear and bits 0-2 of DAT_0003c102 are not all set; if so, it stores
 *   the lower nibble of DAT_0003f4a9 into DAT_0003ce2e, otherwise it stores the upper
 *   nibble. Second, it checks bit 2 of DAT_0003ce06; if clear, it clears bit 7 of
 *   DAT_0003ce05, otherwise it sets DAT_0003ce36 to 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_nibble_and_flag_state(void)

{
  if (((DAT_0003c101 & 0x20) == 0) && ((DAT_0003c102 & 7) != 7)) {
    DAT_0003ce2e = DAT_0003f4a9 & 0xf;
  }
  else {
    DAT_0003ce2e = DAT_0003f4a9 >> 4;
  }
  if ((DAT_0003ce06 & 4) == 0) {
    DAT_0003ce05 = DAT_0003ce05 & 0x7f;
  }
  else {
    _DAT_0003ce36 = 0;
  }
  return;
}
