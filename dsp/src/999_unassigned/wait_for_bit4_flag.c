/* @k10d wait_for_bit4_flag @ 0x000d5716
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Sets a status byte and polls a flag register until bit 4 is set.
 * summary:
 *   Writes 0xf9 to DAT_00000050. If DAT_00000484 & 3 equals 2, it enters an infinite loop
 *   after waiting for bit 4 of DAT_00000057. Otherwise, it writes 0x13 to DAT_00000056 and
 *   waits for bit 4 of DAT_00000057 to be set before returning. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000d5772) */
/* WARNING: Removing unreachable block (ram,0x000d577a) */
/* WARNING: Removing unreachable block (ram,0x000d5784) */

void wait_for_bit4_flag(void)

{
  DAT_00000050 = 0xf9;
  if ((DAT_00000484 & 3) == 2) {
    do {
    } while ((DAT_00000057 & 4) == 0);
    __halt();
  }
  do {
    DAT_00000056 = 0x13;
  } while ((DAT_00000057 & 4) == 0);
  return;
}
