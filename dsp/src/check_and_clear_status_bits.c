/* @k10d check_and_clear_status_bits @ 0x000e6280
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks a set of flag bits across four global variables and clears one specific bit if
 *   set.
 * summary:
 *   The function evaluates multiple bit flags in DAT_0003c022, DAT_0003c123, DAT_0003c331,
 *   and DAT_0003c395. If any of the specified bits are set, it returns 1; otherwise, it
 *   returns 0. Additionally, if bit 4 (0x10) of DAT_0003c331 is set, it clears that bit
 *   before returning. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_clear_status_bits(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((((DAT_0003c022 & 4) != 0) || ((DAT_0003c123 & 0x80) != 0)) || ((DAT_0003c123 & 0x20) != 0))
     || ((((DAT_0003c331 & 0x10) != 0 || ((DAT_0003c395 & 1) != 0)) || ((DAT_0003c022 & 8) != 0))))
  {
    uVar1 = 1;
  }
  if ((DAT_0003c331 & 0x10) != 0) {
    DAT_0003c331 = DAT_0003c331 & 0xef;
  }
  return uVar1;
}
