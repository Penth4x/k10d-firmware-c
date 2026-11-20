/* @k10d dispatch_event_if_enabled_000e15b0 @ 0x000e15b0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a global enable flag and event ID, then calls a sequence of handlers if the
 *   event is accepted.
 * summary:
 *   The function first checks bit 5 of DAT_0003c127. If set, it allows the event unless
 *   param_1 is 0x6e or 0xfc, in which case it checks bit 7 of DAT_0003c128. If the event is
 *   accepted, it calls clear_status_flags_and_reset_counters, then
 *   retry_two_times_and_return_status with the low byte of param_1. If that returns 0, it
 *   calls iterate_byte_sequence with param_2; if that also returns 0, it calls
 *   read_bytes_until_flag with param_3 and 1. Finally, it calls FUN_000e16d8 and returns
 *   DAT_0003c122.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

uint8_t dispatch_event_if_enabled_000e15b0(uint param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((DAT_0003c127 & 0x20) != 0) {
    if ((param_1 == 0x6e) || (param_1 == 0xfc)) {
      bVar2 = (DAT_0003c128 & 0x80) != 0;
    }
    else {
      bVar2 = true;
    }
  }
  if (bVar2) {
    clear_status_flags_and_reset_counters();
    iVar1 = retry_two_times_and_return_status(param_1 & 0xff);
    if ((iVar1 == 0) && (iVar1 = iterate_byte_sequence(param_2), iVar1 == 0)) {
      read_bytes_until_flag((void *)param_3,1);
    }
    FUN_000e16d8();
  }
  return DAT_0003c122;
}
