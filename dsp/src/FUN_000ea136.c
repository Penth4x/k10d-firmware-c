/* @k10d FUN_000ea136 @ 0x000ea136
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ea136(void)

{
  clear_interrupt_flags_and_update_counters();
  update_bitmask_status_byte(4,_DAT_0003c01c);
  clear_bit_and_set_flags();
  return;
}
