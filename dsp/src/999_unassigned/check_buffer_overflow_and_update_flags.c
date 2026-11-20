/* @k10d check_buffer_overflow_and_update_flags @ 0x000ccff0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks if a calculated value exceeds a limit and updates status flags in DAT_0003ce07.
 * summary:
 *   The function calls compute_adjusted_value_000cd0b8 with DAT_0003ce12 and compares the
 *   result plus DAT_0003ce13 against _DAT_0003cc30. If the sum is less than the limit, it
 *   returns 1 and conditionally clears or sets bit 3 of DAT_0003ce07 based on other flags.
 *   If the sum is greater or equal, it calls update_status_flags_000cd358, adjusts
 *   DAT_0003ce13, and clears bit 3 of DAT_0003ce07, returning 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_buffer_overflow_and_update_flags(void)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = compute_adjusted_value_000cd0b8(DAT_0003ce12);
  uVar2 = 0;
  if (iVar1 + (uint)DAT_0003ce13 < (uint)_DAT_0003cc30) {
    uVar2 = 1;
    if (((((DAT_0003f280 & 0x80) == 0) || ((DAT_0003ce07 & 8) != 0)) || ((DAT_0003ce01 & 1) != 0))
       || ((DAT_0003ce01 & 0x40) != 0)) {
      DAT_0003ce07 = DAT_0003ce07 & 0xf7;
    }
    else if (((((DAT_0003ce07 & 4) == 0) && ((DAT_0003cb80 & 8) == 0)) && (_DAT_0003cc30 < 0x100))
            || (iVar1 = check_and_set_flag_bit6(), iVar1 != 0)) {
      DAT_0003ce07 = DAT_0003ce07 | 8;
    }
  }
  else {
    if (((DAT_0003ce01 & 1) == 0) || ((DAT_0003ce05 & 1) != 0)) {
      update_status_flags_000cd358(0);
      if (((DAT_0003cb80 & 8) == 0) || ((DAT_0003ce07 & 8) != 0)) {
        DAT_0003ce13 = 0x21;
      }
      else {
        DAT_0003ce13 = 0xf;
      }
      if (((DAT_0003ce00 & 0x40) != 0) && ((DAT_0003ce00 & 0x20) == 0)) {
        if ((DAT_0003ce05 & 1) == 0) {
          DAT_0003ce13 = DAT_0003ce13 + (char)((uint)DAT_0003f2c3 * (uint)DAT_0003ce68 >> 3);
        }
        else {
          DAT_0003ce13 = 0x33;
        }
      }
    }
    DAT_0003ce07 = DAT_0003ce07 & 0xf7;
  }
  return uVar2;
}
