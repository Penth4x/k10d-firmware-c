/* @k10d initialize_system_state_000daca2 @ 0x000daca2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Resets a global counter, clears and sets specific bits in a RAM flag byte, and calls
 *   several initialization routines.
 * summary:
 *   The function sets DAT_00000420 to 0 and calls call_e31d6_with_masked_dat. It
 *   manipulates the byte at bRam00000000 by clearing bit 6 (0x40) and later setting it,
 *   then clearing it again and setting bit 3 (0x08). It calls toggle_ram0_bit1_with_calls
 *   five times, write_masked_field_and_call_two_routines twice with specific arguments,
 *   update_ram_byte_bits once, and finally write_initial_state_to_dat_block. The sequence
 *   suggests a multi-step initialization or state reset process involving flag management
 *   and peripheral configuration.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

void initialize_system_state_000daca2(void)

{
  DAT_00000420 = 0;
  call_e31d6_with_masked_dat();
  bRam00000000 = bRam00000000 & 0xbf;
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  bRam00000000 = bRam00000000 | 0x40;
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d & 0x7f | 0x80);
  write_masked_field_and_call_two_routines(0xf,0x18);
  update_ram_byte_bits(0x1f);
  bRam00000000 = bRam00000000 & 0xbf;
  write_initial_state_to_dat_block();
  bRam00000000 = bRam00000000 & 0xbf | 8;
  return;
}
