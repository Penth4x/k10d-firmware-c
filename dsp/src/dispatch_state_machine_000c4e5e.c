/* @k10d dispatch_state_machine_000c4e5e @ 0x000c4e5e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Routes execution to different handler functions based on multiple flag bits in global
 *   state variables.
 * summary:
 *   The function reads several flag bits from DAT_0003c58b, DAT_0003c582, and DAT_0003c127
 *   to determine which branch to take. It calls different pairs of functions (e.g.,
 *   adjust_clamped_value_and_notify/adjust_clamped_offset_value_000c22d2 or
 *   update_clamped_value_and_flags/compute_clamped_offset_and_update_registers) depending
 *   on the value of DAT_0003c440 and the flag states. It also updates several global
 *   variables (DAT_0003c492, DAT_0003c493, DAT_0003c4de) and calls
 *   dispatch_state_handler_000c599c or decrement_state_counters at the end.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000c4e5e(void)

{
  update_status_flags_from_byte();
  dispatch_state_machine_000c4020();
  if ((DAT_0003c58b & 1) == 0) {
    if ((DAT_0003c582 & 4) != 0) {
      _DAT_0003c562 = _DAT_0003c562 + _DAT_0003c57c;
    }
    dispatch_state_handler_000c599c();
    if (DAT_0003c440 == '\a') {
      adjust_clamped_value_and_notify();
    }
    else {
      adjust_clamped_offset_value_000c22d2();
    }
  }
  else {
    if ((DAT_0003c582 & 4) == 0) {
      compute_shift_parameter(DAT_0003c471);
      FUN_000c145c();
    }
    else {
      _DAT_0003c562 = _DAT_0003c562 + _DAT_0003c57c;
    }
    if ((((DAT_0003c127 & 4) == 0) && ((DAT_0003c127 & 8) == 0)) || ((DAT_0003c129 & 1) != 0)) {
      DAT_0003c492 = 0;
      if ((((DAT_0003c193 & 1) == 0) && ((DAT_0003c004 & 2) == 0)) || ((DAT_0003c58b & 2) == 0)) {
        DAT_0003c493 = 0;
      }
      else {
        if (((DAT_0003c46e == '\x05') || (DAT_0003c46e == '\x06')) || (DAT_0003c46e == '\a')) {
          DAT_0003c493 = 0;
        }
        else {
          DAT_0003c493 = 0xff;
        }
        DAT_0003c588 = DAT_0003c588 & 0xdf;
      }
      DAT_0003c4de = DAT_0003c4de & 0xe7;
      dispatch_on_state_value_000c3740();
      if (DAT_0003c440 == '\a') {
        update_clamped_value_and_flags();
      }
      else {
        compute_clamped_offset_and_update_registers();
      }
    }
    else {
      dispatch_state_transition_000c4fc0();
    }
    if ((DAT_0003c395 & 0x40) != 0) {
      DAT_0003c493 = 0xff;
      DAT_0003c492 = 0xff;
      DAT_0003c4de = DAT_0003c4de & 0xe7;
      DAT_0003c588 = DAT_0003c588 & 0x9f;
      DAT_0003c58b = DAT_0003c58b & 0xbe;
      dispatch_state_handler_000c599c();
      if (DAT_0003c440 == '\a') {
        adjust_clamped_value_and_notify();
      }
      else {
        adjust_clamped_offset_value_000c22d2();
      }
    }
  }
  if ((DAT_0003c58b & 8) != 0) {
    decrement_state_counters();
  }
  return;
}
