/* @k10d dispatch_sequential_subroutines @ 0x000d9ffe
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Calls a sequence of six subroutines, with some gated by bit 0 of two flag bytes.
 * summary:
 *   The function unconditionally calls FUN_000da752 and set_flag_bits_and_clear_counters.
 *   It conditionally calls busy_wait_on_mode_flag with arguments 0xfa, 0x1b2, and 0x15e, as
 *   well as configure_state_and_dispatch, FUN_000dab66, and FUN_000dac6a, based on the
 *   state of DAT_0003c193 and DAT_0003c589. No memory writes or MMIO operations are visible
 *   in this function itself.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_sequential_subroutines(void)

{
  if ((DAT_0003c193 & 1) != 0) {
    busy_wait_on_mode_flag(0xfa);
  }
  FUN_000da752();
  if ((DAT_0003c193 & 1) != 0) {
    busy_wait_on_mode_flag(0x1b2);
    configure_state_and_dispatch();
    if ((DAT_0003c589 & 1) != 0) {
      busy_wait_on_mode_flag(0x15e);
      FUN_000dab66();
      busy_wait_on_mode_flag(0x15e);
      FUN_000dac6a();
    }
  }
  set_flag_bits_and_clear_counters();
  return;
}
