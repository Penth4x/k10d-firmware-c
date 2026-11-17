/* @k10d wait_for_bit2_of_dat_00000057 @ 0x000d571a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Writes constants to DAT_00000050 and DAT_00000056, then busy-waits until bit 2 of
 *   DAT_00000057 is set.
 * summary:
 *   The function sets DAT_00000050 to 0x7c. If DAT_00000484 & 3 equals 2, it enters an
 *   infinite loop after waiting for bit 2 of DAT_00000057. Otherwise, it sets DAT_00000056
 *   to 0x13 and waits for bit 2 of DAT_00000057 to be set before returning. No callees are
 *   present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Removing unreachable block (ram,0x000d5772) */
/* WARNING: Removing unreachable block (ram,0x000d577a) */
/* WARNING: Removing unreachable block (ram,0x000d5784) */

void wait_for_bit2_of_dat_00000057(void)

{
  DAT_00000050 = 0x7c;
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
