/* @k10d FUN_000ea14a @ 0x000ea14a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000ea14a(void)

{
  clear_interrupt_flags_and_update_counters();
  update_bitmask_status_byte(4,0);
  clear_bit_and_set_flags();
  return;
}
