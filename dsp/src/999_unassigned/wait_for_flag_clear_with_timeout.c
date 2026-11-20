/* @k10d wait_for_flag_clear_with_timeout @ 0x000e0488
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status byte until bit 7 clears, with a 4000-iteration timeout and periodic
 *   checks.
 * summary:
 *   Checks two bit flags in DAT_0003c127 and DAT_0003c114. If both are set, it enters a
 *   loop calling dispatch_key_event to read a status byte into DAT_0003c12d. It waits for
 *   bit 7 of that byte to clear, calling call_subroutine_with_mode_delay (likely a delay)
 *   and checking test_bit2_of_dat_00000008 (likely a cancellation check) on each iteration.
 *   Exits if the timeout counter reaches zero or if test_bit2_of_dat_00000008 returns a
 *   value other than 1.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_flag_clear_with_timeout(void)

{
  int iVar1;
  short sVar2;
  
  if (((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c114 & 0x40) != 0)) {
    sVar2 = 4000;
    while (dispatch_key_event(0x70,(int)&DAT_0003c12d), (DAT_0003c12d & 0x80) != 0) {
      call_subroutine_with_mode_delay();
      sVar2 = sVar2 + -1;
      if (sVar2 == 0) {
        return;
      }
      iVar1 = test_bit2_of_dat_00000008();
      if (iVar1 != 1) {
        return;
      }
    }
  }
  return;
}
