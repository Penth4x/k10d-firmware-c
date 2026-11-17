/* @k10d FUN_000dab84 @ 0x000dab84
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dab84(void)

{
  initialize_system_state_000daca2();
  DAT_0003c216 = DAT_0003c185;
  write_two_nibble_values();
  if (((DAT_0003c492 == '\x06') || (DAT_0003c492 == '\r')) || (DAT_0003c492 == '\x16')) {
    DAT_0003c216 = DAT_0003c187;
    write_two_nibble_values();
  }
  set_flag_bits_and_clear_counters();
  return;
}
