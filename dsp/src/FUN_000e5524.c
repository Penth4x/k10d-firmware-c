/* @k10d FUN_000e5524 @ 0x000e5524
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e5524(void)

{
  DAT_0000009a = 0x10;
  DAT_0000009b = 0;
  DAT_00000098 = 0;
  dispatch_mode_transition_000dfc72(0,0);
  DAT_00000009 = DAT_00000009 | 0x40;
  return;
}
