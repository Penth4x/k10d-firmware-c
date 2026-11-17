/* @k10d FUN_000e1798 @ 0x000e1798
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e1798(void)

{
  clear_bit2_and_bit7_flags();
  clear_flag_bit1_in_global();
  FUN_000e0944();
  reset_state_block_by_mode(3);
  return;
}
