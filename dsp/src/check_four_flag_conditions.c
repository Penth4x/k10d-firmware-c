/* @k10d check_four_flag_conditions @ 0x000d0cd0
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Returns 1 if four specific bit conditions on global flags are met, else 0.
 * summary:
 *   Reads four global variables (DAT_0003f2da, DAT_0003c036, DAT_0003ce01, DAT_0003ce04)
 *   and tests specific bits. It also clears bit 0 of DAT_0003ce09 as a side effect. Returns
 *   1 only if DAT_0003f2da is non-zero, bit 0 of DAT_0003c036 is clear, bit 0 of
 *   DAT_0003ce01 is clear, and bit 3 of DAT_0003ce04 is clear. No callees are invoked.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_four_flag_conditions(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  DAT_0003ce09 = DAT_0003ce09 & 0xfe;
  if ((((DAT_0003f2da != '\0') && ((DAT_0003c036 & 1) == 0)) && ((DAT_0003ce01 & 1) == 0)) &&
     ((DAT_0003ce04 & 8) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
