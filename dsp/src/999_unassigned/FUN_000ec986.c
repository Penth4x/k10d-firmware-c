/* @k10d FUN_000ec986 @ 0x000ec986
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ec986(void)

{
  write_masked_field_and_call_two_routines(0x1b,0);
  busy_wait_on_mode_flag(3);
  write_masked_field_and_call_two_routines(0x1b,0);
  bRam00000000 = bRam00000000 & 0xbf;
  if ((((DAT_0003c036 & 1) == 0) && ((DAT_0003c58b & 0x40) != 0)) && (DAT_0003c493 != -1)) {
    bRam00000000 = bRam00000000 | 4;
    DAT_0003c38c = DAT_0003c38c | 4;
  }
  busy_wait_on_mode_flag(1);
  busy_wait_on_mode_flag(0xf);
  busy_wait_on_mode_flag(1);
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
