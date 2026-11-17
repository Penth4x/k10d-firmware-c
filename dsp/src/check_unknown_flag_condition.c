/* @k10d check_unknown_flag_condition @ 0x000e7056
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Returns 1 if a specific combination of bits in DAT_0003c440, DAT_0003c447,
 *   DAT_0003c4d0, and DAT_0003c4d1 is set, otherwise 0.
 * summary:
 *   The function evaluates a boolean expression involving four global variables. It checks
 *   if DAT_0003c447 is 1, and if either DAT_0003c440 is 8 or 0x11, or bit 3 of DAT_0003c4d1
 *   is set, or bit 6 of DAT_0003c4d0 is set. It also checks that bit 1 of DAT_00000001 is
 *   clear. If all conditions are met, it returns 1; otherwise, it returns 0. No memory
 *   writes or function calls are performed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_unknown_flag_condition(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c447 == '\x01') &&
      ((((DAT_0003c440 == '\b' || (DAT_0003c440 == '\x11')) || ((DAT_0003c4d1 & 8) != 0)) ||
       ((DAT_0003c4d0 & 0x40) != 0)))) && ((DAT_00000001 & 2) == 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
