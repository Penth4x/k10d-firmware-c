/* @k10d FUN_000e92b6 @ 0x000e92b6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e92b6(void)

{
  copy_and_mask_four_bytes();
  clear_state_flags_and_set_bit();
  if ((DAT_00000001 & 1) == 0) {
    fill_four_bytes_with_pattern(1);
  }
  else if ((DAT_00000001 & 8) == 0) {
    fill_four_bytes_with_pattern(2);
  }
  else {
    fill_four_bytes_with_pattern(0);
  }
  dispatch_mode_transition_000dfc72(1,0);
  copy_four_bytes_between_dat();
  return;
}
