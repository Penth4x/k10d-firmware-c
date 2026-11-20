/* @k10d check_and_run_state_transitions_000e8460 @ 0x000e8460
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple global flag bits to conditionally invoke a sequence of state-change
 *   functions.
 * summary:
 *   The function checks a combination of bits in DAT_0003c02f, DAT_0003c067, and
 *   DAT_0003c00b. If the initial condition is met, it calls call_subroutine_with_arg_9 and
 *   update_status_flag_bits_000e7ade. It then branches based on DAT_0003f3e1 and
 *   DAT_0003c066, either calling configure_and_wait_status_flags and potentially a group of
 *   functions (call_subroutine_with_arg_0x4e, call_d5afc_with_0x55, FUN_000d5ff0) or
 *   setting bit 1 of DAT_0003c066. It also clears DAT_0000048c if a specific bit in
 *   DAT_0003c020 is set.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_run_state_transitions_000e8460(void)

{
  if (((((DAT_0003c02f & 1) == 0) && ((DAT_0003c067 & 0x20) != 0)) && ((DAT_0003c00b & 0x40) == 0))
     && ((DAT_0003c02f & 1) == 0)) {
    call_subroutine_with_arg_9();
    update_status_flag_bits_000e7ade();
    if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 1) != 0)) {
      configure_and_wait_status_flags();
      if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0))
      {
        call_subroutine_with_arg_0x4e();
        call_d5afc_with_0x55();
        FUN_000d5ff0();
      }
      if ((DAT_0003c020 & 0x10) != 0) {
        DAT_0000048c = 0;
      }
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 2;
    }
  }
  return;
}
