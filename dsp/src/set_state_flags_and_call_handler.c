/* @k10d set_state_flags_and_call_handler @ 0x000e171e
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Conditionally sets multiple global state flags and calls busy_wait_on_mode_flag with
 *   argument 0x32.
 * summary:
 *   Checks three global conditions (DAT_0003c122, DAT_00000060, DAT_0003c127). If all pass,
 *   it sets bit 6 of bRam00000000, writes specific values to DAT_00000063, DAT_00000062,
 *   DAT_00000060, and DAT_00000420, and sets bit 0 and 1 of DAT_00000400. It conditionally
 *   sets _DAT_00000064 based on DAT_00000484, sets DAT_00000067 to 2, and finally calls
 *   busy_wait_on_mode_flag(0x32).
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void set_state_flags_and_call_handler(void)

{
  if (((DAT_0003c122 != '\0') && ((DAT_00000060 & 8) == 0)) && ((DAT_0003c127 & 0x20) != 0)) {
    bRam00000000 = bRam00000000 | 0x40;
    DAT_00000063 = 0xb2;
    DAT_00000062 = 0x11;
    DAT_00000060 = 4;
    DAT_00000400 = DAT_00000400 | 7;
    if ((DAT_00000484 & 3) == 2) {
      _DAT_00000064 = 0x1f;
    }
    else {
      _DAT_00000064 = 3;
    }
    DAT_00000420 = 6;
    DAT_00000067 = 2;
    busy_wait_on_mode_flag(0x32);
  }
  return;
}
