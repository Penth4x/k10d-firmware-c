/* @k10d poll_status_until_clear @ 0x000e51d4
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Sets a flag, polls a status function in a loop until it returns non-1 or a condition is
 *   met, and clears the flag.
 * summary:
 *   The function sets bit 2 of DAT_0003c07f and calls FUN_000cdeb8. It then checks several
 *   flag bits in DAT_0003ce01, DAT_0003ce05, and DAT_0003ce06. If the conditions are met,
 *   it calls update_state_flag_and_dispatch_000db35a and
 *   process_camera_state_flags_000c4a56. If update_state_flag_and_dispatch_000db35a returns
 *   1, it enters a loop that repeatedly calls update_state_flag_and_dispatch_000db35a,
 *   process_camera_state_flags_000c4a56, check_and_run_gated_sequence, and FUN_000cdeb8,
 *   checking evaluate_state_transition and flag bits to determine when to exit. It clears
 *   bit 6 of DAT_000000ed and bit 2 of DAT_0003c07f before returning the last value from
 *   update_state_flag_and_dispatch_000db35a.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

int poll_status_until_clear(void)

{
  int iVar1;
  int iVar2;
  
  DAT_0003c07f = DAT_0003c07f | 4;
  iVar2 = 0;
  FUN_000cdeb8();
  if ((((DAT_0003ce01 & 1) == 0) || ((DAT_0003ce05 & 1) != 0)) && ((DAT_0003ce06 & 1) == 0)) {
    iVar2 = update_state_flag_and_dispatch_000db35a();
    process_camera_state_flags_000c4a56();
    if (iVar2 == 1) {
      if ((((DAT_000000ed & 0x40) != 0) && (iVar1 = evaluate_state_transition(), iVar1 == 4)) &&
         ((DAT_0003ce62 & 2) == 0)) {
        clear_flag_and_reset_state();
        set_flag_and_call_helper_000db7ba();
        iVar2 = 0;
      }
      while ((iVar2 == 1 && ((DAT_000000ed & 0x40) == 0))) {
        iVar2 = update_state_flag_and_dispatch_000db35a();
        process_camera_state_flags_000c4a56();
        check_and_run_gated_sequence();
        FUN_000cdeb8();
        iVar1 = evaluate_state_transition();
        if ((iVar1 == 4) && ((iVar2 == 1 && ((DAT_0003ce62 & 2) == 0)))) {
          clear_flag_and_reset_state();
          set_flag_and_call_helper_000db7ba();
          iVar2 = 0;
        }
        check_and_clear_flag_bit_000ce8ee();
        FUN_000cdeb8();
      }
    }
    DAT_000000ed = DAT_000000ed & 0xbf;
  }
  DAT_0003c07f = DAT_0003c07f & 0xfb;
  return iVar2;
}
