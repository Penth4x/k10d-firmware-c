/* @k10d dispatch_state_transition_000c762a @ 0x000c762a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Selects and calls a specific handler function based on a complex set of state flags and
 *   mode values.
 * summary:
 *   The function checks a pointer at DAT_0003c498 and, if valid, calls
 *   call_d9ac0_with_fixed_args. It then evaluates a large decision tree using several byte-
 *   sized state variables (DAT_0003c440, DAT_0003c000, DAT_0003c4de, etc.) to determine
 *   which of several handler functions (dispatch_on_flag_zero_000c8252,
 *   clear_flags_and_dispatch, dispatch_state_update, etc.) to invoke. The logic appears to
 *   manage transitions between different operational modes or states, with specific sub-
 *   states determined by values in DAT_0003c3bd, DAT_0003c3bf, and others.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000c762a(void)

{
  if (DAT_0003c498 != '\0') {
    call_d9ac0_with_fixed_args((int)DAT_0003c498);
    if ((DAT_0003c491 & 1) == 0) {
      if ((DAT_0003c035 & 0x10) == 0) {
        if (((DAT_0003c440 != 6) && (DAT_0003c440 != 7)) && ((DAT_0003c4db & 0x20) == 0)) {
          clear_flags_and_dispatch();
        }
      }
      else if ((DAT_0003c4df & 0x20) == 0) {
        if (DAT_0003c440 == 0) {
          if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3bd == '\x01') {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3bd == '\x02') {
            adjust_clamped_counter(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 5) {
          if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3bd == '\0') {
            dispatch_state_update(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 4) {
          if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3bd == '\x04') {
            FUN_000c7eea(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 3) {
          if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3c0 == '\x02') {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3c0 == '\x04') {
            clear_flags_and_dispatch();
          }
          else {
            dispatch_state_update(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 2) {
          if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
            dispatch_on_flag_zero_000c8252();
          }
          else if (DAT_0003c3bf != '\0') {
            if (DAT_0003c3bf == '\x01') {
              dispatch_on_flag_zero_000c8252();
            }
            else if (DAT_0003c3bf == '\x03') {
              clear_flags_and_dispatch();
            }
            else {
              FUN_000c7eea(__frv_reg_unset(4));
            }
          }
        }
        else if (DAT_0003c440 == 8) {
          if ((DAT_0003c000 & 0x80) == 0) {
            if ((DAT_0003c4de & 0x20) == 0) {
              dispatch_on_flag_zero_000c8252();
            }
          }
          else if (((DAT_0003c4de & 1) == 0) && ((DAT_0003c4df & 8) == 0)) {
            dispatch_state_update(__frv_reg_unset(4));
          }
        }
        else if ((DAT_0003c440 < 9) || (0x10 < DAT_0003c440)) {
          if (DAT_0003c440 == 0x11) {
            if ((((DAT_0003c000 & 0x80) != 0) && ((DAT_0003c4de & 1) == 0)) &&
               ((DAT_0003c4df & 8) == 0)) {
              dispatch_state_update(__frv_reg_unset(4));
            }
          }
          else if (DAT_0003c440 == 7) {
            if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
              dispatch_on_flag_zero_000c8252();
            }
            else {
              dispatch_state_update(__frv_reg_unset(4));
            }
          }
          else if (DAT_0003c440 == 6) {
            if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
              dispatch_on_flag_zero_000c8252();
            }
            else if (DAT_0003c3be != '\0') {
              if (DAT_0003c3be == '\x01') {
                adjust_clamped_counter(__frv_reg_unset(4));
              }
              else {
                dispatch_on_flag_zero_000c830a();
              }
            }
          }
        }
        else if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
          dispatch_on_flag_zero_000c8252();
        }
        else if (DAT_0003c3bf == '\x03') {
          clear_flags_and_dispatch();
        }
      }
      else {
        clamp_and_store_counter(__frv_reg_unset(4));
      }
    }
    else {
      set_nibble_in_word(__frv_reg_unset(4));
    }
  }
  return;
}
