/* @k10d run_gated_state_loop @ 0x000efd1e
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Executes a multi-step loop gated by a state flag and a counter, calling a series of
 *   unverified functions.
 * summary:
 *   The function checks a counter and a bit in DAT_0003c038. If active, it sets bit 0 of
 *   DAT_0003c023 and enters a loop that calls a series of unverified functions, waits for
 *   bit 6 of DAT_000000ed, and clears it. It exits the loop if FUN_000efee0 returns non-
 *   zero or the counter reaches zero. Finally, it clears bit 0 of DAT_0003c023 and returns
 *   a status flag.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint32_t run_gated_state_loop(void)

{
  uint8_t uVar1;
  int iVar2;
  uint32_t uVar3;
  uintptr_t sp;
  short sStack_16;
  
  uVar3 = 0;
  set_flag_from_byte_state(&sStack_16);
  if ((sStack_16 != 0) && ((DAT_0003c038 & 0x20) == 0)) {
    DAT_0003c023 = DAT_0003c023 | 1;
    clear_bit_5_of_0x3c021_000e3aac();
    clear_and_reset_flag_bytes();
    uVar1 = DAT_0003c447;
    DAT_000000d8 = 0;
    DAT_000000ea = 0x12;
    DAT_000000ec = 1;
    DAT_000000db = 0xb;
    while (sStack_16 != 0) {
      sStack_16 = sStack_16 + -1;
      set_flag_if_conditions_met(&sStack_16);
      FUN_000f0086(sStack_16);
      dispatch_on_flag_bits_000f00ec(sStack_16);
      update_low_address_byte_state();
      configure_timer_channels();
      update_status_flag_bits_000e8302();
      update_two_counter_deltas();
      update_camera_state_flags();
      iVar2 = FUN_000efee0(uVar1);
      if (iVar2 != 0) {
        uVar3 = 1;
        break;
      }
      dispatch_state_transition_000dfe8e();
      update_status_flags_000e5cc2();
      call_four_initialization_routines_000e25aa();
      FUN_000d9e2c();
      process_camera_state_flags_000c4a56();
      dispatch_mode_transition_sequence();
      if ((DAT_0003f504 & 4) != 0) {
        process_pending_event_flags_000d6bf2();
        poll_keypad_until_release();
      }
      check_state_and_dispatch();
      dispatch_state_transition_000f01dc(0);
      process_state_flags_and_dispatch_000cb0c6();
      dispatch_mode_transition_000dfc72(1,0);
      if (((DAT_0003c023 & 4) == 0) && ((DAT_0003f50e & 1) != 0)) {
        DAT_0003c054 = 0xff;
        DAT_00000096 = 0xff;
      }
      else {
        update_value_if_flags_set();
      }
      process_pending_state_flags();
      while ((DAT_000000ed & 0x40) == 0) {
        update_state_flag_and_dispatch_000db35a();
      }
      DAT_000000ed = DAT_000000ed & 0xbf;
      increment_state_counters();
    }
    clear_flag_bits_in_globals_000e5f86();
    check_flag_and_call_sub();
    update_bit7_from_dat_0003c00f();
    iVar2 = set_flag_and_call_helper_000db7a8();
    if (iVar2 != 0) {
      call_d5642_with_100();
    }
    DAT_0003c023 = DAT_0003c023 & 0xfe;
  }
  return uVar3;
}
