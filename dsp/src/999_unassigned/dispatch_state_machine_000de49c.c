/* @k10d dispatch_state_machine_000de49c @ 0x000de49c
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Processes a multi-bit state machine by branching on status flags and invoking specific
 *   handler functions.
 * summary:
 *   The function reads two byte-sized state variables (DAT_0003c800 and DAT_0003c801) and
 *   uses a nested if-else structure to determine the current operational mode. Based on
 *   specific bit combinations, it updates the state flags and calls various unverified
 *   handler functions (e.g., clear_state_block, step_linear_interpolation). It also manages
 *   a counter (_DAT_0003c89c) and conditionally invokes a final set of functions
 *   (write_two_halfwords_to_array, etc.) if specific conditions are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000de49c(void)

{
  if (DAT_0003c800 == 0) {
    if (DAT_0003c801 != 0) {
      DAT_0003c801 = 0;
      set_bit_1_and_5_in_three_flags();
      set_bit7_and_notify();
    }
  }
  else {
    compute_position_deltas();
    if ((DAT_0003c800 & 1) == 0) {
      if ((DAT_0003c800 & 2) == 0) {
        if ((DAT_0003c800 & 4) == 0) {
          if ((((DAT_0003c801 & 1) != 0) || ((DAT_0003c801 & 2) != 0)) || ((DAT_0003c801 & 4) != 0))
          {
            DAT_0003c801 = DAT_0003c801 & 0xf8;
          }
        }
        else {
          if ((DAT_0003c801 & 4) == 0) {
            DAT_0003c801 = DAT_0003c801 & 0xfc | 4;
            clear_bit7_and_notify();
          }
          FUN_000dbc14();
        }
      }
      else {
        if ((DAT_0003c801 & 2) == 0) {
          if ((DAT_0003c801 & 4) == 0) {
            clear_state_block();
            if ((DAT_0003f55e & 0x10) == 0) {
              clear_six_word_globals_000dbb52();
              clear_tenth_global_words();
            }
            clear_bit7_and_notify();
          }
          DAT_0003c80f = DAT_0003c80f & 0x3f;
          DAT_0003c805 = DAT_0003c805 | 0x40;
          DAT_0003c801 = DAT_0003c801 & 0xfa | 2;
        }
        FUN_000dbc14();
      }
    }
    else {
      if ((DAT_0003c801 & 1) == 0) {
        DAT_0003c801 = DAT_0003c801 & 0xf9 | 1;
        clear_state_block();
        if ((DAT_0003f55e & 0x10) == 0) {
          clear_six_word_globals_000dbb52();
          clear_tenth_global_words();
        }
        set_bit7_and_notify();
        DAT_0003c80f = DAT_0003c80f & 0x3f;
        DAT_0003c805 = DAT_0003c805 | 0x40;
      }
      FUN_000dbc14();
    }
    if ((DAT_0003c800 & 8) == 0) {
      if ((DAT_0003c800 & 0x80) == 0) {
        if ((DAT_0003c800 & 0x10) == 0) {
          if ((DAT_0003c800 & 0x20) == 0) {
            if ((DAT_0003c800 & 0x40) == 0) {
              if ((((DAT_0003c801 & 0x10) != 0) || ((DAT_0003c801 & 8) != 0)) ||
                 (((DAT_0003c801 & 0x40) != 0 ||
                  (((DAT_0003c801 & 0x20) != 0 || ((DAT_0003c801 & 0x80) != 0)))))) {
                set_bit_1_and_5_in_three_flags();
                DAT_0003c801 = DAT_0003c801 & 7;
              }
            }
            else {
              if ((DAT_0003c801 & 0x40) == 0) {
                DAT_0003c801 = DAT_0003c801 & 0x47 | 0x40;
                step_linear_interpolation(0,(int)_DAT_0003f558,(int)_DAT_0003f55a,(int)_DAT_0003f55c);
              }
              step_linear_interpolation(1,(int)_DAT_0003f558,(int)_DAT_0003f55a,(int)_DAT_0003f55c);
              call_two_unnamed_helpers();
            }
          }
          else {
            if ((DAT_0003c801 & 0x20) == 0) {
              DAT_0003c801 = DAT_0003c801 & 0x27 | 0x20;
              apply_fixed_point_transform(0,(int)_DAT_0003f558,(int)_DAT_0003f55a,(int)_DAT_0003f55c);
            }
            apply_fixed_point_transform(1,(int)_DAT_0003f558,(int)_DAT_0003f55a,(int)_DAT_0003f55c);
            call_two_unnamed_helpers();
          }
        }
        else {
          if ((DAT_0003c801 & 0x10) == 0) {
            DAT_0003c801 = DAT_0003c801 & 0x17 | 0x10;
            clear_six_word_globals_000dbb52();
            shift_two_globals_left_eight();
            FUN_000dc908();
            _DAT_0003c89c = 0;
          }
          clamp_accumulated_values();
          update_two_offset_values();
          clamp_and_flag_range_limits();
          update_flag_and_counters();
          if (((DAT_0003c805 & 0x20) == 0) && ((DAT_0003c805 & 0x10) == 0)) {
            call_two_unnamed_helpers();
          }
          else if ((DAT_0003f362 & 4) == 0) {
            call_two_unnamed_helpers();
          }
          else if ((DAT_0003c396 & 0x80) == 0) {
            dispatch_three_subcalls(0,0,0);
          }
          else {
            call_two_unnamed_helpers();
          }
          if (_DAT_0003c89c < 0x800) {
            _DAT_0003c89c = _DAT_0003c89c + 1;
          }
          if (_DAT_0003c89c < 0x200) {
            copy_three_values_by_index((int)_DAT_0003c89c);
          }
        }
      }
      else {
        if ((DAT_0003c801 & 0x80) == 0) {
          DAT_0003c801 = DAT_0003c801 & 0x87 | 0x80;
          step_3d_offset_by_table(0,0,0,0);
        }
        step_3d_offset_by_table(1,0,0,0);
        call_two_unnamed_helpers();
      }
    }
    else {
      if ((DAT_0003c801 & 8) == 0) {
        DAT_0003c801 = DAT_0003c801 & 0xf | 8;
        step_toward_target_values(0,0,0,0);
      }
      step_toward_target_values(1,0,0,0);
      call_two_unnamed_helpers();
    }
    if (((((DAT_0003f284 & 8) != 0) && ((DAT_0003c80f & 8) != 0)) && ((DAT_0003c804 & 4) != 0)) &&
       (_DAT_0003c89e < 0x512)) {
      write_two_halfwords_to_array((int)(short)_DAT_0003c89e);
      write_three_words_to_buffer_000f2100((int)(short)_DAT_0003c89e);
      clamp_and_store_two_values_000f2358((int)(short)_DAT_0003c89e);
    }
  }
  return;
}
