/* @k10d check_two_flag_conditions_000e6c7e @ 0x000e6c7e
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Returns 1 if specific bits in two unknown flag words are set, otherwise 0.
 * summary:
 *   The function checks bit 1 or bit 2 of DAT_0003c395, and also checks if bit 3 of
 *   DAT_0003c4d3 is clear while bit 2 of DAT_0003c393 is set. It returns 1 if either
 *   condition is true, otherwise 0. No callees are present, and the roles of the DAT
 *   globals are not determinable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_two_flag_conditions_000e6c7e(void)

{
  uint32_t uVar1;
  
  uVar1 = 0;
  if (((DAT_0003c395 & 2) != 0) || ((DAT_0003c395 & 4) != 0)) {
    uVar1 = 1;
  }
  if (((DAT_0003c4d3 & 8) == 0) && ((DAT_0003c393 & 4) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}
