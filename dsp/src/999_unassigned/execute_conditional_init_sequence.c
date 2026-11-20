/* @k10d execute_conditional_init_sequence @ 0x000f030e
 * name: model (proposed by the local model from the decompile, confidence 0.75)
 * purpose:
 *   Runs a sequence of initialization calls if specific bits in DAT_0003c066 and
 *   DAT_0003c395 are set.
 * summary:
 *   Checks bit 0 of DAT_0003c066, ensures bit 1 is clear, and verifies bit 5 of
 *   DAT_0003c395 is clear. If conditions are met, sets DAT_0003c085 to 3 and calls a series
 *   of functions (FUN_000d602c through call_d5afc_with_0x59) with conditional branches
 *   based on DAT_0003c1ed and DAT_0003c391. Finally calls set_two_byte_state_pair_000ecd94
 *   and busy_wait_on_mode_flag(200), then resets DAT_0003c085 to 0.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void execute_conditional_init_sequence(void)

{
  if ((((DAT_0003c066 & 2) == 0) && ((DAT_0003c066 & 1) != 0)) && ((DAT_0003c395 & 0x20) == 0)) {
    DAT_0003c085 = 3;
    FUN_000d602c();
    FUN_000d6036();
    call_d5afc_with_0x52();
    FUN_000d5fe6();
    call_d5afc_with_0x48();
    call_d5afc_with_0x53();
    call_d5afc_with_0x59();
    if ((DAT_0003c1ed & 1) != 0) {
      DAT_0003c1ed = DAT_0003c1ed & 0xfe;
      FUN_000d5fbe();
    }
    if ((DAT_0003c391 & 2) != 0) {
      call_d5afc_with_0x4d();
      call_d5afc_with_0x4f();
      call_d5afc_with_0x54();
      call_d5afc_with_0x51();
    }
    FUN_000d6018();
    set_two_byte_state_pair_000ecd94();
    busy_wait_on_mode_flag(200);
  }
  DAT_0003c085 = 0;
  return;
}
