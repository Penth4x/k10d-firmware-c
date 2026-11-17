/* @k10d FUN_000f02d2 @ 0x000f02d2
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f02d2(void)

{
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) &&
     (_DAT_0003c268 = _DAT_000000d4 << 2, 999 < _DAT_0003c268)) {
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c268);
  }
  return;
}
