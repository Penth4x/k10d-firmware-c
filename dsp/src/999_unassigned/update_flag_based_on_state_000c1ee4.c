/* @k10d update_flag_based_on_state_000c1ee4 @ 0x000c1ee4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Sets DAT_0003c565 to either DAT_0003c576 or 0 based on the state of DAT_0003c129,
 *   DAT_0003c127, and DAT_0003c440.
 * summary:
 *   The function checks if bit 0 of DAT_0003c129 is set. If so, it evaluates a compound
 *   condition involving bits 0 and 1 of DAT_0003c127 and the value of DAT_0003c440. If the
 *   condition is true, DAT_0003c565 is assigned the value of DAT_0003c576; otherwise, it is
 *   set to 0. No other side effects or memory writes occur.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_flag_based_on_state_000c1ee4(void)

{
  if ((DAT_0003c129 & 1) != 0) {
    if ((((DAT_0003c127 & 2) == 0) && ((DAT_0003c127 & 1) == 0)) && (DAT_0003c440 != '\x11')) {
      DAT_0003c565 = DAT_0003c576;
    }
    else {
      DAT_0003c565 = 0;
    }
  }
  return;
}
