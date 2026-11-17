/* @k10d toggle_bit7_and_count @ 0x000c69dc
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Toggles bit 7 of DAT_0003c4d5 based on bit 7 of DAT_0003c000 and increments a counter
 *   if conditions are met.
 * summary:
 *   The function checks bit 7 of DAT_0003c000. If clear, it sets bit 7 of DAT_0003c4d5 if
 *   it was clear, and if DAT_0003c491 bit 0 is set, it increments DAT_0003c4a2, resetting
 *   it to 0 if it exceeds 3. If bit 7 of DAT_0003c000 is set, it clears bit 7 of
 *   DAT_0003c4d5. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void toggle_bit7_and_count(void)

{
  if ((DAT_0003c000 & 0x80) == 0) {
    if ((((DAT_0003c4d5 & 0x80) == 0) &&
        (DAT_0003c4d5 = DAT_0003c4d5 | 0x80, (DAT_0003c491 & 1) != 0)) &&
       (DAT_0003c4a2 = DAT_0003c4a2 + 1, 3 < DAT_0003c4a2)) {
      DAT_0003c4a2 = 0;
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0x7f;
  }
  return;
}
