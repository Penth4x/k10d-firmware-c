/* @k10d check_flag_and_call_subroutine_000f0594 @ 0x000f0594
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks specific bit patterns in two global variables and calls a subroutine if
 *   conditions are met.
 * summary:
 *   The function reads two global variables, DAT_0003c066 and DAT_0003c395. It verifies
 *   that bit 1 of DAT_0003c066 is clear, bit 0 is set, and bit 5 of DAT_0003c395 is clear.
 *   If all conditions are true, it calls FUN_000d5ff0. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_subroutine_000f0594(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    FUN_000d5ff0();
  }
  return;
}
