/* @k10d poll_input_and_timeout_loop @ 0x000ebd56
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Continuously polls input status and timeout counters until a termination condition is
 *   met.
 * summary:
 *   The function executes an infinite loop that checks various global flags and calls
 *   helper functions to poll state. It manages a counter (cVar2) that increments on
 *   successful polls and triggers an exit sequence (calling handle_status_flag_transition
 *   and clearing bit 2 of DAT_00000002) when specific conditions are met, such as a timeout
 *   or a count reaching 10. It also handles a 1000ms delay via
 *   update_status_flags_and_counters_000de274 under certain flag conditions.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void poll_input_and_timeout_loop(void)

{
  int iVar1;
  char cVar2;
  
  initialize_state_flags();
  cVar2 = '\0';
  do {
    if (((DAT_00000001 & 4) != 0) || (iVar1 = check_and_set_flag_if_conditions_met(), iVar1 == 1)) {
      handle_status_flag_transition();
      DAT_00000002 = DAT_00000002 & 0xfd;
      return;
    }
    if (0x4ce < _DAT_0003c1e8) {
      iVar1 = FUN_000eca86();
      if (iVar1 == 1) {
        cVar2 = cVar2 + '\x01';
        if (cVar2 == '\n') {
          handle_status_flag_transition();
          DAT_00000002 = DAT_00000002 & 0xfd;
          return;
        }
      }
      else {
        cVar2 = '\0';
      }
    }
    if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0000004f & 4) != 0))
    {
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_status_flags_and_counters_000de274(1000);
    }
    if ((DAT_000000ef & 0x40) != 0) {
      DAT_000000d7 = 0x13;
      DAT_000000d4 = 0;
      DAT_0003c206 = DAT_0003c206 + -1;
      if (_DAT_0003c1e8 != 0xffff) {
        _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
      }
      if (DAT_0003c206 == -1) {
        DAT_0003c206 = '\0';
      }
      if (((DAT_0003c206 == '\0') && ((DAT_00000001 & 2) != 0)) && ((DAT_00000001 & 1) != 0)) {
        handle_status_flag_transition();
        DAT_00000002 = DAT_00000002 & 0xfd;
        return;
      }
      DAT_000000ee = 1;
      DAT_000000e6 = 100;
      DAT_000000d7 = 3;
    }
    if (((DAT_00000001 & 0x10) == 0) && (busy_wait_on_mode_flag(500), (DAT_00000001 & 0x10) == 0)) {
      initialize_state_flags();
    }
  } while( true );
}
