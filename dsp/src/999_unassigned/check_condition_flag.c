/* @k10d check_condition_flag @ 0x000cc3aa
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if a specific combination of bit flags in DAT_0003ce01 and DAT_0003ce05 is
 *   met, otherwise 0.
 * summary:
 *   The function evaluates a complex boolean condition involving bits 0 and 4 of
 *   DAT_0003ce01, bit 0 of DAT_0003ce05, and the value of _DAT_0003ce38. If the initial
 *   condition is true, it checks bit 6 of DAT_0003c128. If that bit is clear, it compares
 *   the sum of DAT_0003ce20 and _DAT_0003f47c against _DAT_0000005a. If bit 6 is set, it
 *   calls FUN_000f6f74(0). The result is returned in r4.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint32_t check_condition_flag(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if ((((DAT_0003ce01 & 1) != 0) && ((DAT_0003ce01 & 0x10) == 0)) &&
     (((DAT_0003ce05 & 1) == 0 || (_DAT_0003ce38 == 0)))) {
    if ((DAT_0003c128 & 0x40) == 0) {
      if ((uint)DAT_0003ce20 + (uint)_DAT_0003f47c <= _DAT_0000005a) {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = FUN_000f6f74(0);
    }
  }
  return uVar1;
}
