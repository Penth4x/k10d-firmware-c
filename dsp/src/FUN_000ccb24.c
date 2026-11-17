/* @k10d FUN_000ccb24 @ 0x000ccb24
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ccb24(void)

{
  if ((((DAT_0003f2c4 != '\0') && (_DAT_0003cc6a != 0)) && ((DAT_0003ce01 & 1) == 0)) &&
     ((((DAT_0003ce02 & 3) != 0 || ((DAT_0003ce04 & 8) != 0)) && ((DAT_0003ce01 & 8) != 0)))) {
    DAT_0003ce03 = DAT_0003ce03 | 0x40;
    compute_index_with_offset();
    process_state_transition_000ccbc6(_DAT_0003ce2c);
    DAT_0003ce03 = DAT_0003ce03 & 0xbf;
  }
  return;
}
