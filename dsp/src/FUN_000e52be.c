/* @k10d FUN_000e52be @ 0x000e52be
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void FUN_000e52be(void)

{
  DAT_0003c020 = DAT_0003c020 | 0x80;
  clear_multiple_status_flags();
  clear_bit7_and_call_helper();
  handle_flag_0x80_event();
  clear_flag_if_both_bits_set();
  reset_state_flags_and_call_initializers_000cd9de();
  clear_flag_bit_and_counter();
  clear_bit_5_of_0x3c021_000e3aac();
  clear_three_status_bits();
  write_byte_to_ram_and_call_two_routines(0xb,1);
  write_masked_field_and_call_two_routines(0xf,0);
  DAT_0003c020 = DAT_0003c020 & 0x7f;
  return;
}
