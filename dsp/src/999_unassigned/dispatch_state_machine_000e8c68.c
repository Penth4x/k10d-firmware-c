/* @k10d dispatch_state_machine_000e8c68 @ 0x000e8c68
 * name: model (proposed by the local model from the decompile, confidence 0.95)
 * purpose:
 *   Executes a state machine by switching on a global state variable and calling specific
 *   handlers for each state.
 * summary:
 *   The function reads the value of _DAT_0003c21e and branches to one of ten cases. Each
 *   case performs a sequence of operations including calling helper functions (e.g.,
 *   poll_status_bit_sequence, run_timed_polling_loop) and modifying various global flags
 *   and data structures (e.g., DAT_00000002, DAT_0003c1ed). The specific behavior depends
 *   entirely on the current state value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void dispatch_state_machine_000e8c68(void)

{
  poll_status_bit_sequence();
  call_subroutine_with_arg_9();
  switch(_DAT_0003c21e) {
  case 0:
    run_timed_polling_loop();
    DAT_00000002 = DAT_00000002 & 0xfe;
    break;
  case 1:
    wait_for_status_flag();
    break;
  case 2:
    DAT_0003c214 = DAT_0003c214 | 2;
    run_timed_polling_loop();
    DAT_00000002 = DAT_00000002 & 0xfe;
    DAT_0003c214 = DAT_0003c214 & 0xfd;
    break;
  case 3:
    wait_for_flag_with_timeout_000ea3d4();
    break;
  case 4:
    run_timed_wait_loop();
    break;
  case 5:
    DAT_0003c1ed = DAT_0003c1ed | 0x20;
    run_state_machine_sequence();
    DAT_0003c1ed = DAT_0003c1ed & 0xdf;
    break;
  case 6:
    FUN_000d5642(10);
    poll_status_bit_sequence();
    DAT_0003c1e6 = DAT_0003c21f;
    DAT_0003c1ed = DAT_0003c1ed | 0x40;
    run_state_machine_sequence();
    DAT_0003c1ed = DAT_0003c1ed & 0xbf;
    clear_bit_in_dat_0003c00b();
    break;
  case 7:
    DAT_00000002 = DAT_00000002 | 3;
    poll_status_bit_sequence();
    _DAT_0003f3e6 = _DAT_0003c21e;
    FUN_000ecd00();
    process_camera_state_update();
    break;
  case 8:
    FUN_000d5642(10);
    poll_status_bit_sequence();
    DAT_0003c1ea = DAT_0003c1ea | 2;
    FUN_000ecc26();
    DAT_0003c1ea = DAT_0003c1ea & 0xfd;
    break;
  case 9:
    DAT_00000002 = DAT_00000002 | 3;
    poll_status_bit_sequence();
    DAT_0003c564 = DAT_0003c21f;
    FUN_000ecd00();
    process_camera_state_update();
  }
  return;
}
