/* @k10d wait_for_state_flag_clear @ 0x000e3e3e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets a bit in a control word and polls status flags until a specific condition is met.
 * summary:
 *   The function sets bit 1 of DAT_0003c020 and enters a loop that calls FUN_000e3e90 and
 *   checks several status bits in DAT_0003c030, DAT_0003c066, and DAT_0003c081. If a
 *   specific bit in DAT_0003c07e is set, it clears that bit and calls
 *   check_and_run_shutdown_sequence before calling process_state_transition_000e3fe0. The
 *   loop continues until run_camera_state_loop_000e4680 returns 1, after which bit 1 of
 *   DAT_0003c020 is cleared.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_state_flag_clear(void)

{
  int iVar1;
  
  DAT_0003c020 = DAT_0003c020 | 2;
  do {
    while ((((FUN_000e3e90(), (DAT_0003c030 & 4) != 0 || (iVar1 = check_and_set_state_flag_000e6376(), iVar1 != 0)) ||
            ((DAT_0003c066 & 0x40) != 0)) && (DAT_0003c081 != '\x01'))) {
      if ((DAT_0003c07e & 0x10) != 0) {
        DAT_0003c07e = DAT_0003c07e & 0xef;
        check_and_run_shutdown_sequence();
      }
      process_state_transition_000e3fe0();
    }
    iVar1 = run_camera_state_loop_000e4680();
  } while (iVar1 != 1);
  DAT_0003c020 = DAT_0003c020 & 0xfd;
  return;
}
