/* @k10d wait_for_status_bit_clear_000e042c @ 0x000e042c
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Polls a status byte until bit 4 clears or a 400-iteration timeout expires, issuing
 *   commands based on bit 5.
 * summary:
 *   Checks bit 7 of DAT_0003c128 to enable the wait loop. Inside the loop, it calls
 *   dispatch_key_event or read_bytes_if_enabled depending on bit 5 of DAT_0003c127, then
 *   checks bit 4 of DAT_0003c12f. If the bit is set, it calls call_subroutine_with_ten,
 *   decrements the counter, and calls test_bit2_of_dat_00000008 to verify a condition
 *   (returns 1 to continue). The function exits early if the timeout is reached or the
 *   condition check fails.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void wait_for_status_bit_clear_000e042c(void)

{
  int iVar1;
  short sVar2;
  
  if ((DAT_0003c128 & 0x80) != 0) {
    sVar2 = 400;
    while( true ) {
      if ((DAT_0003c127 & 0x20) == 0) {
        dispatch_key_event(0x78,(int)&DAT_0003c12f);
      }
      else {
        read_bytes_if_enabled(0x6a,(void *)&DAT_0003c12f,1);
      }
      if ((DAT_0003c12f & 0x10) == 0) break;
      call_subroutine_with_ten();
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
