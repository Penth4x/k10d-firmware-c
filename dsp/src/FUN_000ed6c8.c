/* @k10d FUN_000ed6c8 @ 0x000ed6c8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ed6c8(void)

{
  _DAT_0000000f = CONCAT13((char)DAT_0000000f_1,DAT_0000000f_1) & 0xe7ffffff;
  _DAT_00000005 = CONCAT13((char)_DAT_00000006,_DAT_00000006) | 0x18000000;
  busy_wait_on_mode_flag(0x14);
  return;
}
