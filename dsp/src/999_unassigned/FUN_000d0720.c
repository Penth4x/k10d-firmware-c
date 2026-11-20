/* @k10d FUN_000d0720 @ 0x000d0720
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d0720(void)

{
  compute_state_word_and_lookup_values();
  clear_bit3_and_halt(_DAT_0003cf04);
  clear_bit3_and_halt(_DAT_0003cf06);
  return;
}
