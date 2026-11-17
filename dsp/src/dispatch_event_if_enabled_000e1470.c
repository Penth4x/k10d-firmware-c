/* @k10d dispatch_event_if_enabled_000e1470 @ 0x000e1470
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a global flag and event ID, then conditionally calls three handler functions.
 * summary:
 *   The function tests bit 5 of DAT_0003c127. If set, it evaluates param_1 against specific
 *   ranges (0xc0, 0xc5-0xce) to determine a boolean condition, potentially checking bit 7
 *   of DAT_0003c128. If the condition is true, it calls
 *   clear_status_flags_and_reset_counters, retry_two_times_and_return_status (with the
 *   lower byte of param_1), and FUN_000e16d8. It returns the value of DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_event_if_enabled_000e1470(uint param_1)

{
  bool bVar1;
  
  bVar1 = false;
  if ((DAT_0003c127 & 0x20) != 0) {
    if ((param_1 == 0xc0) || ((0xc4 < param_1 && (param_1 < 0xcf)))) {
      bVar1 = (DAT_0003c128 & 0x80) != 0;
    }
    else {
      bVar1 = true;
    }
  }
  if (bVar1) {
    clear_status_flags_and_reset_counters();
    retry_two_times_and_return_status(param_1 & 0xff);
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
