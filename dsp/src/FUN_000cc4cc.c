/* @k10d FUN_000cc4cc @ 0x000cc4cc
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cc4cc(void)

{
  compute_position_delta(_DAT_0003cc6a);
  clear_bits_and_shift_global();
  DAT_0003ce02 = DAT_0003ce02 & 0x8f;
  if ((DAT_0003cb80 & 1) != 0) {
    DAT_0003ce02 = DAT_0003ce02 | 0x40;
  }
  set_status_flag_and_notify(DAT_0003ce02 & 0xc ^ 4);
  return;
}
