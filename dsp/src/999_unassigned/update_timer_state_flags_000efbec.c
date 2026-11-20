/* @k10d update_timer_state_flags_000efbec @ 0x000efbec
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates a counter and state flags based on a condition bit in DAT_0003c003.
 * summary:
 *   Calls write_nibble_to_ram_region with argument 0x13. Checks bit 1 of DAT_0003c1e7 and
 *   bit 7 of DAT_0003c003 to determine whether to increment DAT_0003c1f4, clear or set bit
 *   1 of DAT_0003c1e7, or decrement DAT_0003c1f5. If DAT_0003c1f5 is not decremented, it is
 *   reset to 4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_timer_state_flags_000efbec(void)

{
  bool bVar1;
  
  bVar1 = false;
  write_nibble_to_ram_region(0x13);
  if ((DAT_0003c1e7 & 2) == 0) {
    if ((DAT_0003c003 & 0x80) != 0) {
      if (DAT_0003c1f5 == '\0') {
        DAT_0003c1f4 = DAT_0003c1f4 + '\x01';
        DAT_0003c1e7 = DAT_0003c1e7 | 2;
      }
      else {
        DAT_0003c1f5 = DAT_0003c1f5 + -1;
        bVar1 = true;
      }
    }
  }
  else if ((DAT_0003c003 & 0x80) == 0) {
    DAT_0003c1f4 = DAT_0003c1f4 + '\x01';
    DAT_0003c1e7 = DAT_0003c1e7 & 0xfd;
  }
  if (!bVar1) {
    DAT_0003c1f5 = '\x04';
  }
  return;
}
