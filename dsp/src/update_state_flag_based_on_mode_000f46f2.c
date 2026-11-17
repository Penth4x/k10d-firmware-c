/* @k10d update_state_flag_based_on_mode_000f46f2 @ 0x000f46f2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets DAT_0003c440 to 5 or 0 based on the values of DAT_0003c3bd and bit flags in
 *   DAT_0003c4d2 and DAT_0003c4df.
 * summary:
 *   The function checks if DAT_0003c3bd is 0 or 4. If so, it inspects bit 1 of
 *   DAT_0003c4d2. If that bit is clear, it further checks specific combinations of bits in
 *   DAT_0003c4df and the value of DAT_0003c3bd. If the conditions match, it sets
 *   DAT_0003c440 to 5 and calls dispatch_on_flag_zero_000f3f7a with DAT_0003c564 as an
 *   argument. If bit 1 of DAT_0003c4d2 is set, it sets DAT_0003c440 to 0. The role of the
 *   specific data globals is not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flag_based_on_mode_000f46f2(void)

{
  uint32_t uVar1;
  
  if ((DAT_0003c3bd == '\0') || (DAT_0003c3bd == '\x04')) {
    if ((DAT_0003c4d2 & 2) == 0) {
      if ((((DAT_0003c4df & 4) != 0) && (DAT_0003c3bd == '\x04')) ||
         (((DAT_0003c4df & 2) != 0 && (DAT_0003c3bd == '\0')))) {
        DAT_0003c440 = 5;
        uVar1 = dispatch_on_flag_zero_000f3f7a((uint)DAT_0003c564);
        DAT_0003c47e = (uint8_t)uVar1;
      }
    }
    else {
      DAT_0003c440 = 0;
    }
  }
  return;
}
