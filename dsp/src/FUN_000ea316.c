/* @k10d FUN_000ea316 @ 0x000ea316
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ea316(void)

{
  uint8_t uVar1;
  
  uVar1 = DAT_00000403;
  configure_timer_channels();
  if ((DAT_0003c003 & 0x80) != 0) {
    DAT_0003c1eb = DAT_0003c1eb | 4;
    DAT_00000403 = uVar1;
    wait_for_status_flag();
    DAT_0003c1eb = DAT_0003c1eb & 0xfb;
  }
  DAT_0003c1eb = DAT_0003c1eb | 0x20;
  check_two_flag_conditions_000f04d2();
  wait_for_flag_with_timeout_000ea3d4();
  FUN_000e6b00();
  DAT_0003c1eb = DAT_0003c1eb & 0xdd;
  run_timed_wait_loop();
  return;
}
