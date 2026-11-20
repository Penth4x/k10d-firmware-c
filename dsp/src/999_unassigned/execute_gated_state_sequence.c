/* @k10d execute_gated_state_sequence @ 0x000ec256
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Executes a multi-step sequence of state updates and waits based on specific flag
 *   conditions in DAT_0003c1xx.
 * summary:
 *   The function checks several bit flags in DAT_0003c193, DAT_0003c18f, and DAT_0003c1ed
 *   to determine which branch to execute. It calls various subroutines (FUN_000da752,
 *   call_subroutine_with_mode_delay, etc.) and performs busy-wait loops on DAT_00000057 bit
 *   2, interspersed with calls to initialize_state_block or
 *   update_status_flags_and_counters_000de274. It modifies flags in DAT_0003c180,
 *   DAT_0003c181, and DAT_0003c1eb.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void execute_gated_state_sequence(void)

{
  if ((((DAT_0003c193 & 1) != 0) && (DAT_0003c18f >> 5 != 1)) && ((DAT_0003c1ed & 0x10) == 0)) {
    if ((DAT_0003c589 & 1) == 0) {
      FUN_000da752();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        if ((DAT_0003c1ed & 0x10) == 0) {
          initialize_state_block(1000);
        }
        else {
          update_status_flags_and_counters_000de274(1000);
        }
      }
      call_subroutine_with_mode_delay();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        if ((DAT_0003c1ed & 0x10) == 0) {
          initialize_state_block(1000);
        }
        else {
          update_status_flags_and_counters_000de274(1000);
        }
      }
      DAT_0003c180 = DAT_0003c180 | 6;
      if ((DAT_0003c181 & 0x80) != 0) {
        DAT_0003c181 = DAT_0003c181 & 0x7f;
      }
      dispatch_mode_transition_sequence();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        _DAT_0003c1e8 = 0;
        do {
          do {
          } while ((DAT_00000057 & 4) == 0);
          DAT_00000057 = DAT_00000057 & 0xfb;
          if ((DAT_0003c1ed & 0x10) == 0) {
            initialize_state_block(1000);
          }
          else {
            update_status_flags_and_counters_000de274(1000);
          }
          _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
        } while (_DAT_0003c1e8 < 10);
      }
      else {
        FUN_000d5642(10);
      }
      initialize_interrupt_context();
      if ((DAT_0003c181 & 0x40) != 0) {
        FUN_000ed8b8();
      }
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        _DAT_0003c1e8 = 0;
        do {
          do {
          } while ((DAT_00000057 & 4) == 0);
          DAT_00000057 = DAT_00000057 & 0xfb;
          if ((DAT_0003c1ed & 0x10) == 0) {
            initialize_state_block(1000);
          }
          else {
            update_status_flags_and_counters_000de274(1000);
          }
          _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
        } while (_DAT_0003c1e8 < 10);
      }
      else {
        FUN_000d5642(10);
      }
    }
    else if ((DAT_0003c184 & 0x80) == 0) {
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        initialize_state_block(1000);
      }
      FUN_000da444();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        initialize_state_block(1000);
      }
      wait_for_exit_condition();
    }
  }
  if ((DAT_0003c18f >> 5 != 1) && ((DAT_0003c1ed & 0x10) == 0)) {
    if ((DAT_0003c589 & 1) == 0) {
      FUN_000ed8b8();
      if ((DAT_0003c181 & 0x40) != 0) {
        write_masked_field_and_call_two_routines(0xb,7);
      }
      busy_wait_on_mode_flag(0x38);
      write_masked_field_and_call_two_routines(0xb,0xf);
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        _DAT_0003c1e8 = 0;
        do {
          do {
          } while ((DAT_00000057 & 4) == 0);
          DAT_00000057 = DAT_00000057 & 0xfb;
          if ((DAT_0003c1ed & 0x10) == 0) {
            initialize_state_block(1000);
          }
          else {
            update_status_flags_and_counters_000de274(1000);
          }
          _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
        } while (_DAT_0003c1e8 < 10);
      }
      else {
        FUN_000d5642(10);
      }
      clear_bit_in_dat_0003c00b();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        _DAT_0003c1e8 = 0;
        do {
          do {
          } while ((DAT_00000057 & 4) == 0);
          DAT_00000057 = DAT_00000057 & 0xfb;
          if ((DAT_0003c1ed & 0x10) == 0) {
            initialize_state_block(1000);
          }
          else {
            update_status_flags_and_counters_000de274(1000);
          }
          _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
        } while (_DAT_0003c1e8 < 10);
      }
      else {
        FUN_000d5642(10);
      }
      write_masked_field_and_call_two_routines(0xb,7);
      wait_for_exit_condition();
    }
    else if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_0003c1e8 = 0;
      do {
        do {
        } while ((DAT_00000057 & 4) == 0);
        DAT_00000057 = DAT_00000057 & 0xfb;
        if ((DAT_0003c1ed & 0x10) == 0) {
          initialize_state_block(1000);
        }
        else {
          update_status_flags_and_counters_000de274(1000);
        }
        _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
      } while (_DAT_0003c1e8 < 10);
    }
    else {
      FUN_000d5642(10);
    }
    DAT_0003c1eb = DAT_0003c1eb | 8;
  }
  return;
}
