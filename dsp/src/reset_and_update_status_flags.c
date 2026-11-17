/* @k10d reset_and_update_status_flags @ 0x000da8fa
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Clears a block of status bytes, manipulates a RAM control bit, and conditionally
 *   updates flags from a shared status word.
 * summary:
 *   The function zeroes several DAT_0003c1xx and DAT_00000420 globals. It clears and sets
 *   bit 6 (0x40) of bRam00000000 around calls to toggle_ram0_bit1_with_calls. It repeatedly
 *   calls rotate_low_nibble_of_dat_0003c217_000dad9a and
 *   rotate_low_nibble_of_dat_0003c217_000dadbc, copying the result from DAT_0003c217 into
 *   the cleared status bytes. A conditional block checks bits in DAT_0003c396,
 *   DAT_0003f3e1, and DAT_0003c1ed to decide whether to call
 *   set_two_byte_state_pair_000ecd6c and initialize_state_block or just
 *   rotate_low_nibble_of_dat_0003c217_000dad9a. Finally, it sets bits in DAT_0003c588 and
 *   DAT_0003c589 if specific conditions on the copied status bytes are met.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void reset_and_update_status_flags(void)

{
  int iVar1;
  
  DAT_0003c18d = 0;
  DAT_0003c18e = 0;
  DAT_0003c18f = 0;
  DAT_0003c190 = 0;
  DAT_0003c191 = 0;
  DAT_00000420 = 0;
  call_e31d6_with_masked_dat();
  bRam00000000 = bRam00000000 & 0xbf;
  toggle_ram0_bit1_with_calls();
  toggle_ram0_bit1_with_calls();
  bRam00000000 = bRam00000000 | 0x40;
  busy_wait_on_mode_flag(0x7e);
  write_masked_field_and_call_two_routines(0x1c,DAT_0003c00d & 0x7f | 0x80);
  write_masked_field_and_call_two_routines(0xf,0x18);
  update_ram_byte_bits(0x1f);
  bRam00000000 = bRam00000000 & 0xbf;
  write_initial_state_to_dat_block();
  bRam00000000 = bRam00000000 & 0xf7;
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c1ed & 0x80) != 0)
     ) {
    rotate_low_nibble_of_dat_0003c217_000dadbc();
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  else {
    rotate_low_nibble_of_dat_0003c217_000dad9a();
  }
  DAT_0003c18d = DAT_0003c217;
  rotate_low_nibble_of_dat_0003c217_000dad9a();
  DAT_0003c18e = DAT_0003c217;
  rotate_low_nibble_of_dat_0003c217_000dad9a();
  DAT_0003c18f = DAT_0003c217;
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c1ed & 0x80) != 0)
     ) {
    rotate_low_nibble_of_dat_0003c217_000dadbc();
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  else {
    rotate_low_nibble_of_dat_0003c217_000dad9a();
  }
  DAT_0003c190 = DAT_0003c217;
  if (((DAT_0003c18d & 0x3e) == 0) &&
     ((((iVar1 = (int)(uint)DAT_0003c18f >> 5, iVar1 == 4 || (iVar1 == 1)) || (iVar1 == 5)) &&
      (((DAT_0003c18f & 1) == -((int)((uint)DAT_0003c18e << 0x1c) >> 0x1f) &&
       (-((int)((uint)DAT_0003c18f << 0x1e) >> 0x1f) == -((int)((uint)DAT_0003c18e << 0x1d) >> 0x1f)
       )))))) {
    DAT_0003c589 = DAT_0003c589 | 1;
    DAT_0003c588 = DAT_0003c588 | 8;
    rotate_low_nibble_of_dat_0003c217_000dad9a();
    DAT_0003c191 = DAT_0003c217;
    if ((DAT_0003c217 & 0x80) != 0) {
      rotate_low_nibble_of_dat_0003c217_000dad9a();
      DAT_0003c192 = DAT_0003c217;
    }
  }
  set_flag_bits_and_clear_counters();
  return;
}
