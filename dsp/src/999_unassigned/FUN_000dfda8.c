/* @k10d FUN_000dfda8 @ 0x000dfda8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dfda8(void)

{
  wait_for_two_status_bits();
  busy_wait_on_mode_flag(0x14);
  DAT_00000420 = DAT_00000420 & 0xfb;
  bRam00000000 = bRam00000000 & 0xfb;
  busy_wait_on_mode_flag(1);
  DAT_00000009 = DAT_00000009 | 0x20;
  return;
}
