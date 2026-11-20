/* @k10d process_camera_state_flags_000da058 @ 0x000da058
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates internal state variables and conditionally calls subsystem handlers based on
 *   flag bits in DAT_0003c396 and DAT_0003f3e1.
 * summary:
 *   The function clears bit 1 of DAT_0003c184 and copies several bytes from
 *   DAT_0003c564-0x0003c566 and DAT_0003c48a into DAT_0003c6f8-0x0003c6fc. It then checks a
 *   combination of flags in DAT_0003c396, DAT_0003f3e1, and DAT_0003c193 to conditionally
 *   call set_two_byte_state_pair_000ecd6c and initialize_state_block. Later, it checks
 *   DAT_0003c036 and DAT_0003c493 to potentially clear bit 6 of DAT_00000006 and call
 *   FUN_000db280. Finally, it sets bit 7 of DAT_0003c588, calls clear_dat_0003c180_block
 *   and FUN_000c209e, clears bit 7, and conditionally calls busy_wait_on_mode_flag,
 *   FUN_000dabc8, and either process_key_event or build_control_word_and_wait based on
 *   DAT_0003c492.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void process_camera_state_flags_000da058(void)

{
  bool bVar1;
  
  bVar1 = false;
  DAT_0003c184 = DAT_0003c184 & 0xfe;
  DAT_0003c6f8 = DAT_0003c564;
  DAT_0003c6f9 = DAT_0003c565;
  DAT_0003c6fa = DAT_0003c566;
  DAT_0003c6fb = DAT_0003c48a;
  DAT_0003c6fc = (uint8_t)((int)(uint)_DAT_0003c5a0 >> 2);
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c193 & 1) != 0)) {
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c268 = _DAT_000000d4 << 2;
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c268);
  }
  dispatch_mode_transition_sequence();
  if ((((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) && ((DAT_0003c193 & 1) != 0)) {
    _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
    _DAT_0003c27c = _DAT_000000d4 << 2;
    set_three_byte_flags_000ecde4();
    set_two_byte_state_pair_000ecd6c();
    initialize_state_block(_DAT_0003c27c);
  }
  if (((DAT_0003c036 & 1) == 0) && ((DAT_0003c493 == '\t' || (DAT_0003c493 == '\x15')))) {
    DAT_00000006 = DAT_00000006 & 0xbf;
    FUN_000db280();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
      _DAT_0003c27c = _DAT_000000d4 << 2;
      set_two_byte_state_pair_000ecd6c();
      initialize_state_block(_DAT_0003c27c);
    }
    clamp_and_load_table_value();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
      _DAT_0003c27c = _DAT_000000d4 << 2;
      set_two_byte_state_pair_000ecd6c();
      set_three_byte_flags_000ecde4();
      initialize_state_block(_DAT_0003c27c);
      _DAT_0003c1e8 = 0;
      do {
        if ((DAT_0000004f & 4) != 0) {
          DAT_0000004f = DAT_0000004f & 0xfb;
          if (_DAT_0003c1e8 == 0xe) {
            set_two_byte_state_pair_000ecd6c();
          }
          initialize_state_block(1000);
          _DAT_0003c1e8 = _DAT_0003c1e8 + 1;
        }
      } while (_DAT_0003c1e8 < 0xf);
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
    }
    else {
      FUN_000d5642(0xf);
    }
  }
  DAT_0003c588 = DAT_0003c588 | 0x80;
  clear_dat_0003c180_block();
  FUN_000c209e();
  DAT_0003c588 = DAT_0003c588 & 0x7f;
  if ((((DAT_0003c589 & 1) != 0) && ((DAT_0003c58b & 2) != 0)) && ((DAT_0003c58b & 8) == 0)) {
    bVar1 = true;
    busy_wait_on_mode_flag(200);
    FUN_000dabc8();
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
      _DAT_0003c27c = _DAT_000000d4 << 2;
      set_two_byte_state_pair_000ecd6c();
      initialize_state_block(_DAT_0003c27c);
    }
    busy_wait_on_mode_flag(1000);
    if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
      _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
      _DAT_0003c27c = _DAT_000000d4 << 2;
      set_two_byte_state_pair_000ecd6c();
      initialize_state_block(_DAT_0003c27c);
    }
    switch(DAT_0003c492) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      process_key_event();
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xf:
    case 0x16:
      build_control_word_and_wait();
    }
  }
  if ((!bVar1) && ((DAT_0003c4de & 0x10) != 0)) {
    dispatch_on_byte_value();
  }
  set_flag_bits_and_clear_counters();
  return;
}
