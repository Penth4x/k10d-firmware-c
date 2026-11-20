/* @k10d retry_two_times_and_return_status @ 0x000e17b8
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Attempts an operation up to two times, setting a failure flag if both attempts fail,
 *   and returns a status byte.
 * summary:
 *   The function stores param_1 into DAT_0003c121 and clears bits in bRam00000000. It
 *   enters a loop that runs at most twice, calling update_state_and_wait_flag(param_1) and
 *   checking DAT_0003c122 for a non-zero result. If the loop exhausts its retries (sVar2 ==
 *   0), it sets bit 3 of DAT_0003c123; otherwise it clears it. Finally, it adjusts
 *   DAT_0003c122 based on param_1 and the result of poll_status_flag_and_set_ready before
 *   returning it.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

char retry_two_times_and_return_status(uint param_1)

{
  int iVar1;
  short sVar2;
  
  DAT_0003c121 = (uint8_t)param_1;
  bRam00000000 = bRam00000000 & 0xf7;
  sVar2 = 2;
  do {
    DAT_00000420 = 0;
    DAT_00000400 = DAT_00000400 & 0xfb;
    bRam00000000 = bRam00000000 & 0xfd;
    busy_wait_on_mode_flag(0x50);
    bRam00000000 = bRam00000000 | 2;
    DAT_00000420 = 2;
    DAT_0003c122 = '\0';
    update_state_and_wait_flag(param_1);
    sVar2 = sVar2 + -1;
    if (DAT_0003c122 == '\0') break;
  } while (sVar2 != 0);
  if (sVar2 == 0) {
    DAT_0003c123 = DAT_0003c123 | 8;
  }
  else {
    DAT_0003c123 = DAT_0003c123 & 0xf7;
  }
  if (param_1 < 0xf0) {
    iVar1 = poll_status_flag_and_set_ready();
    if (iVar1 != 0) {
      if ((DAT_0003c122 == '\x04') && ((param_1 == 0x6d || (param_1 == 0xef)))) {
        DAT_0003c122 = '\a';
      }
      DAT_0003c122 = DAT_0003c122 + '0';
    }
  }
  else if (DAT_0003c122 != '\0') {
    DAT_0003c122 = DAT_0003c122 + '0';
  }
  return DAT_0003c122;
}
