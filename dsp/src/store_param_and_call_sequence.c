/* @k10d store_param_and_call_sequence @ 0x000f0284
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Stores param_1 into DAT_0003c085 and calls five functions if specific bits in
 *   DAT_0003c066 and DAT_0003c395 match.
 * summary:
 *   Checks that bit 1 of DAT_0003c066 is clear, bit 0 is set, and bit 5 of DAT_0003c395 is
 *   clear. If true, writes param_1 to DAT_0003c085 and invokes call_subroutine_with_0x40,
 *   FUN_000d5fbe, call_subroutine_with_arg_0x42, call_d5afc_with_0x4a, and
 *   call_d5afc_with_0x43. Finally clears DAT_0003c085 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void store_param_and_call_sequence(uint8_t param_1)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    DAT_0003c085 = param_1;
    call_subroutine_with_0x40();
    FUN_000d5fbe();
    call_subroutine_with_arg_0x42();
    call_d5afc_with_0x4a();
    call_d5afc_with_0x43();
  }
  DAT_0003c085 = 0;
  return;
}
