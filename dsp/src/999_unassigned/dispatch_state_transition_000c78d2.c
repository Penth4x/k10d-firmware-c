/* @k10d dispatch_state_transition_000c78d2 @ 0x000c78d2
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Routes execution to one of several handler functions based on a complex hierarchy of
 *   state flags and counters.
 * summary:
 *   The function reads a primary state value from DAT_0003c499 and a secondary counter from
 *   DAT_0003c440. It uses a nested decision tree involving multiple flag bytes
 *   (DAT_0003c000, DAT_0003c035, DAT_0003c4df) to select one of eight callee functions. The
 *   specific handler chosen depends on the combination of the counter value and various
 *   sub-state indicators.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_state_transition_000c78d2(void)

{
  int iVar1;
  
  if (DAT_0003c499 != '\0') {
    iVar1 = call_d9ac0_with_fixed_args((int)DAT_0003c499);
    if ((DAT_0003c4df & 0x20) == 0) {
      if ((DAT_0003c000 & 0x80) != 0) {
        if (DAT_0003c440 == 0) {
          if (DAT_0003c3bd == '\x01') {
            if ((DAT_0003c035 & 0x10) != 0) {
              adjust_clamped_counter(-iVar1);
            }
          }
          else if ((DAT_0003c3bd == '\x02') && ((DAT_0003c035 & 0x10) != 0)) {
            dispatch_on_flag_zero_000c8252();
          }
        }
        else if (DAT_0003c440 == 5) {
          if (DAT_0003c3bd == '\x04') {
            dispatch_state_update(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 4) {
          if (DAT_0003c3bd == '\0') {
            FUN_000c7eea(__frv_reg_unset(4));
          }
        }
        else if (DAT_0003c440 == 3) {
          if (DAT_0003c3c0 != '\0') {
            if (DAT_0003c3c0 == '\x01') {
              if ((DAT_0003c035 & 0x10) != 0) {
                dispatch_on_flag_zero_000c8252();
              }
            }
            else if (DAT_0003c3c0 == '\x02') {
              if ((DAT_0003c035 & 0x10) != 0) {
                dispatch_state_update(__frv_reg_unset(4));
              }
            }
            else if (DAT_0003c3c0 == '\x03') {
              if ((DAT_0003c035 & 0x10) != 0) {
                clear_flags_and_dispatch();
              }
            }
            else if (DAT_0003c3c0 == '\x04') {
              if ((DAT_0003c035 & 0x10) != 0) {
                dispatch_state_update(__frv_reg_unset(4));
              }
            }
            else {
              dispatch_state_update(__frv_reg_unset(4));
            }
          }
        }
        else if (DAT_0003c440 == 2) {
          if (DAT_0003c3bf == '\0') {
            if ((DAT_0003c035 & 0x10) != 0) {
              FUN_000c7eea(__frv_reg_unset(4));
            }
          }
          else if (DAT_0003c3bf == '\x02') {
            if ((DAT_0003c035 & 0x10) != 0) {
              dispatch_on_flag_zero_000c8252();
            }
          }
          else if (DAT_0003c3bf == '\x01') {
            if ((DAT_0003c035 & 0x10) != 0) {
              FUN_000c7eea(__frv_reg_unset(4));
            }
          }
          else if (DAT_0003c3bf == '\x04') {
            if ((DAT_0003c035 & 0x10) != 0) {
              clear_flags_and_dispatch();
            }
          }
          else if (DAT_0003c3bf == '\x03') {
            if ((DAT_0003c035 & 0x10) != 0) {
              FUN_000c7eea(__frv_reg_unset(4));
            }
          }
          else {
            FUN_000c7eea(__frv_reg_unset(4));
          }
        }
        else if ((DAT_0003c440 < 9) || (0x10 < DAT_0003c440)) {
          if (DAT_0003c440 == 8) {
            if (((DAT_0003c035 & 0x10) != 0) || ((DAT_0003c4db & 0x20) != 0)) {
              if ((DAT_0003c4de & 1) == 0) {
                if ((DAT_0003c4df & 8) == 0) {
                  FUN_000c7eea(__frv_reg_unset(4));
                }
                else {
                  FUN_000c7eea(__frv_reg_unset(4));
                }
              }
              else if ((DAT_0003c036 & 0x80) != 0) {
                FUN_000c7eea(__frv_reg_unset(4));
              }
            }
          }
          else if (DAT_0003c440 != 0x11) {
            if (DAT_0003c440 == 7) {
              if (((DAT_0003c035 & 0x10) != 0) || ((DAT_0003c4db & 0x20) != 0)) {
                FUN_000c7eea(__frv_reg_unset(4));
              }
            }
            else if (DAT_0003c440 == 6) {
              if (DAT_0003c3be == '\x02') {
                if ((DAT_0003c035 & 0x10) != 0) {
                  adjust_clamped_counter(-iVar1);
                }
              }
              else if ((DAT_0003c035 & 0x10) != 0) {
                dispatch_on_flag_zero_000c830a();
              }
            }
          }
        }
        else if ((DAT_0003c3bf == '\x04') && ((DAT_0003c035 & 0x10) != 0)) {
          clear_flags_and_dispatch();
        }
      }
    }
    else if (DAT_0003c44a != '\0') {
      FUN_000c841e(__frv_reg_unset(4));
    }
  }
  return;
}
