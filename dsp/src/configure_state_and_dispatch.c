/* @k10d configure_state_and_dispatch @ 0x000da79e
 * name: model (proposed by the local model from the decompile, confidence 0.55)
 * purpose:
 *   Updates global state flags and dispatches to conditional subroutines based on status
 *   bits.
 * summary:
 *   The function clears DAT_00000420 and manipulates the bRam00000000 flag byte
 *   (clearing/setting bits 0x40 and 0x08). It calls busy_wait_on_mode_flag(0x7e) and
 *   performs writes via write_masked_field_and_call_two_routines and update_ram_byte_bits.
 *   It initializes DAT_0003c217 to 0 and sets DAT_0003c216 from DAT_0003c180 through
 *   DAT_0003c184, calling write_two_nibble_values or
 *   shift_and_call_two_routines/initialize_state_block based on conditions involving
 *   DAT_0003c396, DAT_0003f3e1, and DAT_0003c1ed. It concludes by calling
 *   set_flag_bits_and_clear_counters.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void configure_state_and_dispatch(void)

{
  DAT_00000420 = 0;
  call_e31d6_with_masked_dat();
  bRam00000000 = bRam00000000 & 0xbf;
  toggle_ram0_bit1_with_calls();
  bRam00000000 = bRam00000000 | 0x40;
  busy_wait_on_mode_flag(0x7e);
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d & 0x7f | 0x80);
  write_masked_field_and_call_two_routines(0xf,0x18);
  update_ram_byte_bits(0x1f);
  bRam00000000 = bRam00000000 & 0xbf;
  write_initial_state_to_dat_block();
  bRam00000000 = bRam00000000 | 8;
  DAT_0003c217 = 0;
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c1ed & 0x80) != 0)
     ) {
    toggle_bit_18_in_dat_00000061();
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  else {
    wait_for_two_flags_and_clear_bit();
  }
  DAT_0003c216 = DAT_0003c180;
  write_two_nibble_values();
  DAT_0003c216 = DAT_0003c181;
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c1ed & 0x80) != 0)
     ) {
    shift_and_call_two_routines();
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  else {
    write_two_nibble_values();
  }
  DAT_0003c216 = DAT_0003c182;
  write_two_nibble_values();
  DAT_0003c216 = DAT_0003c183;
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c1ed & 0x80) != 0)
     ) {
    shift_and_call_two_routines();
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  else {
    write_two_nibble_values();
  }
  if ((DAT_0003c589 & 1) != 0) {
    DAT_0003c216 = DAT_0003c184;
    write_two_nibble_values();
  }
  set_flag_bits_and_clear_counters();
  return;
}
