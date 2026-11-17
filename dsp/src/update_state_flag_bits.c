/* @k10d update_state_flag_bits @ 0x000cde04
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Updates specific bit flags in DAT_0003ce08 and DAT_0003ce07 based on conditions from
 *   other DAT globals.
 * summary:
 *   The function checks a series of bit conditions across multiple DAT globals (0x0003f283,
 *   0x0003ce08, 0x0003cb80, 0x0003cbbc, 0x0003ce07, 0x0003ce01, 0x0003ce62). Depending on
 *   these conditions, it sets or clears bit 7 of DAT_0003ce08, sets bit 2 of DAT_0003ce07,
 *   or sets DAT_0003ce10 to 1. No external functions are called.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_state_flag_bits(void)

{
  bool bVar1;
  
  if ((DAT_0003f283 & 0x80) != 0) {
    if ((DAT_0003ce08 & 0x80) == 0) {
      if (((((DAT_0003cb80 & 1) == 0) && ((DAT_0003cbbc & 0x30) == 0x30)) &&
          ((DAT_0003cbbc & 0x80) == 0)) && (((DAT_0003ce07 & 4) == 0 && ((DAT_0003ce01 & 1) == 0))))
      {
        bVar1 = false;
        if (((DAT_0003ce01 & 0x20) != 0) || ((DAT_0003ce62 & 8) != 0)) {
          bVar1 = true;
        }
        if (!bVar1) {
          DAT_0003ce08 = DAT_0003ce08 | 0x80;
          DAT_0003ce10 = 1;
        }
      }
    }
    else {
      if (((DAT_0003cb80 & 1) != 0) && ((DAT_0003cb80 & 8) == 0)) {
        DAT_0003ce07 = DAT_0003ce07 | 4;
      }
      DAT_0003ce08 = DAT_0003ce08 & 0x7f;
    }
  }
  return;
}
