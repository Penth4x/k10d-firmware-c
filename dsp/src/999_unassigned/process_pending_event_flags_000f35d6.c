/* @k10d process_pending_event_flags_000f35d6 @ 0x000f35d6
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a multi-byte flag structure and executes corresponding handler functions or
 *   state updates for each set bit.
 * summary:
 *   The function branches on DAT_0003c4d6; if bit 0 is clear, it calls a fixed sequence of
 *   initialization functions. Otherwise, it iterates through bits in DAT_0003c412 through
 *   DAT_0003c41b, calling specific handlers (e.g., map_key_state_to_flag,
 *   copy_dat_0003c46c_to_0003c46b) or copying values between adjacent globals for each set
 *   bit. It clears the flag bytes and sets bit 4 of DAT_0003c4d6 upon completion. Finally,
 *   it compares DAT_0003c447 and DAT_0003c448, resetting _DAT_0003c024 if they differ.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_pending_event_flags_000f35d6(void)

{
  if ((DAT_0003c4d6 & 1) == 0) {
    compute_state_flag_from_bits();
    check_timer_state_flags();
    copy_dat_values_by_mode();
    update_status_flags_000f3880();
    map_key_state_to_flag();
    copy_dat_0003c46c_to_0003c46b();
    update_flag_bit_from_byte();
    update_flag_byte_bits();
    clear_flag_bits_if_condition_met_000f4184();
  }
  else {
    if ((DAT_0003c412 & 4) != 0) {
      DAT_0003c483 = DAT_0003c485;
      DAT_0003c041 = 0;
    }
    if ((DAT_0003c412 & 8) != 0) {
      map_key_state_to_flag();
    }
    if ((DAT_0003c412 & 0x10) != 0) {
      DAT_0003c48e = DAT_0003c48f;
      DAT_0003c48d = DAT_0003c48f;
    }
    if ((DAT_0003c412 & 0x20) != 0) {
      copy_dat_0003c46c_to_0003c46b();
    }
    if ((DAT_0003c415 & 0x80) != 0) {
      DAT_0003c444 = DAT_0003c3bc;
    }
    if ((DAT_0003c417 & 1) != 0) {
      update_flag_byte_bits();
      DAT_0003c041 = 0;
    }
    if ((DAT_0003c417 & 2) != 0) {
      update_flag_bit_from_byte();
    }
    if ((((DAT_0003c417 & 4) != 0) || ((DAT_0003c417 & 8) != 0)) || ((DAT_0003c417 & 0x10) != 0)) {
      update_status_flag_bits_000f3996();
    }
    if ((DAT_0003c417 & 0x20) != 0) {
      update_state_flags_and_counters_000f3cc6();
    }
    if ((DAT_0003c417 & 0x40) != 0) {
      DAT_0003c041 = 0;
      DAT_0003c453 = DAT_0003c454;
      DAT_0003c452 = DAT_0003c454;
      quantize_state_value();
      map_index_to_level(DAT_0003c454);
      DAT_0003c44e = DAT_0003c450;
      map_index_to_dat_0003c453(DAT_0003c450);
      DAT_0003c452 = DAT_0003c453;
    }
    if ((DAT_0003c417 & 0x80) != 0) {
      DAT_0003c041 = 0;
      DAT_0003c457 = DAT_0003c458;
      DAT_0003c455 = DAT_0003c458;
      update_state_flags_000f37ec();
      DAT_0003c44c = DAT_0003c44a;
    }
    if ((DAT_0003c418 & 1) != 0) {
      toggle_flag_bit_3();
    }
    if ((DAT_0003c418 & 2) != 0) {
      DAT_0003c45d = DAT_0003c460;
    }
    if ((DAT_0003c418 & 4) != 0) {
      copy_word_to_two_bytes();
    }
    if ((DAT_0003c418 & 8) != 0) {
      copy_byte_to_two_globals_000f3d86();
    }
    if ((DAT_0003c418 & 0x10) != 0) {
      copy_byte_to_two_globals_000f3d9c();
    }
    if ((DAT_0003c418 & 0x20) != 0) {
      select_and_store_value_000f3df0();
    }
    if ((DAT_0003c418 & 0x40) != 0) {
      select_and_store_result();
    }
    if ((DAT_0003c41a & 4) != 0) {
      FUN_000f3e40();
    }
    if ((DAT_0003c41a & 8) != 0) {
      FUN_000f3fa0();
    }
    if ((DAT_0003c41b & 0x40) != 0) {
      DAT_0003c468 = DAT_0003c469;
      compute_state_flag_from_bits();
    }
    DAT_0003c412 = 0;
    DAT_0003c413 = 0;
    DAT_0003c414 = 0;
    DAT_0003c415 = 0;
    DAT_0003c416 = 0;
    DAT_0003c417 = 0;
    DAT_0003c418 = 0;
    DAT_0003c419 = 0;
    DAT_0003c41a = 0;
    DAT_0003c41b = 0;
    DAT_0003c41c = 0;
    DAT_0003c4d6 = DAT_0003c4d6 | 0x10;
    clear_flag_bits_if_condition_met_000f4184();
  }
  if (DAT_0003c447 != DAT_0003c448) {
    _DAT_0003c024 = 0;
  }
  return;
}
