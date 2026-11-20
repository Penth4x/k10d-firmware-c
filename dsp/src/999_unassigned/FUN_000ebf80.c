/* @k10d FUN_000ebf80 @ 0x000ebf80
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ebf80(void)

{
  update_timer_counter_state();
  if (((DAT_0003c579 == '\0') && ((DAT_0003c1eb & 0x10) == 0)) && (DAT_0003c1f6 == '\x01')) {
    set_bit5_in_global_flag();
    DAT_0003c1eb = DAT_0003c1eb | 0x10;
  }
  return;
}
