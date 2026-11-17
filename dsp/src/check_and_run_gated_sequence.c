/* @k10d check_and_run_gated_sequence @ 0x000e8a4e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks four global flag bits and, if all pass, calls a sequence of three functions
 *   returning a 0-2 status code.
 * summary:
 *   The function tests bit 4 of DAT_0003c021, bit 4 of DAT_00000001, bit 6 of DAT_0003c022,
 *   and bits 5-7 of DAT_0003ce00. If the combined condition is true, it calls
 *   set_char_and_length_globals, then check_value_in_range_99_699, and if that returns non-
 *   zero, poll_until_nonzero_seven_times. If poll_until_nonzero_seven_times returns zero,
 *   it calls set_flag_based_on_state_value and returns 2; otherwise it returns 1. If the
 *   initial flag check fails, it returns 0. The specific roles of the callees and the
 *   meaning of the global flags are not determinable from the provided information.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t check_and_run_gated_sequence(void)

{
  int iVar1;
  uint32_t uVar2;
  
  uVar2 = 0;
  if (((((DAT_0003c021 & 0x10) != 0) && ((DAT_00000001 & 0x10) == 0)) &&
      ((DAT_0003c022 & 0x40) == 0)) && ((DAT_0003ce00 & 0xe0) == 0)) {
    set_char_and_length_globals();
    uVar2 = 1;
    iVar1 = check_value_in_range_99_699();
    if ((iVar1 != 0) && (iVar1 = poll_until_nonzero_seven_times(), iVar1 == 0)) {
      set_flag_based_on_state_value();
      uVar2 = 2;
    }
  }
  return uVar2;
}
