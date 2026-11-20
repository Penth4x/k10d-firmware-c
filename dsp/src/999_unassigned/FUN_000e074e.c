/* @k10d FUN_000e074e @ 0x000e074e
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000e074e(void)

{
  if ((((DAT_0003c127 & 0x80) != 0) && ((DAT_0003c114 & 0x40) != 0)) && ((DAT_00000008 & 4) != 0)) {
    call_four_unnamed_helpers();
  }
  return (_DAT_0000000b & 7) >> 2;
}
