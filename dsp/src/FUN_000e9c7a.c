/* @k10d FUN_000e9c7a @ 0x000e9c7a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e9c7a(void)

{
  write_initial_state_flags();
  wait_and_copy_byte();
  DAT_0000040a = DAT_0000040a & 0xfe;
  bRam00000000 = bRam00000000 | 4;
  DAT_00000400 = DAT_00000400 | 1;
  DAT_00000062 = 0x10;
  DAT_00000420 = 0;
  return;
}
