/* @k10d check_and_set_flag_bit6 @ 0x000ce396
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Clears bit 6 of DAT_0003ce08, then conditionally sets it and returns 9 if four other
 *   globals satisfy specific bit/value tests.
 * summary:
 *   The function first clears bit 6 (0x40) of DAT_0003ce08. It then evaluates a compound
 *   condition involving bit 6 of DAT_0003f283, the lower nibbles of DAT_0003cf0f and
 *   DAT_0003f285, bit 1 of DAT_0003ce06, and a comparison between DAT_0003ce0e and
 *   DAT_0003ce32. If all conditions are met, it sets bit 6 of DAT_0003ce08 and returns 9;
 *   otherwise it returns 0. No MMIO or known subsystem globals are accessed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_and_set_flag_bit6(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  DAT_0003ce08 = DAT_0003ce08 & 0xbf;
  if (((((DAT_0003f283 & 0x40) != 0) && ((DAT_0003cf0f & 0xf) == (DAT_0003f285 & 0xf))) &&
      ((DAT_0003ce06 & 2) != 0)) && (_DAT_0003ce0e <= _DAT_0003ce32)) {
    DAT_0003ce08 = DAT_0003ce08 | 0x40;
    uVar1 = 9;
  }
  return uVar1;
}
