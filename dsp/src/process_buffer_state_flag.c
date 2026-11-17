/* @k10d process_buffer_state_flag @ 0x000d5c96
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a status byte and conditionally updates buffer pointers and control flags.
 * summary:
 *   The function calls compute_index_from_code and sets bit 6 of DAT_0000000a. It branches
 *   on DAT_0003c319; if zero, it manipulates DAT_0003c310 and DAT_0003c314, potentially
 *   calling dispatch_pending_event_000d5ec0. It clears bit 0 of DAT_000000d0 and bit 6 of
 *   DAT_0000000a in both branches. Returns the value of DAT_0003c319.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char process_buffer_state_flag(void)

{
  compute_index_from_code(DAT_0003c320);
  DAT_0000000a = DAT_0000000a | 0x40;
  dispatch_pending_event_000d5e64();
  if (DAT_0003c319 == '\0') {
    _DAT_000000c1 = CONCAT13((char)_DAT_0003c314,_DAT_000000c2);
    DAT_0000000a = DAT_0000000a & 0xbf;
    wait_flag_and_call_helper();
    DAT_000000d0 = DAT_000000d0 & 0xfe;
    _DAT_0003c310 = _DAT_000000c1;
    if (0xfe < _DAT_000000c1) {
      _DAT_0003c310 = 0;
    }
    if (DAT_0003c319 == '\0') {
      _DAT_0003c280 = _DAT_0003c314;
      if (_DAT_0003c314 < _DAT_0003c310) {
        _DAT_0003c280 = _DAT_0003c310;
      }
      if (_DAT_0003c280 != 0) {
        dispatch_pending_event_000d5ec0();
      }
    }
  }
  else {
    DAT_000000d0 = DAT_000000d0 & 0xfe;
    DAT_0000000a = DAT_0000000a & 0xbf;
  }
  return DAT_0003c319;
}
