/* @k10d update_state_machine_flags @ 0x000e0a8a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple status flags to set a state variable and calls associated handlers.
 * summary:
 *   The function branches on bit 7 of DAT_0003c004. In the else branch, it performs a
 *   complex series of checks on DAT_0003c100, DAT_0003c107, and DAT_0003f505 to determine a
 *   value for _DAT_0003c126 (ranging from 1 to 0x3018). It calls various subroutines (e.g.,
 *   FUN_000e0eb0, FUN_000e0edc) depending on the specific flag combinations. It concludes
 *   by calling dispatch_state_machine_000e1072.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_machine_flags(void)

{
  int iVar1;
  
  update_status_flags_and_call_helpers();
  reset_state_block_by_mode(0);
  busy_wait_on_mode_flag(10);
  if ((DAT_0003c004 & 0x80) == 0) {
    _DAT_0003c126 = 4;
    FUN_000e0c4e();
  }
  else {
    reset_state_block_by_mode(1);
    initialize_system_state_000e0c6e();
    dispatch_on_status_flags();
    iVar1 = subtract_popcount(DAT_0003c100 >> 3,2);
    if ((iVar1 == 0) && (iVar1 = subtract_popcount(DAT_0003c10f & 7,2), iVar1 == 0)) {
      if (((DAT_0003c100 & 7) == 0) ||
         (((DAT_0003c107 & 0x20) != 0 && ((DAT_0003f505 & 0x10) != 0)))) {
        _DAT_0003c126 = 8;
      }
      else {
        _DAT_0003c126 = 0x28;
        initialize_state_variables_000e0f4a();
      }
      if ((DAT_0003c107 & 0x20) != 0) {
        if (_DAT_0003c126 == 8) {
          FUN_000e0eb0();
          if (((DAT_0003c114 & 0x80) == 0) || ((DAT_0003f505 & 4) != 0)) {
            if ((DAT_0003c114 & 0x20) == 0) {
              _DAT_0003c126 = 0x18;
            }
            else {
              FUN_000e0edc();
              _DAT_0003c126 = 0x1018;
              if ((DAT_0003f3f2 & 2) == 0) {
                if ((DAT_0003c143 & 0x40) != 0) {
                  _DAT_0003c126 = 0x3018;
                }
              }
              else {
                DAT_0003c128 = 0;
              }
            }
          }
          else {
            _DAT_0003c126 = 0x98;
          }
        }
        else if (((DAT_0003f505 & 4) == 0) && ((DAT_0003f505 & 8) == 0)) {
          FUN_000e0d2a();
          FUN_000e0ec6();
          _DAT_0003c126 = 0x198;
        }
      }
    }
    else {
      _DAT_0003c126 = 1;
    }
    dispatch_on_flag_bits_000e0d92();
  }
  dispatch_state_machine_000e1072();
  return;
}
