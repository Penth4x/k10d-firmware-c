/* @k10d update_status_flag_bits_000cba34 @ 0x000cba34
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets specific bits in DAT_0003ce06 based on the return values of helper functions and
 *   other flag states.
 * summary:
 *   The function checks a gate flag in DAT_0003cb80. If set, it calls
 *   clamp_product_to_16bit_000d1ef8 and check_buffer_overflow_and_update_flags. If
 *   check_buffer_overflow_and_update_flags returns 0, it sets bit 7 (0x80) of DAT_0003ce06.
 *   It also checks bit 3 of DAT_0003ce07. Separately, if FUN_000cd58c is called and bits 1
 *   or 2 of DAT_0003c330 are set along with bit 0 of DAT_0003c021, it sets bit 4 (0x10) of
 *   DAT_0003ce06. The function appears to aggregate status conditions into a bitmask.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000cba34(void)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if ((DAT_0003cb80 & 1) != 0) {
    clamp_product_to_16bit_000d1ef8();
    iVar2 = check_buffer_overflow_and_update_flags();
    if (iVar2 == 0) {
      DAT_0003ce06 = DAT_0003ce06 | 0x80;
      bVar1 = false;
    }
    else if ((DAT_0003ce07 & 8) != 0) {
      bVar1 = false;
    }
  }
  if ((bVar1) &&
     (((FUN_000cd58c(), (DAT_0003c330 & 2) != 0 || ((DAT_0003c330 & 4) != 0)) &&
      ((DAT_0003c021 & 1) != 0)))) {
    DAT_0003ce06 = DAT_0003ce06 | 0x10;
  }
  return;
}
