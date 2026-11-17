/* @k10d check_and_set_bit4_flag @ 0x000cdb1a
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns 2 and sets bit 4 of DAT_0003ce00 if specific bits in DAT_0003f281,
 *   DAT_0003ce06, and DAT_0003ce01 match, otherwise returns 10.
 * summary:
 *   The function evaluates a compound condition on three global variables: bit 4 of
 *   DAT_0003f281 must be set, bit 4 of DAT_0003ce06 must be clear, and bit 6 of
 *   DAT_0003ce01 must be clear. If the condition is true, it sets bit 4 of DAT_0003ce00 and
 *   returns 2. If the condition is false, it returns 10. No other side effects or callees
 *   are present.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_set_bit4_flag(void)

{
  uint32_t uVar1;
  
  uVar1 = 10;
  if ((((DAT_0003f281 & 0x10) != 0) && ((DAT_0003ce06 & 0x10) == 0)) && ((DAT_0003ce01 & 0x40) == 0)
     ) {
    DAT_0003ce00 = DAT_0003ce00 | 0x10;
    uVar1 = 2;
  }
  return uVar1;
}
