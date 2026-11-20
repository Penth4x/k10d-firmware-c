/* @k10d check_flag_and_call_sub @ 0x000e3c2c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Checks bit 1 of DAT_0003c008 and calls write_two_bit_field_to_dat_0003c008 with 0 if
 *   set.
 * summary:
 *   The function tests whether bit 1 (value 2) of the global DAT_0003c008 is set. If the
 *   condition is true, it invokes write_two_bit_field_to_dat_0003c008 with an argument of
 *   0. No other side effects or memory writes are visible in the pseudocode.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void check_flag_and_call_sub(void)

{
  if ((DAT_0003c008 & 2) != 0) {
    write_two_bit_field_to_dat_0003c008(0);
  }
  return;
}
