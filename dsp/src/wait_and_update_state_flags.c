/* @k10d wait_and_update_state_flags @ 0x000ed388
 * name: model (proposed by the local model from the decompile, confidence 0.70)
 * purpose:
 *   Polls a status flag with delays and then copies a value to multiple global state
 *   variables.
 * summary:
 *   The function checks several global flags to determine a wait strategy, using busy-wait
 *   loops on DAT_0000004f bit 2 and calling delay functions with varying millisecond
 *   values. It then copies a value from DAT_0003c210 to several globals and calls
 *   unsigned_divide with a scaled value.
 * @end */
#include "frv_intrinsics.h"
#include "globals.h"
#include "funcs.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void wait_and_update_state_flags(void)

{
  byte bVar1;
  
  write_masked_field_and_call_two_routines(0xf,1);
  if ((DAT_0003c1ec & 8) == 0) {
    busy_wait_on_mode_flag(2000);
  }
  else if (((DAT_0003c396 & 0x10) == 0) && ((DAT_0003f3e1 & 0x40) == 0)) {
    if (DAT_0003c25b == '\0') {
      do {
      } while ((DAT_0000004f & 4) == 0);
      DAT_0000004f = DAT_0000004f & 0xfb;
      update_state_flags_and_status_byte(1000);
    }
    else {
      busy_wait_on_mode_flag(400);
      set_three_byte_flags_000ecde4();
      update_state_flags_and_status_byte(_DAT_0003c262 + 400);
    }
    do {
    } while ((DAT_0000004f & 4) == 0);
    DAT_0000004f = DAT_0000004f & 0xfb;
    set_two_byte_state_pair_000ecd6c();
    DAT_0000004f = DAT_0000004f & 0xfb;
    update_state_flags_and_status_byte(1000);
  }
  else {
    busy_wait_on_mode_flag(2000);
  }
  accumulate_ten_sample_values_000ece5c();
  DAT_0003c02d = (byte)_DAT_0003c210;
  bVar1 = DAT_0003c02d;
  if ((DAT_0003c066 & 1) == 0) {
    DAT_0003c241 = DAT_0003c02d;
    bVar1 = DAT_0003c243;
  }
  DAT_0003c243 = bVar1;
  DAT_0003ce0a = DAT_0003c02d;
  DAT_0003c1ef = unsigned_divide((uint)DAT_0003c02d * 0x2c,100);
  return;
}
