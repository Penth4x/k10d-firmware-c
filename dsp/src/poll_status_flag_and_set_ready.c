/* @k10d poll_status_flag_and_set_ready @ 0x000e1a8e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status byte until bit 2 is set or a timeout flag is raised, then sets a ready
 *   flag.
 * summary:
 *   Checks if DAT_0003c122 is zero; if so, sets bit 3 of bRam00000000, calls
 *   set_two_byte_state_pair_000d5828, and enters a polling loop waiting for bit 2 of
 *   DAT_00000057 to be set or bit 0 of bRam00000000 to change. If the status bit is set, it
 *   updates DAT_0003c122 to 4. Returns the value of DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char poll_status_flag_and_set_ready(void)

{
  if (DAT_0003c122 == '\0') {
    bRam00000000 = bRam00000000 | 8;
    set_two_byte_state_pair_000d5828();
    do {
      if ((bRam00000000 & 1) != 0) break;
    } while ((DAT_00000057 & 4) == 0);
    do {
      if ((bRam00000000 & 1) == 0) break;
    } while ((DAT_00000057 & 4) == 0);
    do {
      if ((bRam00000000 & 1) != 0) break;
    } while ((DAT_00000057 & 4) == 0);
    if ((DAT_00000057 & 4) != 0) {
      DAT_0003c122 = '\x04';
    }
  }
  return DAT_0003c122;
}
