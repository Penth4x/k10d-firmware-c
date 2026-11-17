/* @k10d run_gated_polling_loop @ 0x000cc722
 * name: model (proposed by the local model from the decompile, confidence 0.65)
 * purpose:
 *   Executes a do-while loop of subroutines gated by multiple flag bits, with periodic
 *   maintenance every 128 iterations.
 * summary:
 *   Checks DAT_0003c021 bit 0; if set, sets bit 3 of DAT_0003ce02 and enters a loop calling
 *   wait_for_bit2_of_dat_00000057 and incrementing a counter. Every 128 iterations (counter
 *   & 0x7f == 0), it calls read_bytes_if_enabled and conditionally invokes three more
 *   functions based on DAT_0003c128 bit 6. The loop continues while four specific flag
 *   conditions hold. No verified callee names are available to identify the subsystem.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_gated_polling_loop(void)

{
  if ((DAT_0003c021 & 1) != 0) {
    DAT_0003ce02 = DAT_0003ce02 | 8;
    check_and_update_byte_flag();
    clear_status_flag_bits_000cca22();
    reset_two_word_state();
    do {
      wait_for_bit2_of_dat_00000057();
      _DAT_0003ce22 = _DAT_0003ce22 + 1;
      if ((_DAT_0003ce22 & 0x7f) == 0) {
        read_bytes_if_enabled(0x60, (void *)&DAT_0003c12c, 1);
        if ((DAT_0003c128 & 0x40) != 0) {
          check_flag_and_call_helper_000f6f56();
          check_and_update_byte_flag();
          check_status_and_return_code();
        }
        dispatch_status_branch();
        configure_timer_channels();
        update_status_flag_bit0();
        update_scroll_position_state();
      }
      update_state_flags_and_counters_000cc7fc();
      FUN_000cce54();
    } while (((((DAT_0003c127 & 8) != 0) && ((DAT_0003c021 & 1) != 0)) && ((DAT_0000005f & 4) == 0))
            && ((DAT_0003ce01 & 1) != 0));
    reset_state_flags_and_call_initializers_000cd9de();
  }
  return;
}
