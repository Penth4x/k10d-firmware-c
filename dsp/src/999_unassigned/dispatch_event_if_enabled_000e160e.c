/* @k10d dispatch_event_if_enabled_000e160e @ 0x000e160e
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a global flag and parameter range, then calls a sequence of handlers if the
 *   condition is met.
 * summary:
 *   The function first tests bit 5 of DAT_0003c127. If set, it validates param_1 against a
 *   range (0xf4-0xf6) or checks bit 7 of DAT_0003c128. If the condition passes, it calls
 *   clear_status_flags_and_reset_counters, then retry_two_times_and_return_status with the
 *   lower byte of param_1. If that returns 0, it calls iterate_byte_sequence with param_2;
 *   if that also returns 0, it calls iterate_byte_array_with_callback with param_3 and 1.
 *   Finally, it calls FUN_000e16d8 and returns DAT_0003c122. The specific roles of the
 *   callees and globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_event_if_enabled_000e160e(uint param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_0003c127 & 0x20) != 0) {
    if ((param_1 < 0xf4) || (0xf6 < param_1)) {
      bVar2 = true;
    }
    else {
      bVar2 = (DAT_0003c128 & 0x80) != 0;
    }
  }
  if (bVar2) {
    clear_status_flags_and_reset_counters();
    iVar1 = retry_two_times_and_return_status(param_1 & 0xff);
    if ((iVar1 == 0) && (iVar1 = iterate_byte_sequence(param_2), iVar1 == 0)) {
      iterate_byte_array_with_callback((void *)param_3,1);
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
