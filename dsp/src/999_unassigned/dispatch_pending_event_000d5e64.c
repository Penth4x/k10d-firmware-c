/* @k10d dispatch_pending_event_000d5e64 @ 0x000d5e64
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Loops checking a global flag and dispatches to one of three handlers based on a state
 *   byte.
 * summary:
 *   The function polls DAT_00000005 and DAT_0000014f in a loop. It branches on the value of
 *   DAT_0003c085 (1, 2, or 3) to call FUN_000cdeb8, FUN_000f02d2, or
 *   dispatch_delayed_action respectively. If the loop exits, it calls check_low_nibble_flag
 *   and sets DAT_0003c319 to 2 if the result is zero.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_pending_event_000d5e64(void)

{
  int iVar1;
  
  while( true ) {
    if ((DAT_00000005 & 1) != 0) {
      return;
    }
    if ((DAT_0000014f & 0x10) != 0) break;
    if (DAT_0003c085 == '\x01') {
      FUN_000cdeb8();
    }
    else if (DAT_0003c085 == '\x02') {
      FUN_000f02d2();
    }
    else if (DAT_0003c085 == '\x03') {
      dispatch_delayed_action(0);
    }
  }
  iVar1 = check_low_nibble_flag();
  if (iVar1 != 0) {
    return;
  }
  DAT_0003c319 = 2;
  return;
}
