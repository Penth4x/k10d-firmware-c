/* @k10d check_and_call_subroutine @ 0x000c3650
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Checks three specific bit flags in two global variables and calls FUN_000c3688(0) if
 *   all conditions are met.
 * summary:
 *   The function tests bit 1 and bit 3 of DAT_0003c58b, and bit 6 of DAT_0003c4d6. If bit 1
 *   is set, bit 3 is clear, and bit 6 is set, it invokes FUN_000c3688 with an argument of
 *   0. No other side effects are visible.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_and_call_subroutine(void)

{
  if ((((DAT_0003c58b & 2) != 0) && ((DAT_0003c58b & 8) == 0)) && ((DAT_0003c4d6 & 0x40) != 0)) {
    FUN_000c3688(0);
  }
  return;
}
