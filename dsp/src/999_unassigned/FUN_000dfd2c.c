/* @k10d FUN_000dfd2c @ 0x000dfd2c
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dfd2c(void)

{
  bRam00000000 = bRam00000000 | 4;
  busy_wait_on_mode_flag(1);
  DAT_00000420 = DAT_00000420 | 4;
  DAT_00000009 = DAT_00000009 & 0xdf;
  busy_wait_on_mode_flag(1);
  DAT_0003c217 = 0x80;
  wait_for_two_status_bits();
  busy_wait_on_mode_flag(0x14);
  DAT_00000420 = DAT_00000420 & 0xfb;
  bRam00000000 = bRam00000000 & 0xfb;
  busy_wait_on_mode_flag(1);
  DAT_00000009 = DAT_00000009 | 0x20;
  return;
}
