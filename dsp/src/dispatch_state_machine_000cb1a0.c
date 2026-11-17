/* @k10d dispatch_state_machine_000cb1a0 @ 0x000cb1a0
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates a complex set of status flags to select and execute one of several state
 *   transition routines.
 * summary:
 *   The function reads multiple global status bytes (DAT_0003c390-0003c394,
 *   DAT_0003c4d0-0003c4d6) to determine the current system state. Based on these
 *   conditions, it calls one of several unverified subroutines (e.g., FUN_000f641a,
 *   select_and_apply_nibble_params) and updates specific flag bits in DAT_0003c4d6 and
 *   DAT_0003c028. It acts as a central dispatcher for state changes, likely related to
 *   camera mode or exposure logic given the complexity of the conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_machine_000cb1a0(void)

{
  byte bVar1;
  
  if ((DAT_0003c1eb & 2) != 0) {
    DAT_0003c028 = DAT_0003c028 & 0xfb | 3;
  }
  update_status_byte_flags_000f661c();
  if (((DAT_0003c02f & 1) != 0) && ((DAT_0003c393 & 8) == 0)) {
    return;
  }
  if (DAT_0003c392 == '\x01') {
    FUN_000f667c();
    return;
  }
  if (DAT_0003c392 == '\x04') {
    clear_flag_and_call_two_routines_000f6722();
    return;
  }
  if ((DAT_0003c4d6 & 8) != 0) {
    FUN_000f69ca();
    return;
  }
  if (DAT_0003c390 == '\x03') {
    return;
  }
  if ((DAT_0003c390 == '\x04') && ((DAT_0003c393 & 0x10) != 0)) {
    return;
  }
  if ((DAT_0003c390 == '\x02') &&
     (((DAT_0003c394 & 0xf) >> 2 == 1 || ((DAT_0003c394 & 0xf) >> 2 == 2)))) {
    set_bit4_in_dat_0003c4bb();
    return;
  }
  if ((DAT_0003c394 & 2) == 0) {
    if ((DAT_0003c4d0 & 1) == 0) {
      if ((DAT_0003c4db & 0x80) == 0) {
        if (((((DAT_0003c393 & 0x10) == 0) && ((DAT_0003c1eb & 2) == 0)) &&
            ((DAT_0003c4d6 & 0x10) != 0)) && ((DAT_0003c391 & 1) == 0)) {
          if ((DAT_0003c4d4 & 0x40) == 0) {
            if ((DAT_0003c035 & 0x10) == 0) {
              if (((DAT_0003c440 == '\x06') || (DAT_0003c440 == '\a')) ||
                 ((DAT_0003c4db & 0x20) != 0)) {
                FUN_000f641a();
              }
              else {
                select_and_apply_nibble_params();
              }
              set_flag_by_mode_index();
              set_status_flags_by_mode();
              clear_flag_bits_and_call_two_routines();
              set_bit_7_of_0x3c4bd();
            }
            else if ((DAT_0003c4df & 0x20) == 0) {
              if (((DAT_0003c000 & 0x80) == 0) && ((DAT_0003c4de & 0x20) == 0)) {
                DAT_0003c4bd = DAT_0003c4bd | 0x40;
                set_state_flag_0x40();
                select_and_apply_nibble_pattern();
                compute_and_apply_state_params();
              }
              else {
                update_mode_dependent_flags();
                set_state_flag_0x40();
                select_and_apply_nibble_pattern();
                compute_and_apply_state_params();
                if ((DAT_0003c440 == '\x06') ||
                   ((DAT_0003c440 == '\a' || ((DAT_0003c4db & 0x20) != 0)))) {
                  if (((DAT_0003c022 & 0x20) == 0) &&
                     (((DAT_0003c030 & 1) != 0 || (DAT_0003c3af != '\x01')))) {
                    select_and_apply_nibble_params();
                  }
                  else {
                    FUN_000f641a();
                  }
                }
                else {
                  FUN_000f641a();
                }
                clear_flag_bits_and_call_two_routines();
                set_bit_7_of_0x3c4bd();
                update_status_flag_bits_000f618a();
              }
            }
            else {
              update_mode_flags_and_params();
            }
          }
          else {
            compute_and_apply_state_params();
            FUN_000f641a();
          }
          DAT_0003c4d6 = DAT_0003c4d6 | 2;
        }
        else {
          if ((DAT_0003c4d4 & 0x40) == 0) {
            if (((DAT_0003c4d6 & 0x10) == 0) || ((DAT_0003c391 & 1) != 0)) {
              if (((DAT_0003c391 & 1) != 0) && ((DAT_0003c393 & 8) != 0)) {
                if ((DAT_0003c030 & 4) != 0) {
                  DAT_0003c028 = DAT_0003c028 | 2;
                }
                if ((DAT_0003c393 & 8) != 0) {
                  DAT_0003c4d0 = DAT_0003c4d0 | 2;
                }
                FUN_000f641a();
              }
            }
            else {
              update_mode_dependent_flags();
              set_state_flag_0x40();
              select_and_apply_nibble_pattern();
              compute_and_apply_state_params();
              if (((DAT_0003c440 == '\x06') || (DAT_0003c440 == '\a')) ||
                 ((DAT_0003c4db & 0x20) != 0)) {
                if ((DAT_0003c1eb & 2) == 0) {
                  if (((DAT_0003c022 & 0x20) == 0) &&
                     (((DAT_0003c030 & 1) != 0 || (DAT_0003c3af != '\x01')))) {
                    select_and_apply_nibble_params();
                  }
                  else {
                    FUN_000f641a();
                  }
                }
                else {
                  select_and_apply_nibble_params();
                }
              }
              else {
                FUN_000f641a();
              }
              clear_flag_bits_and_call_two_routines();
              set_bit_7_of_0x3c4bd();
              update_status_flag_bits_000f618a();
            }
          }
          else {
            compute_and_apply_state_params();
            FUN_000f641a();
          }
          DAT_0003c4d6 = DAT_0003c4d6 | 2;
        }
      }
      else {
        FUN_000f683c();
      }
    }
    else {
      FUN_000f641a();
      bVar1 = DAT_0003c4b9;
      if (((DAT_0003c4db & 1) != 0) && (bVar1 = DAT_0003c4b9 | 0x40, (DAT_0003c028 & 2) == 0)) {
        bVar1 = DAT_0003c4b9 & 0xbf;
      }
      DAT_0003c4b9 = bVar1;
      DAT_0003c4d6 = DAT_0003c4d6 | 2;
    }
    DAT_0003c4a6 = DAT_0003c4a6 + '\x01';
    return;
  }
  return;
}
