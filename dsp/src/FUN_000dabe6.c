/* @k10d FUN_000dabe6 @ 0x000dabe6
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000dabe6(void)

{
  initialize_system_state_000daca2();
  DAT_0003c216 = DAT_0003c185;
  write_two_nibble_values();
  switch(DAT_0003c492) {
  case 4:
  case 6:
  case 0x10:
    DAT_0003c216 = DAT_0003c189;
    write_two_nibble_values();
    break;
  case 5:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x16:
    DAT_0003c216 = DAT_0003c189;
    write_two_nibble_values();
    DAT_0003c216 = DAT_0003c18a;
    write_two_nibble_values();
  }
  set_flag_bits_and_clear_counters();
  return;
}
