/* @k10d FUN_000c7526 @ 0x000c7526
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000c7526(void)

{
  increment_cyclic_counter_on_flag();
  toggle_bit1_flag_pair();
  toggle_flag_bit2_via_callback();
  toggle_flag_via_callback();
  return;
}
