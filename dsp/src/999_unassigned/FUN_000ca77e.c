/* @k10d FUN_000ca77e @ 0x000ca77e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ca77e(void)

{
  DAT_0003c410 = DAT_0003c410 & 0xfb;
  update_camera_state_flags();
  if ((((DAT_0003c022 & 1) == 0) || (DAT_0003c440 != '\x11')) || ((DAT_0003c4de & 1) != 0)) {
    DAT_0003c410 = DAT_0003c410 | 4;
  }
  return;
}
