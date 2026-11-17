/* @k10d conditional_call_sequence @ 0x000f0124
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Invokes a fixed sequence of nine functions if specific bits in two global variables
 *   match a pattern.
 * summary:
 *   Checks if bit 0 of DAT_0003c066 is set, bit 1 is clear, and bit 5 of DAT_0003c395 is
 *   clear. If true, calls call_subroutine_with_0x58 through call_d5afc_with_0x57 in a
 *   specific order. The callees are unnamed, so the specific side effects are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void conditional_call_sequence(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    call_subroutine_with_0x58();
    call_subroutine_with_arg_0x4e();
    call_d5afc_with_0x52();
    call_d5afc_with_0x55();
    FUN_000d5ff0();
    FUN_000d5fbe();
    call_subroutine_with_arg_0x42();
    call_subroutine_with_arg_0x56();
    call_d5afc_with_0x57();
  }
  return;
}
