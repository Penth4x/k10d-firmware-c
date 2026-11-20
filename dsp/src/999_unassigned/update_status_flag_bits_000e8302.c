/* @k10d update_status_flag_bits_000e8302 @ 0x000e8302
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Synchronizes multiple status flag bytes based on input condition bits and calls helper
 *   functions for state transitions.
 * summary:
 *   The function reads several condition bits from DAT_0003c000, DAT_0003c003, and
 *   DAT_0003c4d6 to determine which status flags to set or clear in DAT_0003c066,
 *   DAT_0003c067, and DAT_0003c07f. It conditionally invokes helper functions like
 *   check_and_run_state_transitions_000e8460 and check_flag_and_call_subroutine_000f0594
 *   when specific state transitions occur. The function also updates DAT_0003c082 to match
 *   DAT_0003c3ab and manages bit 4 of DAT_0003c086.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void update_status_flag_bits_000e8302(void)

{
  if (((DAT_0003c030 & 4) == 0) || (DAT_0003c081 == '\x01')) {
    if (((DAT_0003c003 & 0x10) == 0) && ((DAT_0003c066 & 0x80) != 0)) {
      DAT_0003c060 = 4;
      DAT_0003c00b = DAT_0003c00b & 0xf9 | 8;
      write_byte_to_ram_and_call_two_routines(10,DAT_0003c00b);
      DAT_0003c06b = 0;
      DAT_0003c02f = 0;
      DAT_0003c067 = DAT_0003c067 & 0xfd;
      if ((DAT_0003c066 & 0x40) == 0) {
        check_and_run_state_transitions_000e8460();
        DAT_0003c066 = DAT_0003c066 | 1;
        DAT_0003c067 = DAT_0003c067 | 1;
        check_flag_and_call_subroutine_000f0594();
        write_conditional_byte_to_0x89();
      }
    }
    else if (((((DAT_0003c003 & 0x10) != 0) && ((DAT_0003c066 & 0x80) == 0)) ||
             (((DAT_0003c000 & 0x40) == 0 && ((DAT_0003c067 & 8) != 0)))) ||
            (((((DAT_0003c000 & 0x40) != 0 && ((DAT_0003c067 & 8) == 0)) &&
              ((DAT_0003c00b & 4) != 0)) ||
             (((DAT_0003c082 != DAT_0003c3ab && ((DAT_0003c07f & 0x20) != 0)) &&
              ((DAT_0003c4d6 & 0x10) != 0)))))) {
      DAT_0003c086 = DAT_0003c086 | 4;
      if ((((DAT_0003c003 & 0x10) == 0) && (DAT_0003c082 != DAT_0003c3ab)) &&
         (((DAT_0003c07f & 0x20) != 0 && ((DAT_0003c4d6 & 0x10) != 0)))) {
        update_state_flags_and_dispatch();
      }
      else {
        FUN_000e7c0a();
        if ((DAT_0003c066 & 0x40) == 0) {
          check_and_run_state_transitions_000e8460();
          check_flag_and_call_subroutine_000f0594();
          write_conditional_byte_to_0x89();
        }
      }
      DAT_0003c1ea = DAT_0003c1ea & 0xbf;
    }
    DAT_0003c086 = DAT_0003c086 & 0xfb;
    if ((DAT_0003c003 & 0x10) == 0) {
      DAT_0003c066 = DAT_0003c066 & 0x7f;
    }
    else {
      DAT_0003c066 = DAT_0003c066 | 0x80;
    }
    if ((DAT_0003c000 & 0x40) == 0) {
      DAT_0003c067 = DAT_0003c067 & 0xf7;
    }
    else {
      DAT_0003c067 = DAT_0003c067 | 8;
    }
    DAT_0003c082 = DAT_0003c3ab;
    if ((DAT_0003c02f & 1) == 0) {
      DAT_0003c067 = DAT_0003c067 & 0xdf;
    }
    else {
      DAT_0003c067 = DAT_0003c067 | 0x20;
    }
  }
  if ((DAT_0003c4d6 & 0x10) == 0) {
    DAT_0003c07f = DAT_0003c07f & 0xdf;
  }
  else {
    DAT_0003c07f = DAT_0003c07f | 0x20;
  }
  return;
}
