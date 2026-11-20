/* @k10d dispatch_pending_status_flags @ 0x000e02bc
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Checks a set of global status flags and conditionally invokes handler functions based
 *   on their state.
 * summary:
 *   The function evaluates multiple bit flags in global variables (DAT_0003c127,
 *   DAT_0003c128, etc.) to determine which of several handler functions
 *   (check_key_enabled_and_dispatch, update_status_byte_and_send_000e1b62,
 *   dispatch_event_if_enabled_000e1470) should be called. It unconditionally calls
 *   FUN_000e035c and may call clear_bit2_and_bit7_flags or wait_for_flag_clear_with_timeout
 *   depending on the results of the previous checks. The specific meaning of the flags and
 *   handlers is not determinable from the provided context.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_pending_status_flags(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  
  bVar1 = false;
  bVar2 = false;
  if ((DAT_0003c127 & 0x20) == 0) {
    if (((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c114 & 0x40) != 0)) {
      if (((DAT_0003c128 & 0x80) != 0) &&
         ((((DAT_0003c12d & 4) != 0 && ((DAT_0003c128 & 8) != 0)) && ((DAT_0003c02f & 1) == 0)))) {
        check_key_enabled_and_dispatch(0xdb);
        bVar1 = true;
      }
      if (((DAT_0003c130 & 0x80) != 0) && ((DAT_0003c02f & 1) == 0)) {
        DAT_0003c130 = DAT_0003c130 & 0x7f;
        update_status_byte_and_send_000e1b62();
        bVar2 = true;
      }
    }
  }
  else if ((((DAT_0003c128 & 0x80) != 0) && ((DAT_0003c12c & 0x20) != 0)) &&
          (((DAT_0003c128 & 8) != 0 && (iVar3 = check_and_dispatch_state_flags(), iVar3 == 1)))) {
    dispatch_event_if_enabled_000e1470(0xc5);
    bVar1 = true;
  }
  FUN_000e035c();
  if ((bVar1) && (wait_for_status_bit_clear_000e042c(), (DAT_0003c127 & 0x20) != 0)) {
    clear_bit2_and_bit7_flags();
  }
  if (bVar2) {
    wait_for_flag_clear_with_timeout();
  }
  return;
}
