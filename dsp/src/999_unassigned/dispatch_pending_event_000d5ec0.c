/* @k10d dispatch_pending_event_000d5ec0 @ 0x000d5ec0
 * name: model (proposed by the local model from the decompile, confidence 0.85)
 * purpose:
 *   Checks a global event code and calls one of three handlers, or a fallback handler if a
 *   flag is set.
 * summary:
 *   The function loops while a global flag (DAT_00000005) is set and another flag
 *   (DAT_0000014f) is not. It reads a byte from DAT_0003c085 and dispatches to
 *   FUN_000cdeb8, FUN_000f02d2, or dispatch_delayed_action based on values 1, 2, or 3. If
 *   the loop exits due to the flag, it calls check_low_nibble_flag; if that returns 0, it
 *   sets DAT_0003c319 to 3.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_pending_event_000d5ec0(void)

{
  int iVar1;
  
  while( true ) {
    if ((DAT_00000005 & 1) == 0) {
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
  DAT_0003c319 = 3;
  return;
}
