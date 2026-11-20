/* @k10d dispatch_state_transition_000c4fc0 @ 0x000c4fc0
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Routes execution to specific handler functions based on the values of several global
 *   state variables.
 * summary:
 *   The function reads multiple global variables (DAT_0003c440, DAT_0003c492, DAT_0003c493,
 *   DAT_0003c589) to determine a state or event type. It then calls one of several
 *   unverified handler functions (e.g., decrement_state_counters,
 *   handle_special_char_input, dispatch_on_state_value_000c3740) corresponding to that
 *   state. It also modifies DAT_0003c58c and conditionally calls additional handlers based
 *   on further state checks.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000c4fc0(void)

{
  if ((((DAT_0003c440 == '\0') || (DAT_0003c440 == '\x01')) || (DAT_0003c440 == '\x06')) ||
     (DAT_0003c440 == '\a')) {
    decrement_state_counters();
  }
  if ((((DAT_0003c589 & 1) == 0) ||
      (((DAT_0003c492 != '\x06' && (DAT_0003c492 != '\r')) && (DAT_0003c492 != '\x16')))) &&
     ((DAT_0003c493 != '\n' && ((DAT_0003c493 != '\x12' || (DAT_0003c46d != '\a')))))) {
    if ((DAT_0003c493 == '\b') || (DAT_0003c493 == '\t')) {
      handle_special_char_input();
    }
    else {
      dispatch_on_state_value_000c3740();
      if (DAT_0003c440 == '\a') {
        update_clamped_value_and_flags();
      }
      else {
        compute_clamped_offset_and_update_registers();
      }
    }
  }
  else {
    dispatch_state_handler_000c599c();
    if (DAT_0003c440 == '\a') {
      adjust_clamped_value_and_notify();
    }
    else {
      compute_clamped_offset_and_update_registers();
    }
    DAT_0003c58c = DAT_0003c58c & 0xfc;
    if (DAT_0003c564 < 0x81) {
      advance_state_machine_on_code();
    }
    if (DAT_0003c492 == '\x06') {
      handle_key_event_000c51dc();
    }
    else if ((DAT_0003c492 == '\r') || (DAT_0003c492 == '\x16')) {
      clear_four_status_flags_000c52f2();
    }
    else if (DAT_0003c493 == '\n') {
      handle_key_event_flags();
    }
    else if (DAT_0003c493 == '\b') {
      handle_key_event_000c53f2();
    }
    else if (DAT_0003c493 == '\x12') {
      clear_flag_if_state_in_set();
    }
    else {
      dispatch_on_state_value_000c3740();
      if (DAT_0003c440 == '\a') {
        update_clamped_value_and_flags();
      }
      else {
        compute_clamped_offset_and_update_registers();
      }
    }
  }
  return;
}
