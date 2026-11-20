/* @k10d FUN_000dabc8 @ 0x000dabc8
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dabc8(void)

{
  initialize_system_state_000daca2();
  DAT_0003c216 = DAT_0003c185;
  write_two_nibble_values();
  set_flag_bits_and_clear_counters();
  return;
}
