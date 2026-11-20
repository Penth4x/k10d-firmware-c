/* @k10d FUN_000ddea0 @ 0x000ddea0
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ddea0(void)

{
  write_config_constants_and_call_helper();
  write_three_pair_values_to_dat_block();
  clear_flags_and_set_bits();
  FUN_000dd578();
  set_bit_1_and_5_in_three_flags();
  set_bit7_and_notify();
  clear_state_block();
  clear_six_word_globals_000dbb52();
  clear_tenth_global_words();
  DAT_0003c800 = 0;
  DAT_0003c801 = 0;
  _DAT_0003c88e = 0;
  DAT_0003c804 = DAT_0003c804 & 3;
  DAT_0003f55e = DAT_0003f55e & 0xcf;
  DAT_0003f55f = 0;
  DAT_0003f54e = 0;
  DAT_0003c80f = DAT_0003c80f & 0xcf;
  toggle_bit0_from_bit1();
  return;
}
