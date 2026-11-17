/* @k10d run_camera_state_loop_000e4680 @ 0x000e4680
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Executes an infinite loop that updates camera state flags and calls subsystem handlers
 *   based on mode and status conditions.
 * summary:
 *   The function initializes several state flags in DAT_0003c0xx and DAT_0000000x, then
 *   enters a do-while loop that never terminates. Inside the loop, it branches on
 *   DAT_0003c392 (values 1 or 4) to select between two sequences of handler calls (e.g.,
 *   update_low_address_byte_state, update_status_flags_000e62f4,
 *   check_and_run_shutdown_sequence). It updates counters like _DAT_0003f54c and calls
 *   increment_state_counters at the end of each iteration. The function returns early (with
 *   0 or 1) if specific exit conditions are met via wait_for_status_bit_7 or
 *   return_zero_stub_000e65e0, clearing the flag in DAT_0003c020 before returning.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint16_t run_camera_state_loop_000e4680(void)

{
  int iVar1;
  ushort uVar2;
  uint16_t uStack_1a;
  
  uVar2 = 0;
  DAT_0003c020 = DAT_0003c020 | 0x10;
  uStack_1a = 0;
  if (((DAT_0003c021 & 0x10) == 0) && ((DAT_0003c021 & 0x80) != 0)) {
    if ((DAT_0003f50e & 2) == 0) {
      DAT_0000000d = DAT_0000000d | 1;
    }
    else {
      DAT_0000000d = DAT_0000000d & 0xfe;
    }
  }
  DAT_0003c02b = DAT_0003c02b & 0x7f;
  DAT_0000000d = DAT_0000000d | 1;
  busy_wait_on_mode_flag(0x14);
  infinite_loop_000e79ec();
  if ((((DAT_0003c00b & 0x40) == 0) && ((DAT_0003c02f & 1) == 0)) && ((DAT_0003c066 & 0x40) == 0)) {
    DAT_0003c067 = DAT_0003c067 & 0xef;
    update_status_flag_bits_000e7ade();
    if (((DAT_0003f3e1 & 0x80) == 0) && ((DAT_0003c066 & 1) != 0)) {
      configure_and_wait_status_flags();
      conditional_call_sequence();
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 2;
    }
  }
  DAT_0003c066 = DAT_0003c066 & 0xbf;
  dispatch_mode_transition_000dfc72(1,1);
  if ((DAT_0003c05d & 0x40) == 0) {
    DAT_0003c05d = DAT_0003c05d | 0x40;
    DAT_00000008 = DAT_00000008 & 0xfe;
    DAT_0000000a = DAT_0000000a | 0x10;
    FUN_000ddea0();
  }
  DAT_0003c05d = DAT_0003c05d & 0x7f;
  _DAT_0003f54c = 0;
  DAT_0003f54b = 0;
  clear_and_reset_flag_bytes();
  DAT_0000048c = 0;
  DAT_0003c05d = DAT_0003c05d & 0xf7;
  do {
    if (((DAT_0003c392 == '\x01') || (DAT_0003c392 == '\x04')) &&
       (((DAT_00000001 & 4) == 0 && ((DAT_0003c066 & 1) != 0)))) {
      update_low_address_byte_state();
      update_status_flags_000e62f4();
      iVar1 = check_and_run_shutdown_sequence();
      if (iVar1 == 2) goto LAB_000e4992;
      configure_timer_channels();
      DAT_0003c02b = DAT_0003c02b | 0x80;
      update_status_flag_bits_000e8302();
      if ((DAT_0003c025 & 0x3f) == 0x3f) {
        update_state_flags_and_dispatch();
      }
      DAT_0003c02b = DAT_0003c02b & 0x7f;
      process_pending_event_flags_000d6bf2();
      poll_keypad_until_release();
      update_two_counter_deltas();
      update_camera_state_flags();
      check_state_and_dispatch();
      FUN_000e45f4();
      FUN_000f04f2();
      process_state_flags_and_dispatch_000cb0c6();
      dispatch_mode_transition_000dfc72(1,0);
      if ((DAT_0003c036 & 1) == 0) {
        set_flag_and_call_helper_000db7a8();
      }
      iVar1 = wait_for_status_bit_7();
      if (iVar1 == 1) {
        uStack_1a = 1;
LAB_000e4992:
        DAT_0003c020 = DAT_0003c020 & 0xef;
        return uStack_1a;
      }
    }
    else {
      update_low_address_byte_state();
      update_status_flags_000e62f4();
      iVar1 = check_and_run_shutdown_sequence();
      if (iVar1 == 2) goto LAB_000e4992;
      configure_timer_channels();
      update_status_flag_bits_000e8302();
      process_pending_event_flags_000d6bf2();
      poll_keypad_until_release();
      update_two_counter_deltas();
      update_camera_state_flags();
      check_state_and_dispatch();
      FUN_000e45f4();
      check_and_run_state_transitions_000f0174();
      process_mode_transition_request();
      if ((DAT_0003c07f & 0x80) != 0) {
        uVar2 = 0;
        DAT_0003c07e = DAT_0003c07e & 0xdf;
      }
      clear_flag_and_run_cleanup();
      process_state_flags_and_dispatch_000cb0c6();
      dispatch_mode_transition_000dfc72(1,0);
      dispatch_state_transition_000dfe8e();
      if (((DAT_0003c023 & 0x20) != 0) && (DAT_0003c07e = DAT_0003c07e & 0xdf, 6 < uVar2)) {
        uVar2 = 6;
      }
      if ((DAT_0003c07e & 0x20) == 0) {
        if (uVar2 < 7) {
          uVar2 = uVar2 + 1;
        }
        else {
          DAT_0003c07e = DAT_0003c07e | 0x20;
        }
      }
      update_status_flags_000e5cc2();
      iVar1 = return_zero_stub_000e65e0();
      if (iVar1 != 0) goto LAB_000e4992;
      FUN_000e8966();
      branch_on_two_flag_states();
      iVar1 = check_and_clear_status_bits();
      if ((iVar1 != 0) &&
         ((((DAT_0003c066 & 2) != 0 || ((DAT_0003c066 & 1) == 0)) ||
          (((DAT_0003c066 & 1) != 0 && ((DAT_0003c393 & 1) == 0)))))) {
        DAT_0003c067 = DAT_0003c067 & 0xef;
        uStack_1a = 1;
        goto LAB_000e4992;
      }
      iVar1 = poll_status_with_retry_000e49a4();
      if ((iVar1 == 1) &&
         ((((DAT_0003c066 & 2) != 0 || ((DAT_0003c066 & 1) == 0)) ||
          (((DAT_0003c066 & 1) != 0 && ((DAT_0003c393 & 1) == 0)))))) {
        DAT_0003c067 = DAT_0003c067 & 0xef;
        uStack_1a = 1;
        goto LAB_000e4992;
      }
      iVar1 = poll_status_with_retry_000e4a6c();
      if ((iVar1 == 1) &&
         ((((DAT_0003c066 & 2) != 0 || ((DAT_0003c066 & 1) == 0)) ||
          (((DAT_0003c066 & 1) != 0 && ((DAT_0003c393 & 1) == 0)))))) {
        DAT_0003c067 = DAT_0003c067 & 0xef;
        uStack_1a = 1;
        goto LAB_000e4992;
      }
    }
    if (_DAT_0003f54c < 0xff82) {
      _DAT_0003f54c = _DAT_0003f54c + 0x7d;
    }
    increment_state_counters();
  } while( true );
}
