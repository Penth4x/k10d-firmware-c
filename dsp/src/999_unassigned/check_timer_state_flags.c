/* @k10d check_timer_state_flags @ 0x000f39ea
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a 3-bit timer counter and state flags to conditionally reset a status byte.
 * summary:
 *   Checks if DAT_0003c447 is 4 or 5. If so, it verifies DAT_0003c030 bit 0 is set and
 *   DAT_0003ce00 bits 5-7 are clear. If the upper bits of DAT_0003c024 exceed 299, it
 *   clears DAT_0003c447, DAT_0003c449, and bit 2 of DAT_0003c4d6, then calls
 *   set_bit_six_in_dat_0003c038. Otherwise, it clears DAT_0003c024.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void check_timer_state_flags(void)

{
  if ((DAT_0003c447 == '\x04') || (DAT_0003c447 == '\x05')) {
    if (((DAT_0003c030 & 1) == 0) || ((DAT_0003ce00 & 0xe0) != 0)) {
      _DAT_0003c024 = 0;
    }
    else if (299 < (uint)((int)(uint)_DAT_0003c024 >> 3)) {
      DAT_0003c447 = '\0';
      DAT_0003c449 = 0;
      DAT_0003c4d6 = DAT_0003c4d6 & 0xfb;
      _DAT_0003c024 = 0;
      set_bit_six_in_dat_0003c038();
    }
  }
  return;
}
