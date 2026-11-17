/* @k10d FUN_000da444 @ 0x000da444
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000da444(void)

{
  DAT_0003c185 = DAT_0003c185 & 0xf | 0xb0;
  initialize_system_state_000daca2();
  DAT_0003c216 = DAT_0003c185;
  write_two_nibble_values();
  set_flag_bits_and_clear_counters();
  busy_wait_on_mode_flag(1000);
  FUN_000dab0e();
  set_flag_bits_and_clear_counters();
  return;
}
