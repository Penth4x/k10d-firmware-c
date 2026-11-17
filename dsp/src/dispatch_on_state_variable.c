/* @k10d dispatch_on_state_variable @ 0x000d7676
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Switches on DAT_0003c3f4 to call one of several unverified functions and toggle bits in
 *   nearby globals.
 * summary:
 *   The function reads DAT_0003c3f4 and branches on values 0,1,4,5,6,7,8,9. Each case calls
 *   an unverified callee (e.g. run_timed_polling_loop, wait_for_status_flag) and often sets
 *   then clears a bit in a nearby global (DAT_0003c214, DAT_0003c1ed, DAT_0003c1ea) or
 *   clears bit 0 of DAT_00000002. No callee names are verified, so the subsystem is
 *   unknown.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void dispatch_on_state_variable(void)

{
  switch(DAT_0003c3f4) {
  case 0:
    run_timed_polling_loop();
    DAT_00000002 = DAT_00000002 & 0xfe;
    break;
  case 1:
    wait_for_status_flag();
    break;
  case 4:
    DAT_0003c214 = DAT_0003c214 | 2;
    run_timed_polling_loop();
    DAT_00000002 = DAT_00000002 & 0xfe;
    DAT_0003c214 = DAT_0003c214 & 0xfd;
    break;
  case 5:
    wait_for_flag_with_timeout_000ea3d4();
    break;
  case 6:
    run_timed_wait_loop();
    break;
  case 7:
    DAT_0003c1ed = DAT_0003c1ed | 0x20;
    run_state_machine_sequence();
    DAT_0003c1ed = DAT_0003c1ed & 0xdf;
    break;
  case 8:
    DAT_0003c1e6 = DAT_0003c3f5;
    DAT_0003c1ed = DAT_0003c1ed | 0x40;
    run_state_machine_sequence();
    DAT_0003c1ed = DAT_0003c1ed & 0xbf;
    clear_bit_in_dat_0003c00b();
    break;
  case 9:
    DAT_0003c1ea = DAT_0003c1ea | 2;
    FUN_000ecc26();
    DAT_0003c1ea = DAT_0003c1ea & 0xfd;
  }
  return;
}
