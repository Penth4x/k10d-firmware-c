/* @k10d check_flag_and_clear_bit @ 0x000cd830
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Returns a boolean derived from DAT_0003ce01, conditionally clearing bit 4 of
 *   DAT_0003ce07 and calling compute_clamped_level_and_scaled_byte.
 * summary:
 *   The function checks a combination of conditions involving param_1 and bits 4 and 5 of
 *   DAT_0003ce06. If those conditions are met and bit 4 of DAT_0003ce07 is set, it clears
 *   that bit and calls compute_clamped_level_and_scaled_byte. It then computes the return
 *   value as the inverse of bit 0 of DAT_0003ce01. The roles of the DAT_0003ce0x globals
 *   and compute_clamped_level_and_scaled_byte are not determinable from the provided
 *   context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

byte check_flag_and_clear_bit(int param_1)

{
  byte bVar1;
  
  if (((param_1 != 0) || ((DAT_0003ce06 & 0x20) != 0)) || (bVar1 = 0, (DAT_0003ce06 & 0x10) != 0)) {
    if ((DAT_0003ce07 & 0x10) != 0) {
      DAT_0003ce07 = DAT_0003ce07 & 0xef;
      compute_clamped_level_and_scaled_byte();
    }
    bVar1 = (DAT_0003ce01 & 1 ^ 0xff) & 1;
  }
  return bVar1;
}
