/* @k10d run_timed_polling_loop @ 0x000eb184
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Runs a bounded polling loop with periodic delays and a post-loop delay based on the
 *   final counter value.
 * summary:
 *   The function initializes several state flags and enters a while loop that calls
 *   FUN_000ebf80 and dispatch_state_machine_000eb4de, decrementing a counter and
 *   incrementing _DAT_0003c1e8. Every 5 iterations it triggers a delay via
 *   update_status_flags_and_counters_000de274. After the loop exits, it calls
 *   busy_wait_on_mode_flag with a delay value (800, 600, 400, or 200) selected by the final
 *   value of _DAT_0003c1e8, followed by a series of cleanup calls including FUN_000c4e4c,
 *   dispatch_mode_transition_000da2c4, and set_flag_from_state_bits.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_timed_polling_loop(void)

{
  if ((DAT_0003c1ed & 0x80) == 0) {
    FUN_000ed7b6();
  }
  _DAT_0003c1e8 = 0;
  if ((((DAT_0003c066 & 0x40) != 0) || ((DAT_0003c05d & 0x10) != 0)) || ((DAT_0003c214 & 1) != 0)) {
    DAT_00000002 = DAT_00000002 | 3;
  }
  _DAT_0003c202 = 0;
  DAT_0003c1eb = DAT_0003c1eb & 0xe7;
  process_state_flags_and_dispatch_000cb0c6();
  dispatch_mode_transition_000dfc72(1,0);
  FUN_000ecd00();
  DAT_0003c1eb = DAT_0003c1eb & 0xfd;
  DAT_0003c588 = DAT_0003c588 & 0xfd | 4;
  initialize_timer_state_block();
  DAT_00000056 = 0;
  if ((DAT_0003c579 != '\0') && (DAT_0003c579 != -1)) {
    DAT_00000056 = 8;
    DAT_00000050 = DAT_0003c579 + -1;
    DAT_00000057 = DAT_00000057 | 3;
  }
  DAT_0003c1f4 = 0;
  DAT_0003c1f5 = 4;
  DAT_0003c1f6 = 0;
  DAT_0003c1f7 = 4;
  while ((DAT_0003c1e7 & 4) == 0) {
    FUN_000ebf80();
    _DAT_0003c1f8 = _DAT_0003c1f8 + -1;
    if (_DAT_0003c1f8 == 0) {
      DAT_0003c1e7 = DAT_0003c1e7 | 0x10;
      FUN_000ed66c();
      DAT_0003c1e7 = DAT_0003c1e7 | 4;
    }
    dispatch_state_machine_000eb4de();
    _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    if ((_DAT_0003c1e8 == 5) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_0003c1e8 = 0;
      if ((DAT_0003c1ea & 8) == 0) {
        update_status_flags_and_counters_000de274(1000);
      }
      else {
        _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
        _DAT_0003c268 = _DAT_000000d4 << 2;
        update_status_flags_and_counters_000de274(__frv_reg_unset(4));
        set_two_byte_state_pair_000ecd6c();
        DAT_0003c1ea = DAT_0003c1ea & 0xf7;
      }
    }
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    count_flag_10_to_25();
  }
  if ((DAT_0003c1ed & 0x80) == 0) {
    copy_and_send_two_values();
  }
  if (_DAT_0003c1e8 == 0) {
    busy_wait_on_mode_flag(800);
  }
  if (_DAT_0003c1e8 == 1) {
    busy_wait_on_mode_flag(600);
  }
  if (_DAT_0003c1e8 == 2) {
    busy_wait_on_mode_flag(400);
  }
  if (_DAT_0003c1e8 == 3) {
    busy_wait_on_mode_flag(200);
  }
  DAT_0000004f = DAT_0000004f & 0xfb;
  if (((DAT_0003c1e7 & 0x10) == 0) && ((DAT_0003c066 & 0x40) == 0)) {
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      DAT_00000050 = -0x30;
      DAT_00000056 = 0x18;
      DAT_00000057 = DAT_00000057 | 3;
      set_three_byte_flags_000ecde4();
      update_status_flags_and_counters_000de274(1000);
    }
    FUN_000c4e4c();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      DAT_00000056 = 0;
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      set_two_byte_state_flags();
      set_three_byte_flags_000ecde4();
      update_status_flags_and_counters_000de274(1000);
    }
    dispatch_mode_transition_000da2c4();
    set_flag_from_state_bits();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      _DAT_000000d8 = CONCAT31(_DAT_000000d8,0x11);
      _DAT_0003c262 = (uint16_t)_DAT_000000d8;
      set_three_byte_flags_000ecde4();
      update_status_flags_and_counters_000de274(_DAT_0003c262);
    }
    DAT_0003c1ec = DAT_0003c1ec & 0xfb;
    if (((DAT_0003c1ed & 0x10) == 0) &&
       (((((DAT_0003c181 & 0x40) == 0 || ((DAT_0003c589 & 1) == 0)) || (DAT_0003c492 == '\0')) ||
        (((DAT_0003c181 & 0x40) != 0 && ((DAT_0003c588 & 0x40) != 0)))))) {
      dispatch_event_by_code_000da3b8();
      DAT_0003c1ec = DAT_0003c1ec | 4;
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        do {
        } while ((DAT_0000004f & 4) == 0);
        DAT_0000004f = DAT_0000004f & 0xfb;
        set_three_byte_flags_000ecde4();
        update_status_flags_and_counters_000de274(1000);
      }
    }
    DAT_00000056 = 0;
    clear_bit_3_of_global_a();
    DAT_0003c1eb = DAT_0003c1eb & 0xef;
  }
  else {
    DAT_00000056 = 0;
  }
  return;
}
