/* @k10d update_state_flags_and_counters_000cc7fc @ 0x000cc7fc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Modifies byte flags at 0x3ce04 and 0x3ce08 and decrements a counter at 0x3ce26 based on
 *   conditional checks.
 * summary:
 *   The function checks several bit flags in global variables (0x3c128, 0x3ce01, 0x3ce03,
 *   0x00d0). Depending on these conditions, it clears or sets specific bits in 0x3ce04 and
 *   0x3ce08. It also decrements the value at 0x3ce26 by either 0x100 or the value at
 *   0x3ce24. If the counter remains positive, it sets bit 5 of 0x3ce04. If bit 7 was
 *   previously set, it calls clear_bit1_of_dat_0003ce01. Finally, it calls
 *   clear_bits_and_shift_global if the initial conditions were not met or after processing.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_flags_and_counters_000cc7fc(void)

{
  byte bVar1;
  byte bVar2;
  
  if (((DAT_0003c128 & 0x40) == 0) && ((DAT_0003ce01 & 1) != 0)) {
    if ((DAT_0003ce03 & 4) == 0) {
      if ((DAT_000000d0 & 0x20) == 0) {
        DAT_0003ce04 = DAT_0003ce04 & 0xbf;
      }
      else {
        DAT_0003ce08 = DAT_0003ce08 & 0xfb;
        clear_bit_and_toggle_flag();
        if ((DAT_0003ce04 & 0x40) == 0) {
          return;
        }
      }
    }
    bVar1 = DAT_0003ce04 | 0x20;
    if ((DAT_0003ce03 & 4) == 0) {
      _DAT_0003ce26 = _DAT_0003ce26 + -0x100;
    }
    else {
      _DAT_0003ce26 = _DAT_0003ce26 - _DAT_0003ce24;
    }
    if (0 < _DAT_0003ce26) {
      DAT_0003ce04 = bVar1;
      return;
    }
    bVar2 = DAT_0003ce04 & 0x80;
    DAT_0003ce04 = bVar1;
    if (bVar2 != 0) {
      clear_bit1_of_dat_0003ce01();
    }
    DAT_0003ce04 = DAT_0003ce04 | 0x80;
  }
  clear_bits_and_shift_global();
  return;
}
