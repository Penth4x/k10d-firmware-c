/* @k10d set_flag_and_dispatch @ 0x000d5c3a
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Sets a bit in a global flag, stores an input byte, calls a dispatcher, and
 *   conditionally invokes further handlers based on a status byte.
 * summary:
 *   The function ORs 0x40 into DAT_0000000a and stores param_1 into DAT_0003c320. It calls
 *   dispatch_pending_event_000d5e64, then checks DAT_0003c319. If zero, it manipulates
 *   DAT_000000c1, clears the 0x40 bit, calls wait_flag_and_call_helper, clears a bit in
 *   DAT_000000d0, and potentially calls dispatch_pending_event_000d5ec0. If non-zero, it
 *   simply clears the 0x40 bit and a bit in DAT_000000d0. It returns the value of
 *   DAT_0003c319.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char set_flag_and_dispatch(uint8_t param_1)

{
  DAT_0000000a = DAT_0000000a | 0x40;
  DAT_0003c320 = param_1;
  dispatch_pending_event_000d5e64();
  if (DAT_0003c319 == '\0') {
    _DAT_000000c1 = CONCAT13(param_1,_DAT_000000c2);
    DAT_0000000a = DAT_0000000a & 0xbf;
    wait_flag_and_call_helper();
    DAT_000000d0 = DAT_000000d0 & 0xfe;
    DAT_0003c31a = (uint8_t)_DAT_000000c1;
    if (DAT_0003c319 == '\0') {
      dispatch_pending_event_000d5ec0();
    }
  }
  else {
    DAT_000000d0 = DAT_000000d0 & 0xfe;
    DAT_0000000a = DAT_0000000a & 0xbf;
  }
  return DAT_0003c319;
}
