/* @k10d compute_buffer_overflow_delta @ 0x000c1486
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns the amount by which a counter exceeds a limit, gated by three flag bits.
 * summary:
 *   Checks three bit flags in DAT_0003c129, DAT_0003c127, and DAT_0003c126. If all
 *   conditions are met, it computes (DAT_0003c560 + 0x4e) - DAT_0003c576, clamping negative
 *   results to zero. Returns 0 if the flag conditions are not met or if the value does not
 *   exceed the limit. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int compute_buffer_overflow_delta(void)

{
  int iVar1;
  
  iVar1 = 0;
  if ((((DAT_0003c129 & 1) != 0) && ((DAT_0003c127 & 4) != 0)) && ((DAT_0003c126 & 2) == 0)) {
    if (DAT_0003c560 + 0x4e < (int)(uint)DAT_0003c576) {
      iVar1 = 0;
    }
    else {
      iVar1 = (DAT_0003c560 + 0x4e) - (uint)DAT_0003c576;
    }
  }
  return iVar1;
}
