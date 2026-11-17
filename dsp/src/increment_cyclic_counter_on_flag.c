/* @k10d increment_cyclic_counter_on_flag @ 0x000c7534
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Increments a 3-state counter in DAT_0003c49b when DAT_0003c035 bit 3 is clear and
 *   DAT_0003c4d5 bit 0 is set, otherwise clears that bit.
 * summary:
 *   The function reads DAT_0003c49b as a counter. If bit 3 of DAT_0003c035 is clear, it
 *   checks bit 0 of DAT_0003c4d5; if clear, it sets bit 0 and increments the counter,
 *   wrapping to 0 if it exceeds 2. If bit 3 of DAT_0003c035 is set, it clears bit 0 of
 *   DAT_0003c4d5. The updated counter is stored back to DAT_0003c49b. No callees are
 *   invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void increment_cyclic_counter_on_flag(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_0003c49b;
  if ((DAT_0003c035 & 8) == 0) {
    if ((DAT_0003c4d5 & 1) == 0) {
      DAT_0003c4d5 = DAT_0003c4d5 | 1;
      uVar1 = uVar1 + 1;
      if (2 < uVar1) {
        uVar1 = 0;
      }
    }
  }
  else {
    DAT_0003c4d5 = DAT_0003c4d5 & 0xfe;
  }
  DAT_0003c49b = (char)uVar1;
  return;
}
