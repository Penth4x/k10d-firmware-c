/* @k10d FUN_000ed620 @ 0x000ed620
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ed620(void)

{
  write_masked_field_and_call_two_routines(0x1b,0x80);
  bRam00000000 = bRam00000000 & 0xbf;
  busy_wait_on_mode_flag(0x14);
  bRam00000000 = bRam00000000 | 4;
  busy_wait_on_mode_flag(1);
  bRam00000000 = bRam00000000 | 0x40;
  FUN_000d5642(2);
  bRam00000000 = bRam00000000 & 0xbb | 0x40;
  return;
}
