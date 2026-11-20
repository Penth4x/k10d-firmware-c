/* @k10d branch_on_flag_bit7 @ 0x000f8000
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Dispatches to one of two subroutines based on bit 7 of a global flag byte.
 * summary:
 *   Reads global DAT_00000002 and tests bit 7 (0x80). If clear, calls
 *   poll_status_and_dispatch_000f8014; otherwise calls poll_status_and_dispatch_000f80d6.
 *   No other side effects are visible in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void branch_on_flag_bit7(void)

{
  if ((DAT_00000002 & 0x80) == 0) {
    poll_status_and_dispatch_000f8014();
  }
  else {
    poll_status_and_dispatch_000f80d6();
  }
  return;
}
