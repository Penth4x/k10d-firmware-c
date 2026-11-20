/* @k10d check_and_update_flag_bits @ 0x000ce780
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks bits 0 and 2 of DAT_0003c330 to conditionally clear or set bit 6 of DAT_0003c06e
 *   and returns a boolean status.
 * summary:
 *   The function reads DAT_0003c330 and tests if both bit 0 and bit 2 are clear. If so, it
 *   clears bit 6 (0x40) of DAT_0003c06e and returns 0 if DAT_00000001 is 0, otherwise 1. If
 *   either bit is set, it sets bit 6 of DAT_0003c06e and returns 0. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_update_flag_bits(void)

{
  uint32_t uVar1;
  
  uVar1 = 1;
  if (((DAT_0003c330 & 1) == 0) && ((DAT_0003c330 & 4) == 0)) {
    DAT_0003c06e = DAT_0003c06e & 0xbf;
    if ((DAT_00000001 & 1) == 0) {
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0;
    DAT_0003c06e = DAT_0003c06e | 0x40;
  }
  return uVar1;
}
