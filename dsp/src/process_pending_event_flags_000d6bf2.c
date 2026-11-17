/* @k10d process_pending_event_flags_000d6bf2 @ 0x000d6bf2
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a global flag and dispatches to various handler functions based on a set of
 *   pending event bits.
 * summary:
 *   The function first checks bit 0 of DAT_0003c332. If set, it calls initialization
 *   routines and then enters a loop that processes specific event flags stored in
 *   DAT_0003c334 through DAT_0003c33c. Each non-zero flag triggers a corresponding handler
 *   function (e.g., dispatch_first_pending_callback,
 *   dispatch_pending_event_flags_000d6e60). The loop continues until a specific bit in
 *   DAT_00000001 is set or a termination condition in DAT_0003c332 is met. It also
 *   manipulates bits in DAT_00000401 and DAT_00000501 during the process.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_pending_event_flags_000d6bf2(void)

{
  byte bVar1;
  byte bVar2;
  
  if ((_DAT_0003c332 & 1) != 0) {
    call_subroutine_with_arg_9();
    check_state_and_dispatch();
    DAT_0003c054 = 0xff;
    DAT_00000096 = 0xff;
    if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
      DAT_0003c05d = DAT_0003c05d | 0x10;
      _DAT_0003c332 = _DAT_0003c332 & 0xfffc;
      FUN_000d6126();
      bVar2 = DAT_00000501;
      bVar1 = DAT_00000401;
      DAT_00000501 = DAT_00000501 | 4;
      DAT_00000401 = DAT_00000401 & 0xfb;
      call_subroutine_with_0x40();
      while (((_DAT_00000001 & 0x4000000) == 0 && ((_DAT_0003c332 & 2) == 0))) {
        if ((_DAT_0003c332 & 0xfffd) != 0) {
          dispatch_pending_flag_handlers();
        }
        if (_DAT_0003c334 != 0) {
          dispatch_first_pending_callback();
        }
        if (_DAT_0003c336 != 0) {
          dispatch_pending_event_flags_000d6e60();
        }
        if (_DAT_0003c338 != 0) {
          dispatch_two_bitmask_handler_arrays();
        }
        if (_DAT_0003c33a != 0) {
          dispatch_pending_event_flags_000d71a6();
        }
        if (_DAT_0003c33c != 0) {
          dispatch_two_bitmask_handler_arrays();
        }
      }
      DAT_00000401 = bVar1;
      DAT_00000501 = bVar2;
      if ((_DAT_00000001 & 7) >> 2 == 0) {
        DAT_0003c030 = DAT_0003c030 & 0xfb;
      }
      else {
        DAT_0003c030 = DAT_0003c030 | 4;
      }
    }
    clear_state_flags_and_notify();
    if ((_DAT_0003c332 & 2) != 0) {
      _DAT_0003c332 = _DAT_0003c332 & 0xfffd;
      call_subroutine_with_0x81();
    }
    DAT_0003c05d = DAT_0003c05d & 0xef;
  }
  return;
}
