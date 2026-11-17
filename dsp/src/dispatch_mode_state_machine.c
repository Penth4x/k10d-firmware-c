/* @k10d dispatch_mode_state_machine @ 0x000d7c8a
 * name: model (proposed by the local model from the decompile, confidence 0.90)
 * purpose:
 *   Routes execution based on the value of DAT_0003c084, invoking different sequences of
 *   sub-functions for each state.
 * summary:
 *   The function acts as a central dispatcher, checking the state variable DAT_0003c084
 *   (values 0, 1, 2, -0x80) to determine which set of operations to perform. For states 0,
 *   1, and 2, it calls various initialization or update functions (e.g.,
 *   clear_flag_bit1_in_global, clear_bit7_and_call_helper) and concludes with FUN_000d62b6.
 *   For state -0x80, it enters a loop that repeatedly calls update_low_address_byte_state,
 *   configure_timer_channels, and others until a termination condition is met, suggesting a
 *   polling or wait state. The function also manipulates flags in DAT_0003c336 and
 *   DAT_000000ed.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_mode_state_machine(void)

{
  int iVar1;
  
  if (DAT_0003c084 == '\0') {
    clear_flag_bit1_in_global();
    clear_bit2_and_bit7_flags();
    FUN_000d62b6();
  }
  else if (DAT_0003c084 == '\x01') {
    if ((DAT_0003c02f & 1) == 0) {
      if ((DAT_0000000b & 4) == 0) {
        clear_bit7_and_call_helper();
        if ((DAT_0003c00f & 0x40) == 0) {
          call_subroutine_with_arg_9();
          update_state_flags_and_dispatch();
        }
        if ((DAT_0003c02f & 1) == 0) {
          wait_for_flag_with_timeout_000e22da();
        }
      }
    }
    else {
      clear_bit2_and_bit7_flags();
    }
    FUN_000d62b6();
  }
  else if (DAT_0003c084 == '\x02') {
    if ((DAT_0003c02f & 1) == 0) {
      if ((DAT_00000008 & 2) == 0) {
        clear_bit7_and_call_helper();
        if ((DAT_0003c00f & 0x40) == 0) {
          call_subroutine_with_arg_9();
          update_state_flags_and_dispatch();
        }
        if ((DAT_0003c02f & 1) == 0) {
          wait_for_flag_clear();
        }
      }
    }
    else {
      clear_flag_bit1_in_global();
    }
    FUN_000d62b6();
  }
  else if (DAT_0003c084 == -0x80) {
    iVar1 = set_flag_and_call_helper_000db7a8();
    if (iVar1 != 0) {
      call_d5642_with_100();
    }
    clear_three_status_bits();
    FUN_000d62b6();
    DAT_000000d8 = 0;
    DAT_000000ea = 0x12;
    DAT_000000ec = 1;
    DAT_000000db = 0xb;
    while( true ) {
      update_low_address_byte_state();
      configure_timer_channels();
      FUN_000d5fbe();
      call_subroutine_with_ten();
      if ((DAT_0003c084 == -1) || ((DAT_0003c030 & 4) != 0)) break;
      if (DAT_0003c084 == '\0') {
        clear_flag_bit1_in_global();
        clear_bit2_and_bit7_flags();
        if ((DAT_0003c336 & 1) != 0) {
          DAT_0003c336 = DAT_0003c336 & 0xfe;
          FUN_000d62b6();
        }
      }
      else if (DAT_0003c084 == '\x01') {
        wait_for_flag_with_timeout_000e22da();
        if ((DAT_0003c336 & 1) != 0) {
          DAT_0003c336 = DAT_0003c336 & 0xfe;
          FUN_000d62b6();
        }
      }
      else if ((DAT_0003c084 == '\x02') && (wait_for_flag_clear(), (DAT_0003c336 & 1) != 0)) {
        DAT_0003c336 = DAT_0003c336 & 0xfe;
        FUN_000d62b6();
      }
      do {
      } while ((DAT_000000ed & 0x40) == 0);
      DAT_000000ed = DAT_000000ed & 0xbf;
      increment_state_counters();
    }
    if ((DAT_0003c030 & 4) != 0) {
      FUN_000d5fbe();
    }
    if ((DAT_0003c336 & 1) != 0) {
      DAT_0003c336 = DAT_0003c336 & 0xfe;
      FUN_000d62b6();
    }
    clear_flag_bit1_in_global();
    clear_bit2_and_bit7_flags();
  }
  else if ((DAT_0003c336 & 1) != 0) {
    DAT_0003c336 = DAT_0003c336 & 0xfe;
    FUN_000d62b6();
  }
  return;
}
