/* @k10d run_camera_state_loop_000e4eaa @ 0x000e4eaa
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Executes a continuous state machine loop that updates camera status flags and calls
 *   subsystem handlers based on current conditions.
 * summary:
 *   The function initializes several global state variables and enters an infinite loop.
 *   Each iteration calls a sequence of handler functions, checks status flags in
 *   DAT_0003c023 and DAT_0003f50e, and conditionally invokes further processing or exits
 *   the loop. It manipulates bit flags in DAT_0003c020, DAT_0003c066, and DAT_0003c07e to
 *   track state transitions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void run_camera_state_loop_000e4eaa(void)

{
  short sVar1;
  int iVar2;
  
  DAT_0003c020 = DAT_0003c020 | 0x40;
  handle_15bit_event_code(*(uint16_t *)(&DAT_000fc5e0 + (uint)DAT_0003c467 * 2));
  if ((DAT_00000403 & 0x6c) != 0) {
    clear_and_reset_flag_bytes();
  }
  DAT_0003c066 = DAT_0003c066 & 0xcf;
  DAT_0003c07e = DAT_0003c07e & 0xef | 0x20;
  _DAT_0003ce7a = 0;
  update_state_flags_and_status_byte(0);
  update_state_word_from_flags();
  DAT_000000d8 = 0;
  DAT_000000ea = 0;
  DAT_000000e8 = 0;
  DAT_000000ec = 3;
  DAT_000000db = 0xb;
  do {
    update_low_address_byte_state();
    configure_timer_channels();
    update_status_flag_bits_000e8302();
    dispatch_on_flag_bit2();
    update_status_flags_000e62f4();
    update_two_counter_deltas();
    update_camera_state_flags();
    iVar2 = FUN_000e62be();
    if ((iVar2 != 0) || (iVar2 = check_two_flag_bits_clear(), iVar2 != 0)) {
      if ((DAT_0003f55e & 0x10) != 0) {
        FUN_000ddea0();
      }
LAB_000e51c8:
      DAT_0003c020 = DAT_0003c020 & 0xbf;
      return;
    }
    FUN_000e8966();
    branch_on_two_flag_states();
    check_and_run_gated_sequence();
    dispatch_state_transition_000dfe8e();
    update_status_flags_000e5cc2();
    if ((((DAT_0003ce01 & 1) == 0) || ((DAT_0003ce05 & 1) != 0)) && ((DAT_0003ce06 & 1) == 0)) {
      if (((DAT_0003c023 & 4) != 0) && ((DAT_0003f50e & 0x20) == 0)) {
        while (((DAT_0003c023 & 4) != 0 && ((DAT_00000147 & 0x10) == 0))) {
          adjust_and_call_subroutine();
        }
        clear_state_flags_and_notify();
        sVar1 = _DAT_0003ce18;
        do {
          adjust_and_call_subroutine();
        } while ((_DAT_0003ce18 - sVar1 & 0xffU) < (ushort)DAT_0003f51c);
      }
      FUN_000cdeb8();
      empty_stub_000e25c8();
      enter_infinite_loop_000e25ca();
      enter_infinite_loop_000e2622();
      check_and_run_gated_sequence();
      iVar2 = check_unknown_flag_condition();
      if (iVar2 == 0) {
        DAT_0003c07f = DAT_0003c07f & 0xf7;
      }
      if ((DAT_0003c07f & 8) == 0) {
        if ((((DAT_0003f55e & 0x10) == 0) && ((DAT_0003c02b & 8) == 0)) &&
           ((DAT_0003c07e & 0x40) == 0)) {
          sample_eight_channel_min_max_000e267a();
        }
        else {
          sample_eight_channel_min_max_000e2a42(0);
        }
        check_and_run_gated_sequence();
      }
      else {
        DAT_0003c02b = DAT_0003c02b & 0xf7;
      }
      FUN_000cdeb8();
      FUN_000d9e2c();
      process_camera_state_flags_000c4a56();
      dispatch_mode_transition_sequence();
      if (((DAT_0003c392 == '\x02') && ((DAT_0003c066 & 1) != 0)) &&
         ((_DAT_0003c024 & 0x1ff) == 0x1ff)) {
        update_state_flags_and_dispatch();
      }
      if ((DAT_0003f504 & 1) != 0) {
        process_pending_event_flags_000d6bf2();
        poll_keypad_until_release();
      }
    }
    else {
      process_camera_state_flags_000c4a56();
    }
    check_state_and_dispatch();
    if ((((DAT_0003c038 & 0x80) == 0) || ((DAT_0003f3e1 & 0x80) != 0)) || ((DAT_0003c066 & 1) == 0))
    {
      dispatch_state_transition_000f01dc(1);
    }
    else if (_DAT_0003c024 == 0) {
      while ((DAT_00000005 & 2) != 0) {
        iVar2 = check_two_flag_conditions_000e6c7e();
        if (iVar2 == 1) {
          DAT_0000000a = DAT_0000000a & 0x7f;
          break;
        }
        if ((DAT_00000001 & 4) != 0) break;
        FUN_000cdeb8();
      }
      store_param_and_call_sequence(1);
    }
    else {
      DAT_0003c038 = DAT_0003c038 & 0x7f;
    }
    process_mode_transition_request();
    clear_flag_and_run_cleanup();
    process_state_flags_and_dispatch_000cb0c6();
    dispatch_mode_transition_000dfc72(1,0);
    if (((DAT_0003c023 & 4) == 0) && ((DAT_0003f50e & 1) != 0)) {
      update_value_if_flags_set();
    }
    else {
      update_value_if_flags_set();
    }
    process_pending_state_flags();
    call_if_flag_0x12_set();
    FUN_000e68ca();
    iVar2 = poll_status_until_clear();
    if (iVar2 == 0) {
      run_event_dispatch_loop();
    }
    DAT_0003c022 = DAT_0003c022 & 0xfd;
    iVar2 = decrement_and_check_counter();
    if (iVar2 == 0) {
      if ((DAT_0003f55e & 0x10) != 0) {
        FUN_000ddea0();
      }
      goto LAB_000e51c8;
    }
    increment_state_counters();
  } while( true );
}
