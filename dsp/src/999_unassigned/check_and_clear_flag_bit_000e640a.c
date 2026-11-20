/* @k10d check_and_clear_flag_bit_000e640a @ 0x000e640a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Checks if bit 2 of DAT_0003c030 or bit 6 of DAT_0003c066 is set, clears bit 2 of
 *   DAT_0003c030 if so, and returns 1.
 * summary:
 *   The function tests bit 2 of the global variable DAT_0003c030 and bit 6 of DAT_0003c066.
 *   If either condition is true, it clears bit 2 of DAT_0003c030 (by ANDing with 0xfb) and
 *   returns 1. Otherwise, it returns 0. No other side effects or callees are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_clear_flag_bit_000e640a(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c030 & 4) != 0) || ((DAT_0003c066 & 0x40) != 0)) {
    DAT_0003c030 = DAT_0003c030 & 0xfb;
    uVar1 = 1;
  }
  return uVar1;
}
