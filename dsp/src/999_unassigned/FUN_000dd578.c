/* @k10d FUN_000dd578 @ 0x000dd578
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dd578(void)

{
  DAT_0003c802 = 0x96;
  update_bitmask_from_params(0,7,0x96);
  update_bitmask_from_params(0,1,DAT_0003f38b);
  update_bitmask_from_params(0,3,DAT_0003f38d);
  update_bitmask_from_params(1,1,DAT_0003f389);
  update_bitmask_from_params(0,2,DAT_0003f38a);
  update_bitmask_from_params(0,4,DAT_0003f38c);
  update_bitmask_from_params(1,2,DAT_0003f388);
  DAT_0003c803 = 0x96;
  update_bitmask_from_params(1,7,0x96);
  update_bitmask_from_params(1,3,0x80);
  update_bitmask_from_params(1,4,0);
  update_bitmask_from_params(0,0,0);
  update_bitmask_from_params(1,0,0);
  return;
}
