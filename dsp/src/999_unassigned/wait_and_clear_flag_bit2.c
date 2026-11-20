/* @k10d wait_and_clear_flag_bit2 @ 0x000ebfba
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Polls DAT_0000004f bit 2, clears it, and calls delay routines based on state flags.
 * summary:
 *   The function checks two sets of conditions on DAT_0003c492 and DAT_0003c58b. If met, it
 *   calls FUN_000dab0e, then waits for bit 2 of DAT_0000004f to be set, clears it, and
 *   calls update_status_flags_and_counters_000de274(1000) and busy_wait_on_mode_flag with
 *   varying delays. The second block also writes to DAT_00000050, DAT_00000056, and
 *   DAT_00000057 before the delay calls.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_and_clear_flag_bit2(void)

{
  if ((DAT_0003c492 == '\x06') && ((DAT_0003c58b & 8) == 0)) {
    FUN_000dab0e();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
      busy_wait_on_mode_flag(800);
    }
    else {
      busy_wait_on_mode_flag(0xaf0);
    }
  }
  if (((DAT_0003c492 == '\r') || (DAT_0003c492 == '\x16')) && ((DAT_0003c58b & 8) == 0)) {
    FUN_000dab0e();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      DAT_00000050 = 0xd0;
      DAT_00000056 = 0x18;
      DAT_00000057 = DAT_00000057 | 3;
      update_status_flags_and_counters_000de274(1000);
      busy_wait_on_mode_flag(_DAT_0003c19c + 1000);
      DAT_00000056 = 0;
    }
    else {
      busy_wait_on_mode_flag(_DAT_0003c19c + 3000);
    }
  }
  return;
}
