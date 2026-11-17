/* @k10d poll_event_loop_until_exit @ 0x000ebe76
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Continuously polls status flags and calls handlers until an exit condition is met.
 * summary:
 *   The function runs an infinite loop that waits for a bit in DAT_000000cf to be set.
 *   Inside the loop, it calls dispatch_key_event and checks various status bits in
 *   DAT_00000001, DAT_0003c038, and DAT_0003c000. If specific conditions are met, it calls
 *   handle_status_flag_transition, clears bits in DAT_00000002 and DAT_0003c330, and
 *   returns. It also tracks a counter in _DAT_0003c1e8 and calls FUN_000eca86 if the
 *   counter exceeds 0x800.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_event_loop_until_exit(void)

{
  int iVar1;
  char cVar2;
  
  cVar2 = '\0';
  do {
    while ((DAT_000000cf & 4) == 0) {
      if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
         ((DAT_0000004f & 4) != 0)) {
        DAT_0000004f = DAT_0000004f & 0xfb;
        update_status_flags_and_counters_000de274(1000);
      }
    }
    DAT_000000cf = DAT_000000cf & 0xfb;
    if (_DAT_0003c1e8 != 0xffff) {
      _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
    }
    dispatch_key_event(0x70,(int)&DAT_0003c12d);
    if ((DAT_0003c038 & 0x20) == 0) {
      if (((DAT_00000001 & 4) != 0) ||
         (((((DAT_00000001 & 2) != 0 && ((DAT_00000001 & 1) != 0)) && ((DAT_0003c330 & 0x20) == 0))
          || (iVar1 = check_and_set_flag_if_conditions_met(), iVar1 == 1)))) {
        handle_status_flag_transition();
        DAT_00000002 = DAT_00000002 & 0xfd;
        DAT_0003c330 = DAT_0003c330 & 0xdf;
        return;
      }
    }
    else if ((((DAT_00000001 & 4) != 0) || (iVar1 = check_and_set_flag_if_conditions_met(), iVar1 == 1)) ||
            ((DAT_0003c000 & 4) != 0)) {
      handle_status_flag_transition();
      DAT_00000002 = DAT_00000002 & 0xfd;
      DAT_0003c330 = DAT_0003c330 & 0xdf;
      return;
    }
    if (0x800 < _DAT_0003c1e8) {
      iVar1 = FUN_000eca86();
      if (iVar1 == 1) {
        cVar2 = cVar2 + '\x01';
        if (cVar2 == '\n') {
          handle_status_flag_transition();
          DAT_0003c330 = DAT_0003c330 & 0xdf;
          DAT_00000002 = DAT_00000002 & 0xfd;
          return;
        }
      }
      else {
        cVar2 = '\0';
      }
    }
  } while( true );
}
