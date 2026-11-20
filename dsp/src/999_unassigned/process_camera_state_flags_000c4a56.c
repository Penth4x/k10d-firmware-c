/* @k10d process_camera_state_flags_000c4a56 @ 0x000c4a56
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates internal state flags and calls a sequence of subsystem handlers based on
 *   complex conditional logic.
 * summary:
 *   The function initializes several global state variables to zero and then evaluates a
 *   large decision tree involving multiple flag registers (DAT_0003c4d0, DAT_0003c4d1,
 *   etc.). Depending on the state, it calls various unverified helper functions and
 *   modifies specific bits in the state registers. It concludes by calling a final set of
 *   handlers and updating additional status flags.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_camera_state_flags_000c4a56(void)

{
  byte bVar1;
  
  reset_flag_after_call();
  clear_byte_array_if_flag_unset();
  DAT_0003c58a = 0;
  DAT_0003c58b = 0;
  DAT_0003c58c = 0;
  DAT_0003c580 = 0;
  DAT_0003c581 = 0;
  DAT_0003c582 = 0;
  DAT_0003c5a2 = 0;
  _DAT_0003c57c = 0;
  DAT_0003c57e = DAT_0003c3a3;
  compute_flag_adjusted_offsets();
  split_and_store_value();
  clamp_value_to_range_000c5594();
  clamp_min_to_28();
  FUN_000c1954();
  if ((DAT_0003c580 & 1) == 0) {
    bVar1 = DAT_0003c4d0 & 0xbf;
    if ((((DAT_0003c022 & 2) == 0) && ((DAT_0003c4d1 & 1) != 0)) && ((DAT_0003c4d1 & 8) != 0)) {
      DAT_0003c4d0 = bVar1;
      if ((DAT_0003c4d3 & 4) != 0) {
        quantize_four_sample_deltas(0x3c500,&DAT_0003c520,0x3c530);
      }
      compute_buffer_size_and_flags();
      if (((DAT_0003c127 & 8) == 0) || ((DAT_0003c4d3 & 4) != 0)) {
        transform_four_byte_blocks(&DAT_0003c520,0x3c550);
      }
      if (DAT_0003c440 == '\a') {
        DAT_0003c581 = DAT_0003c581 | 0x40;
      }
      compute_shift_parameter(DAT_0003c471);
      set_flag_if_below_threshold();
      FUN_000c145c();
    }
    else if (((((DAT_0003c022 & 2) == 0) && ((DAT_0003c4d1 & 1) == 0)) &&
             (((DAT_0003c4d1 & 8) == 0 && (((DAT_0003c4d0 & 0x80) == 0 && (DAT_0003c3b2 == '\x01')))
              ))) && (((DAT_0003ce06 & 0x20) != 0 &&
                      (((DAT_0003ce06 & 0x40) != 0 && ((DAT_0003ce08 & 8) == 0)))))) {
      if ((DAT_0003c4de & 2) == 0) {
        DAT_0003c4d0 = bVar1;
        compute_buffer_size_and_flags();
        if ((DAT_0003c127 & 8) == 0) {
          transform_four_byte_blocks(&DAT_0003c520,0x3c550);
        }
        compute_shift_parameter(DAT_0003c471);
        set_flag_if_below_threshold();
        FUN_000c145c();
        DAT_0003c4d0 = DAT_0003c4d0 | 0x40;
      }
      else {
        DAT_0003c4d1 = DAT_0003c4d1 & 0xf7;
        if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
          DAT_0003c4d1 = DAT_0003c4d1 | 8;
          DAT_0003c4d3 = DAT_0003c4d3 | 4;
        }
        DAT_0003c4d0 = bVar1;
        quantize_four_sample_deltas(0x3c500,&DAT_0003c520,0x3c530);
        compute_buffer_size_and_flags();
        if ((DAT_0003c4d3 & 4) != 0) {
          transform_four_byte_blocks(&DAT_0003c520,0x3c550);
        }
        compute_shift_parameter(DAT_0003c471);
        set_flag_if_below_threshold();
        FUN_000c145c();
        DAT_0003c4d0 = DAT_0003c4d0 | 0x40;
        DAT_0003c581 = DAT_0003c581 | 0x40;
      }
    }
    else {
      DAT_0003c4d0 = bVar1;
      quantize_four_sample_deltas(0x3c500,&DAT_0003c520,0x3c530);
      compute_buffer_size_and_flags();
      transform_four_byte_blocks(&DAT_0003c520,0x3c550);
      compute_shift_parameter(DAT_0003c471);
      set_flag_if_below_threshold();
      FUN_000c145c();
      bVar1 = DAT_0003c4d1 & 0xf7;
      DAT_0003c4d3 = DAT_0003c4d3 & 0xfb;
      if ((DAT_0003c4d1 & 1) == 0) {
        DAT_0003c4d1 = bVar1;
        if (((((DAT_0003c3b2 == '\x01') && ((DAT_0003c4d0 & 0x80) == 0)) &&
             ((DAT_0003ce06 & 0x20) != 0)) &&
            (((DAT_0003ce06 & 0x40) != 0 && ((DAT_0003ce08 & 8) == 0)))) &&
           (((DAT_0003c440 == '\b' && (((DAT_0003c4de & 1) == 0 && ((DAT_0003c4df & 8) == 0)))) ||
            (DAT_0003c440 == '\a')))) {
          DAT_0003c4d1 = bVar1 | 8;
          DAT_0003c4d3 = DAT_0003c4d3 | 4;
        }
      }
      else {
        DAT_0003c4d1 = bVar1 | 8;
        if ((((DAT_0003c440 == '\b') && ((DAT_0003c4de & 1) == 0)) && ((DAT_0003c4df & 8) == 0)) ||
           (DAT_0003c440 == '\a')) {
          DAT_0003c4d3 = DAT_0003c4d3 | 4;
        }
      }
      if ((DAT_0003c4d3 & 4) == 0) {
        _DAT_0003c58e = (ushort)DAT_0003c564 + (ushort)DAT_0003c565;
      }
    }
    if ((DAT_0003c5a2 & 2) != 0) {
      DAT_0003c5a2 = DAT_0003c5a2 | 1;
    }
  }
  update_status_flag_bits_000c35c2();
  if ((DAT_0003c036 & 1) == 0) {
    check_two_flag_conditions_000c366e();
  }
  check_and_call_subroutine();
  clear_flag_and_conditional_call();
  FUN_000c145c();
  dispatch_state_machine_000c4e5e();
  if (((DAT_0003c127 & 8) != 0) && (DAT_0003c565 <= DAT_0003c576)) {
    DAT_0003c582 = DAT_0003c582 | 4;
    _DAT_0003c57c = quantize_value_to_steps();
    dispatch_state_machine_000c4e5e();
  }
  if (((DAT_0003c3b6 == '\x01') && ((DAT_0003c036 & 1) == 0)) && ((DAT_0003c198 & 1) == 0)) {
    DAT_0003c58b = DAT_0003c58b & 0xbf | 0x80;
  }
  if ((DAT_0003c58b & 0x40) == 0) {
    DAT_0003c493 = -1;
  }
  compute_and_store_offset_value();
  update_flag_based_on_state_000c1ee4();
  compute_signed_byte_state();
  update_flag_bits_0x20_and_0x20();
  FUN_000c209e();
  initialize_status_flags_000c8950();
  DAT_0003c57f = DAT_0003c566;
  if (((DAT_0003c589 & 1) != 0) &&
     (((DAT_0003c492 == '\v' || (DAT_0003c492 == '\f')) ||
      ((DAT_0003c492 == '\r' || ((DAT_0003c492 == '\x0f' || (DAT_0003c492 == '\x16')))))))) {
    DAT_0003c07e = DAT_0003c07e & 0xf9;
  }
  if (((DAT_0003c493 == '\b') || (DAT_0003c493 == '\t')) || (DAT_0003c493 == '\n')) {
    DAT_0003c07e = DAT_0003c07e & 0xf9;
  }
  return;
}
