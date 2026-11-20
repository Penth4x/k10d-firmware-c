/* @k10d poll_event_and_dispatch_000ceff6 @ 0x000ceff6
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Polls for a pending event in a loop and dispatches it based on state flags.
 * summary:
 *   The function enters a do-while loop that calls poll_event_and_dispatch_000cbe84 to
 *   check for an event (likely a message or interrupt). It continues polling as long as no
 *   event is found (iVar2 == 0) and certain state conditions in DAT_0003cf0b and
 *   DAT_0003cf2c are met. Once an event is detected or the loop exits, it performs cleanup
 *   or state transitions by clearing bits in DAT_0003ce06 and calling several other
 *   functions (clear_flag_and_set_state, check_flag_and_call_helper_000f6cb2, etc.)
 *   depending on the value of DAT_0003ce10 and other flags. The return value is the result
 *   of the event check or a subsequent status code.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int poll_event_and_dispatch_000ceff6(void)

{
  uint32_t uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  do {
    process_buffered_value_with_scaling();
    update_timer_counter_and_flags(0x80);
    if (DAT_0003f489 <= _DAT_0003cf2c) {
      DAT_0003ce07 = DAT_0003ce07 | 4;
    }
    uVar1 = 0;
    if (((DAT_0003ce01 & 1) == 0) && (DAT_0003f48b <= _DAT_0003cf2c)) {
      uVar1 = 1;
    }
    iVar2 = poll_event_and_dispatch_000cbe84(0xf,uVar1);
  } while ((((iVar2 == 0) && ((DAT_0003cf0b & 8) == 0)) &&
           (((_DAT_0003cf2c < _DAT_0003cf2a && ((DAT_0003cf0e & 0x20) == 0)) ||
            (iVar2 = FUN_000cf824(), iVar2 != 0)))) && ((DAT_00000005 & 0x80) != 0));
  iVar2 = 0;
  if (DAT_0003ce10 == '\0') {
    DAT_0003ce06 = DAT_0003ce06 & 0xfe;
    clear_flag_and_set_state();
    check_flag_and_call_helper_000f6cb2();
    if ((DAT_0003cf0b & 8) == 0) {
      iVar3 = clear_flag_and_call_two_routines_000d1d30(0);
      if (((DAT_0003c128 & 0x40) == 0) || ((DAT_0003ce06 & 4) == 0)) {
        iVar2 = configure_parameter_blocks();
        set_flag_and_call_helper_000d014c();
      }
      else {
        check_and_update_byte_flag();
        bVar4 = false;
        if (((DAT_0003c12e & 0x10) != 0) || ((DAT_0003c12e & 0xc) == 0)) {
          bVar4 = true;
        }
        if (!bVar4) {
          iVar2 = configure_parameter_blocks();
        }
        set_flag_and_call_helper_000d014c();
      }
      if (iVar3 != 0) {
        iVar2 = iVar3;
      }
      _DAT_0003ce18 = _DAT_0003ce18 - _DAT_0003ce34;
    }
    else {
      DAT_0003ce10 = '\x06';
    }
  }
  return iVar2;
}
