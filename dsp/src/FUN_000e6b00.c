/* @k10d FUN_000e6b00 @ 0x000e6b00
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e6b00(void)

{
  int iVar1;
  
  if (((DAT_0003c440 == '\x11') && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c4df & 8) == 0)) {
    FUN_000d5642(200);
    clear_and_reset_flag_bytes();
    DAT_000000d8 = 0;
    DAT_000000ea = 0x12;
    DAT_000000ec = 1;
    DAT_000000db = 0xb;
    while( true ) {
      update_low_address_byte_state();
      configure_timer_channels();
      if (((DAT_0003c000 & 4) != 0) && ((DAT_0003c038 & 2) != 0)) {
        DAT_0003c000 = DAT_0003c000 & 0xfd;
      }
      update_two_counter_deltas();
      update_camera_state_flags();
      dispatch_state_transition_000dfe8e();
      update_status_flags_000e5cc2();
      call_four_initialization_routines_000e25aa();
      FUN_000d9e2c();
      process_camera_state_flags_000c4a56();
      dispatch_mode_transition_sequence();
      if ((DAT_0003f504 & 4) != 0) {
        poll_keypad_until_release();
      }
      process_state_flags_and_dispatch_000cb0c6();
      dispatch_mode_transition_000dfc72(1,0);
      if (((DAT_0003c023 & 4) == 0) && ((DAT_0003f50e & 1) != 0)) {
        update_value_if_flags_set();
      }
      else {
        update_value_if_flags_set();
      }
      if (((DAT_0003c440 == '\x11') && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c4df & 8) == 0)) {
        process_pending_state_flags();
      }
      else {
        clear_three_status_bits();
      }
      iVar1 = check_status_flag_condition();
      if (iVar1 != 0) break;
      do {
      } while ((DAT_000000ed & 0x40) == 0);
      DAT_000000ed = DAT_000000ed & 0xbf;
      increment_state_counters();
    }
    clear_flag_bits_in_globals_000e5f86();
  }
  else {
    clear_three_status_bits();
    do {
      update_low_address_byte_state();
      configure_timer_channels();
      iVar1 = check_status_flag_condition();
    } while (iVar1 == 0);
    process_pending_state_flags();
  }
  return;
}
