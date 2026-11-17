/* @k10d update_state_flag_based_on_mode_000f4694 @ 0x000f4694
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets DAT_0003c440 to 4 or 0 based on the values of DAT_0003c3bd and DAT_0003c4d2.
 * summary:
 *   Checks if DAT_0003c3bd is 0 or 4. If so, it checks bit 1 of DAT_0003c4d2. If bit 1 is
 *   clear, it further checks bits in DAT_0003c4df against the value of DAT_0003c3bd. If the
 *   conditions match, it sets DAT_0003c440 to 4 and calls dispatch_based_on_flag, storing
 *   the result in DAT_0003c480 and DAT_0003c481. If bit 1 of DAT_0003c4d2 is set, it sets
 *   DAT_0003c440 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flag_based_on_mode_000f4694(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c3bd == '\0') || (DAT_0003c3bd == '\x04')) {
    if ((DAT_0003c4d2 & 2) == 0) {
      if ((((DAT_0003c4df & 4) != 0) && (DAT_0003c3bd == '\0')) ||
         (((DAT_0003c4df & 2) != 0 && (DAT_0003c3bd == '\x04')))) {
        DAT_0003c440 = 4;
        uVar1 = dispatch_based_on_flag((uint)DAT_0003c565);
        DAT_0003c480 = (uint8_t)uVar1;
        DAT_0003c481 = DAT_0003c480;
      }
    }
    else {
      DAT_0003c440 = 0;
    }
  }
  return;
}
