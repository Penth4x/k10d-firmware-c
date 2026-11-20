/* @k10d dispatch_on_state_flags_000ec0d6 @ 0x000ec0d6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a state byte and conditionally calls one of three sub-functions based on flag
 *   bits.
 * summary:
 *   The function first checks if DAT_0003c46d is 1, 3, or 9. If so, it calls
 *   copy_global_and_call_helper. It then branches on bit 0 of DAT_0003c036 and various bits
 *   of DAT_0003c58b to either call execute_gated_state_sequence or FUN_000ec14a. The
 *   specific roles of the DAT globals and callees are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_flags_000ec0d6(void)

{
  if (((DAT_0003c46d == '\x01') || (DAT_0003c46d == '\x03')) || (DAT_0003c46d == '\t')) {
    copy_global_and_call_helper();
    if ((DAT_0003c036 & 1) == 0) {
      if ((DAT_0003c58b & 0x40) == 0) {
        if ((((DAT_0003c58b & 2) != 0) && (DAT_0003c564 < 0x81)) && ((DAT_0003c58b & 8) == 0)) {
          execute_gated_state_sequence();
        }
      }
      else if ((((DAT_0003c589 & 1) == 0) || ((DAT_0003c184 & 0x80) == 0)) ||
              ((DAT_0003c1ed & 0x10) == 0)) {
        FUN_000ec14a();
      }
    }
    else if (((DAT_0003c58b & 2) != 0) && ((DAT_0003c58b & 8) == 0)) {
      execute_gated_state_sequence();
    }
  }
  return;
}
