/* @k10d select_state_by_flags @ 0x000cb7f0
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Returns a small integer (1, 2, or 4) selected by a decision tree over two byte flags.
 * summary:
 *   Reads DAT_0003c127 and DAT_0003c126 and branches on their low bits to choose a return
 *   value of 1, 2, or 4. In two branches it calls compute_clamped_scaled_value before
 *   returning 1. The role of the returned codes and the meaning of the flag bytes are not
 *   determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t select_state_by_flags(void)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if ((DAT_0003c127 & 1) == 0) {
    if ((DAT_0003c127 & 8) == 0) {
      if (((DAT_0003c127 & 2) == 0) && ((DAT_0003c127 & 4) == 0)) {
        uVar1 = 4;
      }
      else if ((DAT_0003c126 & 2) == 0) {
        uVar1 = 2;
      }
      else {
        compute_clamped_scaled_value();
      }
    }
    else {
      compute_clamped_scaled_value();
    }
  }
  else if (DAT_0003c3b5 == '\x01') {
    uVar1 = 2;
  }
  else {
    uVar1 = 4;
  }
  return uVar1;
}
