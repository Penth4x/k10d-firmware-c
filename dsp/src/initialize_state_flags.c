/* @k10d initialize_state_flags @ 0x000ec628
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets several global variables to specific initial values and conditionally adjusts one
 *   based on a flag.
 * summary:
 *   The function writes fixed values to DAT_000000d4, DAT_000000ee, DAT_000000e6,
 *   DAT_0003c206, and DAT_000000d7. It checks if bit 3 of DAT_0003c1ed is set and
 *   DAT_0003c447 equals 4; if so, it sets DAT_0003c206 to 0x14 and clears bit 3 of
 *   DAT_0003c1ed. No MMIO or complex logic is present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_state_flags(void)

{
  DAT_000000d4 = 0;
  DAT_000000ee = 1;
  DAT_000000e6 = 100;
  DAT_0003c206 = 10;
  if (((DAT_0003c1ed & 8) != 0) && (DAT_0003c447 == '\x04')) {
    DAT_0003c206 = 0x14;
    DAT_0003c1ed = DAT_0003c1ed & 0xf7;
  }
  DAT_000000d7 = 3;
  return;
}
