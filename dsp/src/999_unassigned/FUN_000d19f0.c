/* @k10d FUN_000d19f0 @ 0x000d19f0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000d19f0(void)

{
  clear_status_flag_bits_000cca22();
  DAT_0003ce05 = 0;
  update_nibble_and_flag_state();
  return;
}
