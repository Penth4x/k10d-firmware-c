/* @k10d FUN_000c617a @ 0x000c617a
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c617a(void)

{
  DAT_0003c564 = compute_signed_offset_value_000c66f6(0);
  update_status_flag_bits_000c6958();
  check_counter_delta_and_set_flag(2);
  return;
}
