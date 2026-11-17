/* @k10d check_and_clear_flag_bit_000ce8ee @ 0x000ce8ee
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks a combination of bits in two global variables and clears bit 2 of the second if
 *   conditions are met.
 * summary:
 *   The function evaluates a complex boolean condition involving bits 0 and 1 of
 *   DAT_0003c066, bit 5 of DAT_0003c395, and bit 2 of DAT_0003c067. If the condition is
 *   true, it calls FUN_000f040e and then clears bit 2 of DAT_0003c067. The specific roles
 *   of the global variables and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_clear_flag_bit_000ce8ee(void)

{
  if (((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) &&
     ((DAT_0003c067 & 4) != 0)) {
    FUN_000f040e();
    DAT_0003c067 = DAT_0003c067 & 0xfb;
  }
  return;
}
