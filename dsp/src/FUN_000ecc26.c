/* @k10d FUN_000ecc26 @ 0x000ecc26
 * name: unnamed (no name assigned (model abstained or not yet seen))
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ecc26(void)

{
  copy_and_mask_four_bytes();
  FUN_000ed7b6();
  set_two_byte_state_pair_000ecd6c();
  FUN_000eaf7a();
  run_timed_polling_loop();
  clear_three_status_bits();
  DAT_0003c00c = DAT_0003c00c | 4;
  write_masked_field_and_call_two_routines(0xb,DAT_0003c00c);
  _DAT_000000d4 = CONCAT31(_DAT_000000d4,0x13);
  _DAT_0003c1f0 = unsigned_divide(_DAT_000000d4,0xfa);
  process_camera_state_update();
  process_pending_state_flags();
  clear_bit_in_dat_0003c00b();
  FUN_000d5642(0x14);
  FUN_000da752();
  call_e31d6_with_0x1b_and_low_nibble();
  DAT_0003c4bf = DAT_0003c4bf & 0xf7;
  wait_for_status_flag();
  clear_three_flag_bits();
  return;
}
