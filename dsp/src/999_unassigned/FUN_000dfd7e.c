/* @k10d FUN_000dfd7e @ 0x000dfd7e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dfd7e(void)

{
  bRam00000000 = bRam00000000 | 4;
  busy_wait_on_mode_flag(1);
  DAT_00000420 = DAT_00000420 | 4;
  DAT_00000009 = DAT_00000009 & 0xdf;
  busy_wait_on_mode_flag(1);
  wait_for_two_status_bits();
  return;
}
