/* @k10d toggle_bit2_of_dat_ce09 @ 0x000d051e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Toggles bit 2 of DAT_0003ce09 based on the state of bit 0 of DAT_0003c036, calling
 *   set_flag_and_call_helper_000d014c(0) on change.
 * summary:
 *   Checks bit 0 of DAT_0003c036. If clear, sets bit 2 of DAT_0003ce09 if not already set
 *   and calls set_flag_and_call_helper_000d014c(0). If bit 0 is set, clears bit 2 of
 *   DAT_0003ce09 if set and calls set_flag_and_call_helper_000d014c(0), returning true.
 *   Returns false if no state change occurred. The role of DAT_0003c036 and DAT_0003ce09 is
 *   not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

bool toggle_bit2_of_dat_ce09(void)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_0003c036 & 1) == 0) {
    bVar1 = (DAT_0003ce09 & 4) == 0;
    if (bVar1) {
      DAT_0003ce09 = DAT_0003ce09 | 4;
      set_flag_and_call_helper_000d014c();
    }
  }
  else if ((DAT_0003ce09 & 4) != 0) {
    DAT_0003ce09 = DAT_0003ce09 & 0xfb;
    set_flag_and_call_helper_000d014c();
    bVar1 = true;
  }
  return bVar1;
}
