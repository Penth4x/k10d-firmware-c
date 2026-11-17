/* @k10d update_state_and_wait @ 0x000ed2b2
 * name: model (proposed by the local model from the decompile, confidence 0.60)
 * purpose:
 *   Updates global state variables and conditionally waits for a flag bit to be set.
 * summary:
 *   The function calls write_masked_field_and_call_two_routines and busy_wait_on_mode_flag
 *   with varying arguments based on flags in DAT_0003c1ec, DAT_0003c396, and DAT_0003f3e1.
 *   It may enter a busy-wait loop checking bit 2 of DAT_0000004f, then clears that bit.
 *   Finally, it copies values from DAT_0003c210 and DAT_0003c242 into several global
 *   variables and calls unsigned_divide with a calculated offset.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void update_state_and_wait(void)

{
  byte bVar1;
  
  write_masked_field_and_call_two_routines(0xf,7);
  if ((DAT_0003c1ec & 8) == 0) {
    busy_wait_on_mode_flag(2000);
  }
  else if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    busy_wait_on_mode_flag(400);
    set_three_byte_flags_000ecde4();
    update_state_flags_and_status_byte(_DAT_0003c262 + 400);
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    set_two_byte_state_pair_000ecd6c();
    if (DAT_0003c25b == '\0') {
      set_three_byte_flags_000ecde4();
    }
    update_state_flags_and_status_byte(1000);
  }
  else {
    busy_wait_on_mode_flag(2000);
  }
  accumulate_ten_sample_values_000ece5c();
  DAT_0003c02d = (byte)_DAT_0003c210;
  bVar1 = DAT_0003c02d;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c240 = DAT_0003c02d;
    bVar1 = DAT_0003c242;
  }
  DAT_0003c242 = bVar1;
  DAT_0003ce0a = DAT_0003c02d;
  DAT_0003c1ee = unsigned_divide((uint)DAT_0003c02d * 0x2c,100);
  return;
}
