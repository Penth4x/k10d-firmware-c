/* @k10d poll_flag_and_delay @ 0x000ebac6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Loops checking bit 2 of DAT_000000cf and DAT_00000057, clearing flags and calling a
 *   delay function.
 * summary:
 *   The function enters an infinite loop that first checks if bit 2 of DAT_000000cf is set.
 *   If so, it either clears bit 1 of DAT_00000002 or decrements _DAT_0003c1e0, then clears
 *   bit 2 of DAT_000000cf. It then checks if bit 2 of DAT_00000057 is set or bit 7 of
 *   DAT_00000001 is clear to break the loop. If specific conditions on DAT_0003c396,
 *   DAT_0003f3e1, and DAT_0000004f are met, it clears bit 2 of DAT_0000004f and calls
 *   update_status_flags_and_counters_000de274 with argument 1000. Finally, it clears
 *   DAT_00000056 and bit 2 of DAT_00000057.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_flag_and_delay(void)

{
  while( true ) {
    if ((DAT_000000cf & 4) != 0) {
      if ((_DAT_0003c1e0 == 0) && ((DAT_0003c4de & 1) == 0)) {
        DAT_00000002 = DAT_00000002 & 0xfd;
      }
      else {
        _DAT_0003c1e0 = _DAT_0003c1e0 + -1;
      }
      DAT_000000cf = DAT_000000cf & 0xfb;
    }
    if (((DAT_00000057 & 4) != 0) || ((DAT_00000001 & 0x80) == 0)) break;
    if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0000004f & 4) != 0))
    {
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
    }
  }
  DAT_00000056 = 0;
  DAT_00000057 = DAT_00000057 & 0xfb;
  return;
}
