/* @k10d dispatch_event_if_enabled_000e155a @ 0x000e155a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a global enable flag and parameter range, then calls a sequence of handlers if
 *   the condition is met.
 * summary:
 *   The function first checks if bit 5 of DAT_0003c127 is set. If so, it validates param_1
 *   against a range (0x90-0x9b) or checks bit 7 of DAT_0003c128. If the condition is true,
 *   it calls clear_status_flags_and_reset_counters, then retry_two_times_and_return_status
 *   with the lower byte of param_1. If retry_two_times_and_return_status returns 0, it
 *   calls iterate_byte_array_with_callback with param_2 and param_3. Finally, it calls
 *   FUN_000e16d8 and returns the value of DAT_0003c122. The specific roles of the callees
 *   and globals are unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_event_if_enabled_000e155a(uint param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_0003c127 & 0x20) != 0) {
    if ((param_1 < 0x90) || (0x9b < param_1)) {
      bVar2 = true;
    }
    else {
      bVar2 = (DAT_0003c128 & 0x80) != 0;
    }
  }
  if (bVar2) {
    clear_status_flags_and_reset_counters();
    iVar1 = retry_two_times_and_return_status(param_1 & 0xff);
    if (iVar1 == 0) {
      iterate_byte_array_with_callback((void *)param_2,param_3);
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
