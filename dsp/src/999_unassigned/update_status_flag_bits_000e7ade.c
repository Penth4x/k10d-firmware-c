/* @k10d update_status_flag_bits_000e7ade @ 0x000e7ade
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Conditionally clears and sets specific bits in several status byte globals based on
 *   other flag states.
 * summary:
 *   The function checks a combination of bits in DAT_0003c030 and DAT_0003c081. If the
 *   condition is met, it calls several subroutines and modifies bits in DAT_0003c32c,
 *   DAT_0003c060, DAT_0000040d, and DAT_0000000d. It then branches based on bit 4 of
 *   DAT_0003c003 to call different subroutines and modify DAT_0003c05d. Finally, it
 *   unconditionally updates bit 7 of DAT_0003c066 and bit 3 of DAT_0003c067 based on bits
 *   in DAT_0003c003 and DAT_0003c000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000e7ade(void)

{
  if (((DAT_0003c030 & 4) == 0) || (DAT_0003c081 == '\x01')) {
    clear_flags_and_update_state();
    DAT_0003c32c = DAT_0003c32c & 0xfd;
    DAT_0003c060 = 1;
    DAT_0000040d = DAT_0000040d | 1;
    DAT_0000000d = DAT_0000000d | 1;
    configure_timer_channels();
    if ((DAT_0003c003 & 0x10) == 0) {
      DAT_0003c060 = 4;
      set_flag_and_notify();
    }
    else {
      FUN_000e7c0a();
      if ((DAT_0003c02f & 1) == 0) {
        set_multiple_status_flags();
        DAT_0003c05d = DAT_0003c05d | 4;
        FUN_000e7c0a();
        DAT_0003c05d = DAT_0003c05d & 0xfb;
        if ((DAT_0003c02f & 1) != 0) {
          clear_status_bits_and_dispatch();
        }
      }
    }
  }
  if ((DAT_0003c003 & 0x10) == 0) {
    DAT_0003c066 = DAT_0003c066 & 0x7f;
  }
  else {
    DAT_0003c066 = DAT_0003c066 | 0x80;
  }
  if ((DAT_0003c000 & 0x40) == 0) {
    DAT_0003c067 = DAT_0003c067 & 0xf7;
  }
  else {
    DAT_0003c067 = DAT_0003c067 | 8;
  }
  return;
}
