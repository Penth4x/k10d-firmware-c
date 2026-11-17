/* @k10d check_flag_and_call_subroutine_000f05d4 @ 0x000f05d4
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks specific bits in two global variables and calls call_subroutine_with_0x40 if the
 *   conditions are met.
 * summary:
 *   The function reads global variables DAT_0003c066 and DAT_0003c395. It tests if bit 1 of
 *   DAT_0003c066 is clear, bit 0 is set, and bit 5 of DAT_0003c395 is clear. If all
 *   conditions are true, it invokes call_subroutine_with_0x40. The roles of the global
 *   variables and the callee are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_subroutine_000f05d4(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_subroutine_with_0x40();
  }
  return;
}
