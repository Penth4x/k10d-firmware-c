/* @k10d FUN_000e33b0 @ 0x000e33b0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e33b0(void)

{
  bRam00000000 = bRam00000000 & 0xbf;
  empty_stub_000e33c4();
  bRam00000000 = bRam00000000 | 0x40;
  return;
}
