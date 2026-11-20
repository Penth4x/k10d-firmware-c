/* @k10d process_state_transition_000e3fe0 @ 0x000e3fe0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates multiple status flags and enters a polling loop until a condition is met.
 * summary:
 *   The function manipulates several global status bytes (DAT_0003c020, DAT_0003c066,
 *   DAT_0003c067, etc.) using bitwise operations. It conditionally calls various
 *   subroutines based on these flags and then enters a `while(true)` loop that repeatedly
 *   calls `check_and_run_state_transitions_000e6426` until it returns 1. The loop body
 *   includes calls to `update_low_address_byte_state`, `configure_timer_channels`, and
 *   others, suggesting a wait or state-machine processing step. No specific hardware
 *   registers or known subsystems are directly identifiable from the pseudocode alone.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void process_state_transition_000e3fe0(void)

{
  int iVar1;
  
  DAT_0003c020 = DAT_0003c020 | 8;
  clear_flag_bits_in_globals_000e5f86();
  DAT_0003c02b = DAT_0003c02b & 0xfd;
  call_subroutine_with_arg_9();
  DAT_0003c067 = DAT_0003c067 & 0xfd;
  update_low_address_byte_state();
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c067 = DAT_0003c067 & 0xef;
  }
  else {
    check_state_and_dispatch();
    if (((DAT_0003c066 & 2) == 0) && ((DAT_0003c395 & 0x20) == 0)) {
      if ((DAT_0003c330 & 0x80) != 0) {
        DAT_0003c330 = DAT_0003c330 & 0x7f;
        DAT_0003c2ca = 0;
        FUN_000d611c();
      }
      call_subroutine_with_0x40();
      FUN_000d5fbe();
      call_subroutine_with_arg_0x42();
    }
    update_camera_state_flags();
    clear_bit_and_branch_on_flags();
    dispatch_mode_transition_000dfc72(1,0);
    toggle_status_flags_and_wait();
  }
  if (((DAT_0003c030 & 4) != 0) || ((DAT_0003c067 & 0x10) != 0)) {
    clear_status_flag_bits_000e63c2();
  }
  update_status_flags_000e62f4();
  if ((((((DAT_0003c030 & 4) == 0) && ((DAT_0003c066 & 0x10) != 0)) && ((DAT_0003c02f & 1) == 0)) &&
      ((DAT_0003c066 & 0x40) == 0)) &&
     (((DAT_0003c072 != '\0' || (DAT_0003c073 != '\0')) || (DAT_0003c074 != '\0')))) {
    initialize_status_flags_000e759a();
    DAT_0003c075 = DAT_0003c075 & 0xf0 | 1;
  }
  else {
    DAT_000000f6 = 0;
    DAT_0003c066 = DAT_0003c066 & 0xdf;
    DAT_0003c072 = '\0';
    DAT_0003c073 = '\0';
    DAT_0003c074 = '\0';
    DAT_0003c075 = DAT_0003c075 & 0xf0;
  }
  DAT_0003c07f = DAT_0003c07f & 0xfd;
  if (((DAT_0003c030 & 4) == 0) && ((DAT_0003c066 & 0x10) != 0)) {
    DAT_0003c07f = DAT_0003c07f | 2;
    DAT_0003c075 = DAT_0003c075 & 0xf0 | 1;
  }
  if ((DAT_0003c066 & 0x40) != 0) {
    DAT_0003c066 = DAT_0003c066 & 0xbf;
  }
  DAT_0003c07e = DAT_0003c07e & 0xcf;
  DAT_0003c081 = 0;
  clear_status_flag_bits_000e6514();
  DAT_0003c1ea = DAT_0003c1ea & 0xbf;
  DAT_0003c05d = DAT_0003c05d & 0xbd;
  DAT_0000048c = 0;
  while( true ) {
    update_low_address_byte_state();
    configure_timer_channels();
    iVar1 = check_and_run_state_transitions_000e6426();
    if (iVar1 == 1) break;
    if (((DAT_0003c030 & 4) != 0) || ((DAT_0003c032 & 4) != 0)) {
      clear_status_flag_bits_000e63c2();
      DAT_0003c075 = DAT_0003c075 & 0xf0;
    }
    poll_keypad_until_release();
    update_two_counter_deltas();
    update_camera_state_flags();
    process_state_flags_and_dispatch_000cb0c6();
    dispatch_mode_transition_000dfc72(1,0);
    initialize_camera_state();
    increment_state_counters();
  }
  clear_status_flag_bits_000e63c2();
  update_low_address_byte_state();
  DAT_0003c020 = DAT_0003c020 & 0xf7;
  return;
}
