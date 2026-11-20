/* @k10d run_five_iteration_state_loop @ 0x000e66b6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Executes a five-iteration loop that updates state flags and calls a sequence of
 *   subsystem functions.
 * summary:
 *   The function initializes several global variables and enters a do-while loop that runs
 *   exactly five times (controlled by sVar1). Inside the loop, it branches based on bits in
 *   DAT_0003c02f and DAT_0003c003 to call different state transition functions
 *   (clear_bit7_of_dat_00000006, update_bit7_from_dat_0003c00f,
 *   clear_bit_5_of_0x3c021_000e3aac). It also waits for a specific bit in DAT_0000004f to
 *   be set before clearing it and calling a delay function
 *   (update_status_flags_and_counters_000de274). The loop increments counters in
 *   DAT_0003c024, DAT_0003c026, and DAT_0003c028 on each iteration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_five_iteration_state_loop(void)

{
  short sVar1;
  
  sVar1 = 5;
  DAT_0003c028 = 0;
  _DAT_0003c024 = 0;
  update_bit7_from_dat_0003c00f();
  clear_three_status_bits();
  clear_bit_5_of_0x3c021_000e3aac();
  clear_status_bits_and_dispatch();
  DAT_000000d8 = 0;
  DAT_000000ea = 0x12;
  DAT_000000ec = 1;
  DAT_000000db = 0xb;
  set_three_byte_flags_000ecde4();
  do {
    if (((DAT_0003c02f & 8) == 0) && ((DAT_0003c003 & 0x10) != 0)) {
      write_two_bit_field_to_dat_0003c008((DAT_0003c028 & 1) << 1);
      if ((DAT_0003c028 & 3 | 2) == 3) {
        clear_bit7_of_dat_00000006();
      }
      else {
        update_bit7_from_dat_0003c00f();
      }
    }
    else {
      clear_bit_5_of_0x3c021_000e3aac();
      if ((DAT_0003c028 & 7) == 7) {
        clear_bit7_of_dat_00000006();
      }
      else {
        update_bit7_from_dat_0003c00f();
      }
    }
    update_low_address_byte_state();
    configure_timer_channels();
    if ((DAT_0003c030 & 4) == 0) {
      sVar1 = 5;
    }
    else if (sVar1 != 0) {
      sVar1 = sVar1 + -1;
    }
    if ((DAT_0003c025 & 0x3f) == 0x3f) {
      update_state_flags_and_dispatch();
    }
    update_status_flag_bits_000e8302();
    poll_keypad_until_release();
    clear_three_status_bits();
    update_byte_flags_from_condition_bits();
    dispatch_mode_transition_000dfc72(1,0);
    while ((DAT_000000ed & 0x40) == 0) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
    }
    DAT_000000ed = DAT_000000ed & 0xbf;
    _DAT_0003c024 = _DAT_0003c024 + 1;
    _DAT_0003c026 = _DAT_0003c026 + 1;
    DAT_0003c028 = DAT_0003c028 + 1;
  } while (sVar1 != 0);
  DAT_0000004e = 0;
  check_flag_and_call_sub();
  update_bit7_from_dat_0003c00f();
  return;
}
