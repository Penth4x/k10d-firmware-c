/* @k10d handle_status_flag_transition @ 0x000ec884
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Evaluates multiple status flag bits to trigger specific state updates and delay
 *   routines.
 * summary:
 *   The function branches on bit 6 of DAT_0003c181. In the else branch, it clears bit 2 of
 *   DAT_0003c00c and calls write_masked_field_and_call_two_routines with a constant and the
 *   modified value. It also calls FUN_000ec718 or set_state_flags_and_call_helpers based on
 *   the value of DAT_0003c493. Both branches may wait for bit 2 of DAT_0000004f to be set,
 *   clear it, and call update_status_flags_and_counters_000de274 with 1000.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void handle_status_flag_transition(void)

{
  if ((DAT_0003c181 & 0x40) == 0) {
    if (((((DAT_0003c589 & 0x40) != 0) && (DAT_0003c493 == '\x15')) &&
        (FUN_000ec718(), (DAT_0003c396 & 0x10) == 0)) && ((DAT_0003f3e1 & 0x40) == 0)) {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
    }
  }
  else {
    if (((DAT_0003c589 & 1) != 0) && ((DAT_0003c1ec & 4) == 0)) {
      dispatch_event_by_code_000da3b8();
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        do {
        } while ((DAT_0000004f & 4) == 0);
        DAT_0000004f = DAT_0000004f & 0xfb;
        update_status_flags_and_counters_000de274(1000);
      }
      else {
        FUN_000d5642(1);
      }
    }
    DAT_0003c00c = DAT_0003c00c & 0xf7;
    write_masked_field_and_call_two_routines(0xb,DAT_0003c00c);
    if ((DAT_0003c588 & 0x20) == 0) {
      if (DAT_0003c493 == '\x15') {
        FUN_000ec718();
      }
      else if (DAT_0003c493 == '\0') {
        set_state_flags_and_call_helpers();
      }
      else if (((DAT_0003c588 & 0x20) == 0) && ((DAT_0003c588 & 0x40) == 0)) {
        set_state_flags_and_call_helpers();
      }
      if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
        do {
        } while ((DAT_0000004f & 4) == 0);
        DAT_0000004f = DAT_0000004f & 0xfb;
        update_status_flags_and_counters_000de274(1000);
      }
    }
  }
  return;
}
